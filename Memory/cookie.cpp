#include <iostream>
#include <Windows.h>
using namespace std;

int main(int argc, char const *argv[])
{
    DWORD pid = 16116;
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);
    if (hProcess == NULL){
        cerr << "Erro ao abrir o processo. Codigo de Erro: " << GetLastError() << endl;
        return 1;
    }
    uintptr_t cookieAddress = 0x25800873880;
    double valueRead;
    BOOL readSuccess = ReadProcessMemory(hProcess, reinterpret_cast<LPVOID>(cookieAddress), &valueRead, sizeof(valueRead), nullptr);

    if (!readSuccess){
        cerr << "Erro ao ler a memoria do Processo. Codigo do Erro: " << GetLastError() << endl;
        return 1;
    }
    cout << "Valor do Cookie: " << valueRead << endl;
    double writtenValue = valueRead * 1000;
    BOOL writeSuccess = WriteProcessMemory(hProcess, reinterpret_cast<LPVOID>(cookieAddress), &writtenValue,sizeof(writtenValue), nullptr);
    if (!writeSuccess){
        cerr << "Erro ao escrever na memoria do Processo. Codigo do Erro: " << GetLastError() << endl;
        return 1;
    }   
    cout << "Novo Valor do Cookie: " << writtenValue << endl;

    return 0; 
}