#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int findLen(char string1[]) {
	int len = 0;
	int i = 0;
	while (true)
	{
		if (string1[i] != '\0')
		{
			len++;
		}
		else
		{
			break;
		}
		i++;
	}
	return len;
}

int main()
{
	//char word[] = { 'h','i','!' };
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << word[i];
	//}



	//char string[] = "bembem";
	//cout << string <<" has "<<sizeof(string)<<" chars"<< endl;



	//for (int i = 0; i < sizeof(string); i++)
	//{
	//	cout << "letter " << string[i] << "has code " << static_cast<int>(string[i]) << endl;
	//}



	//string[1] = 'I';
	//cout << string;



	//char name[15] = "max";
	//cout << "name: " << name << endl;



	//char yName[255];
	//cout << "enter name: " << endl;
	//cin >> yName;
	//cin.getline(yName, 255);
	//cout << "name: " << yName << endl;



	//char text[] = "print";
	//char copy[50];
	//strcpy_s(copy, text);
	//cout << text << endl;
	//cout << copy << endl;

	//cout << "size of: " << strlen(copy) << endl;




	//char arr[255] = "Returns the head of a list.";
	//cout << arr;

	//cin >> arr; 
	//cin.getline(arr, 255);
	//cout << arr << endl;
	//_strupr_s(arr);
	//cout << arr << endl;
	//_strlwr_s(arr);
	//cout << arr << endl;

	//_strrev(arr);
	//cout << arr << endl;

	//cout << "copy" << endl;
	//char arr2[255];
	//strcpy_s(arr2, arr);
	//cout << "copy: " << arr2 << endl;
	//arr2[4] = '\0';
	//for (int i = 0; i < 255; i++)
	//{
	//	cout << arr2[i] << endl;
	//}


	//cout << "add to arr" << endl;
	//cout << arr << endl;
	//strcat_s(arr, "========");//adds<--
	//cout << arr << endl;
	//cout << "add text" << endl;
	//strcat_s(arr, arr2);
	//cout << arr << endl;

	//char any[] = "white1";
	//cout << any[0]<<" -->"<<(bool)isalnum(any[0])<<endl;//is num
	//cout << any[5]<<" -->"<<(bool)isalnum(any[5])<<endl;

	//cout << any[5]<<" -->"<<(bool)isalpha(any[5])<<endl;//is letter

	//cout << any[0]<<" -->"<<(bool)isdigit(any[0])<<endl;//is lnum

	//cout << any[0]<<" -->"<<(bool)isupper(any[0])<<endl;//is upper

	//cout << any[0]<<" -->"<<(char)tolower(any[0])<<endl;//make lower
	//cout << any[0]<<" -->"<<(char)toupper(any[0])<<endl;//make upper



	//double x = -5, y = 2, z = 7;
	//cout <<setw(5)<< x << endl;
	//cout <<setw(5)<< y << endl;
	//cout << setw(5) << z << endl;

	//SetColor(5);
	//cout << "hello" << endl;
	//SetColor(7);//7-console color

	//for (int i = 0; i < 3000; i++)
	//{
	//	SetColor(i); cout << "hello" << endl;
	//}
	//Sleep(3000);
	//system("cls");
	//SetPos(30, 5);
	//SetColor(4);
	//cout << "hi" << endl;

	//srand(time(0));

	//for (int i = 0; i < 150; i++)
	//{
	//	SetPos(rand()%30, rand() % 30);
	//	SetColor(rand() % 16);
	//	cout << "*";
	//	Sleep(250);
	//}


	//for (int i = 0; i < 255; i++)
	//{
	//	cout << i << "-->" << (char)i << endl;
	//}





//1any_word==a,a++


//char string1[255];
//cout << "enter string" << endl;
//cin >> string1;
//
//int a = 0;
//int o = 0;
//for (int i = 0; i < 255; i++)
//{
//	if (string1[i]=='a')
//	{
//		a++;
//	}
//	else if (string1[i]=='o')
//	{
//		o++;
//	}
//}
//cout << "there are: " << a << " a`s" << endl;
//cout << "there are: " << o << " o`s" << endl;


//2 isspace,isdigit

// char string1[255];
//cout << "enter string" << endl;
//cin.getline( string1,255);
//
//int space = 0;
//int letter = 0;
//int nums = 0;
//
//for (int i = 0; i < strlen(string1); i++)
//{
//	if (isspace(string1[i]))
//	{
//		space++;
//	}
//	 if (isdigit(string1[i]))
//	{
//		nums++;
//	}
//	 if (isalpha(string1[i]))
//	{
//		letter++;
//	}
//}
//cout << "there are: " << space << " spaces" << endl;
//cout << "there are: " << nums << " numbers" << endl;
//cout << "there are: " << letter << " letters" << endl;

//3if isupper than tolower

// char string1[255];
//cout << "enter string" << endl;
//cin.getline( string1,255);
//
//for (int i = 0; i < strlen(string1); i++)
//{
//	if (isupper(string1[i]))
//	{
//		string1[i] = tolower(string1[i]);
//	}
//	else if (islower(string1[i]))
//	{
//		string1[i]=toupper(string1[i]);
//	}
//}
//cout << string1 << endl;

//4if symbol==true,count++,if word!=/0

//char string1[255];
//cout << "enter string" << endl;
//cin.getline( string1,255);
//
//
//int ao = findLen(string1);
//cout << ao << endl;

//5

	//char string1[255];
	//cout << "enter string" << endl;
	//cin.getline(string1, 255);

	//char another[255];
	//int j = 0;

	//char symbol;
	//cout << "enter symbol to delete" << endl;
	//cin >> symbol;
	//for (int i = 0; i < strlen(string1); i++)
	//{
	//	if (string1[i] != symbol)
	//	{
	//		another[j] = string1[i];
	//		j++;
	//	}
	//}
	//another[j] = '\0';
	//cout << another << endl;


//6 arrays for letters



// char string1[255];
//cout << "enter string" << endl;
//cin.getline( string1,255);
//
//int space = 0;
//char holosni[] = { 'e','y','u','i','o','a'};
//char priholosni[] = { 'q','w','r','t','p','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m' };
//int punct = 0;
//
//int holosniC = 0;
//int priholosniC = 0;
//
//for (int i = 0; i < strlen(string1); i++)
//{
//	if (isspace(string1[i]))
//	{
//		space++;
//	}
//	for (int j = 0; j < 6; j++)
//	{
//
//		if (string1[i] == holosni[j])
//		{
//			holosniC++;
//		}
//	}
//	for (int j = 0; j < 20; j++)
//	{
//
//		if (string1[i] == priholosni[j])
//		{
//			priholosniC++;
//		}
//	}
//	if (ispunct(string1[i]))
//	{
//		punct++;
//	}
//}
//
//cout << "there are: " << space << " spaces" << endl;
//cout << "there are: " << holosniC << " holosnis" << endl;
//cout << "there are: " << priholosniC << " priholosnis" << endl;
//cout << "there are: " << punct << " punctuasions" << endl;


//7


cout << char(218)<<char(196)<<char(196)<< char(196) << char(194)<<char(196) << char(196) << char(196)<< char(196) << char(196) << char(196)<<char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)<<char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)<<char(194) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)<<char(191);
cout << endl;
cout << char(179) << "No "<<char(179)<<" Item " << char(179)<<setw(15)<<"   description    "<<char(179)<<" Quantity " << char(179)<<"  Price   " << char(179);
cout << endl;
cout << char(195)<<char(196)<<char(196)<< char(196) << char(197)<<char(196) << char(196) << char(196)<< char(196) << char(196) << char(196)<<char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)<<char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)<<char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196)<<char(180);
cout << endl;
cout << char(179) << "   " << char(179) << "      " << char(179) << setw(15) << "                  " << char(179) << "          " << char(179) << "          " << char(179);
cout << endl;
cout << char(179) << " 1 " << char(179) << " P196 " << char(179) << " Samsung color tv " << char(179) << "    1     " << char(179) << "  $829.00 " << char(179);
cout << endl;
cout << char(179) << " 2 " << char(179) << " P020 " << char(179) << " Uniden headset   " << char(179) << "    1     " << char(179) << "   $29.00 " << char(179);
cout << endl;
cout << char(179) << " 3 " << char(179) << " P111 " << char(179) << "   Folder blank   " << char(179) << "    1     " << char(179) << "   $2.70  " << char(179);
cout << endl;
cout << char(179) << "   " << char(179) << "      " << char(179) << setw(15) << "                  " << char(179) << "          " << char(179) << "          " << char(179);
cout << endl;
cout << char(179) << "   " << char(179) << "      " << char(179) << setw(15) << "                  " << char(179) << "          " << char(179) << "          " << char(179);
cout << endl;
cout << char(179) << "   " << char(179) << "      " << char(179) << setw(15) << "                  " << char(179) << "          " << char(179) << "          " << char(179);
cout << endl;
cout << char(195) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180);
cout << endl;
cout << char(192) << char(196) << char(196) << char(196)<<char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(217); ;

























}