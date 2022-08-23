#include <Windows.h>
#include <Shlwapi.h>
#include <KexDll.h>
#include <Winhttp.h>

DWORD WINAPI WinHttpWebSocketClose( HINTERNET hsocket, USHORT status, void *reason, DWORD len ) {
    
}

DWORD WINAPI WinHttpWebSocketReceive(HINTERNET hWebSocket, PVOID pvBuffer, DWORD dwBufferLength, DWORD *pdwBytesRead, enum WINHTTP_WEB_SOCKET_BUFFER_TYPE *peBufferType) {
	
}

DWORD WINAPI WinHttpWebSocketSend(HINTERNET hWebSocket, enum WINHTTP_WEB_SOCKET_BUFFER_TYPE eBufferType, PVOID pvBuffer, DWORD dwBufferLength) {
	
}

HINTERNET WINAPI WinHttpWebSocketCompleteUpgrade(HINTERNET hRequest, DWORD_PTR pContext) {
	
}

void WINAPI WinHttpEtwSetActivityIdFromHandle(void *a1, char a2, struct _WINHTTP_ETW_INFO *a3) {
	
}