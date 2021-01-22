#include <iostream>
#include <windows.h>

using namespace std;

DWORD pID;
DWORD foodADD = 0xDC3eFCC4;
int food;

int nFood = food += 20;

int main()
{
	cout << "PRESS THE UP ARROW KEY!" << endl;

	while (true)
	{
		if (GetAsyncKeyState(VK_UP))
		{
			for (;;)
			{
				HWND hwnd = FindWindowA(0, ("Minecraft 1.7.10));
				if (!hwnd) cerr << "CANNOT FIND MINECRAFT 1.7.10" << endl;

				GetWindowThreadProcessId(hwnd, &pID);
				HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pID);
				if (!pHandle) cerr << "ERROR" << endl;
				ReadProcessMemory(pHandle, (LPVOID)foodADD, &food, (DWORD)sizeof(food), 0);


				WriteProcessMemory(pHandle, (LPVOID)foodADD, &nFood, (DWORD)sizeof(nFood), 0);

			}
		}
	}
	system("pause");
	return 1;
}
