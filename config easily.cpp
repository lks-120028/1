# include <bits/stdc++.h>
# include <windows.h>
# include <conio.h>
# include <io.h>
using namespace std;


vector<string>files;
string themefilename[100010];// = {"Intellij-Dark", "Intellij-Light", "Monokai", "One-Dark-Pro", "Pink", "Sakura", "VSCode-Default"};

string getuser() {
	char currentUser[256] ={0};
	DWORD dwSize_currentUser = 256;
	GetUserName(
		currentUser,
		&dwSize_currentUser
		);
	
	string res = currentUser;
	return res;
}

void install_themes() {
	
	Sleep(1000);
	string s = "c:\\Users\\" + getuser() + "\\AppData\\Roaming\\Dev-Cpp\\";
	system("cls");
	system("@echo off");
	puts("info");
	cout << " - ��ȡ�� Dev-C++ AppData ·��" << s << "\n" << "\n"; 
	Sleep(1000);
	/*
	for (register int i = 0; i < files.size(); i++) {
		//string from = themefilename[i] + ".syntax";
		if(files[i][files[i].size()-1]!='x') continue;
		string from=files[i];
		string to = s + from;
		string op = "copy themes\\" + from + " " + to;
		cout << op << "\n";
		system(op.c_str());
		cout << " - �Ѱ�װ���� " << from << "\n";
		Sleep(1000);
	}
	system("cls");
	*/
	system(("xcopy themes\\*.syntax "+s).c_str());
	system("cls");
	puts("�ɹ���װȫ�����⣬��ص���ҳѡ[2]�鿴ʹ��/��ɫ��ʾ");
	MessageBox(NULL, "�ɹ���װȫ������", "Dev-C++����һ����װ����", MB_OK);
	return;
}

void show_theme_tips() {
	system("cls");
	/*
	puts("����ʹ����ʾ��");
	puts("  1.�� Dev-C++");
	puts("  2.ѡ�񹤾�[T] - �༭��ѡ��[E]");
	puts("  3.�л����﷨");
	puts("  4.�����·�ѡ��Ԥ�裬����ѡȡ��ϲ�������⼴��"); 
	puts("");
	puts("��ǰ����ɫ�����彨�飺");
	printf("  Intellij Dark : ���彨��ʹ��Jetbarins Mono,��ǰ�н���ʹ��R 50,G 50,B 50.\n"
		"  Intellij Light : ���彨��ʹ��Jetbrains Mono,��ǰ�н���ʹ��R 252,G 250,B 237.\n"
		"  Monokai: ���彨��ʹ��Consolas,��ǰ�н���ʹ��R 56,G 53,B 57.\n"
		"  Pink : �޽���.\n"
		"  Sakura : �޽���.\n"
		"  VScode default : ���彨��ʹ��Consolas,��ǰ�н���ȡ������.\n"
		"  OneDarkPro : ���彨��ʹ��Consolas,��ǰ�н���R 44,G 49,B 60.\n");
	puts("");
	printf("���س�[Enter]����");
	*/
	system("start README.md");
	getchar(); getchar(); 
} 

void install_fonts() {
	system("cls");
	puts("���������ᵯ�� 2�����ڣ�һ���Ǳ������Դ��� .ttf �����ļ��У���һ���� Windows �����ļ��У�����Ҫ���������е����� .ttf �����ļ�ȫѡ���϶��� Windows �����ļ����У����ȴ�ϵͳ�Զ���װ���");
	printf("\n�Ķ���ɺ󣬰��س�[Enter]�򿪴���");
	getchar(); getchar();
	printf("\n���ڴ򿪱������Դ��� .ttf �����ļ�");
	system("explorer Fonts");
	printf("\n\n���س�[Enter]�� Windows �����ļ���");
	getchar();
	system("start explorer C:\\Windows\\Fonts");
	printf("\n\n���س�[Enter]����");
	getchar();
	return;
}

void menu() {
	system("title Dev-C++����һ����װ����"); 
	system("cls");
	puts("");
	puts("               Dev-C++����һ����װ����");
	puts("    ��������:Baoyh&optimize_2  ��������:optimize_2");
	puts(""); 
	puts(" [1] ��װȫ�����⵽���߻�ȡ�� Dev-C++ Appdata·��");
	puts(" [2] �鿴����");
	puts(" [3] ��װȫ�����嵽 Windows\\Font ·��");
	puts(" [4] ������ github ��Դ��ַ");
	puts(" [5] �˳�����"); 
	puts("");
	printf(" ���������: "); 
	int x;
	scanf("%d", &x);
	if (x != 1 && x != 2 && x != 3 && x != 4 && x != 5) {
		MessageBox(NULL, "�����������", "Dev-C++����һ����װ����", MB_OK);
		menu(); 
	} 
	if (x == 5) {
		exit(0);
	}
	if (x == 4) {
		system("start themes\\github.url");
		menu();
	}
	if (x == 1) {
		install_themes();
		menu();
	} 
	if (x == 2) {
		show_theme_tips();
		menu();
	}
	if (x == 3) {
		install_fonts();
		menu();
	}
}

int main() {
	menu();
	return 0;
}
