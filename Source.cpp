#include<iostream>
#include<vector>
#include<thread>
#include<mutex>
#include<string>
#include<condition_variable>
#include<chrono> 
#include<algorithm>
#include<set>
#include<fstream>
#include<unordered_map>
#include<map>
#include<list>
//using namespace Baseclass;
/*std::mutex mtx;
void print(std::string names, int roll_no)
{
	
	std::string details = names + " : Roll No: " + std::to_string(roll_no);
	std::lock_guard<std::mutex>lock(mtx);
	std::cout << details << "\n";
}
int main() {
	int inpvalue;
	std::vector<std::string>stdnames;
	std::string names[10];
	std::cout << "Enter numbers of the students\n";
	std::cin >> inpvalue;
	std::cout << "enter the names of a student\n";
	for (int i = 0; i < inpvalue; i++)
	{
		std::cin >> names[i];
	}
	for (int i = 0; i < inpvalue; i++)
	{
		stdnames.push_back(names[i]);
	}
	std::vector<std::thread>threads;
	for (int i = 0; i <stdnames.size(); i++)
	{
		threads.push_back(std::thread(print,stdnames[i], i));
	}
	for (auto& th : threads)
	{
		th.join();
	}
	std::cin.get();hjhbbhh
}*/
//bool isprime(int pnum) {
//	if (pnum <= 1)return false;
//	for (int i = 2; i * i < pnum; i++) {
//		if (pnum % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//void listhieprimenumbers(int val) {
//	for (int i = 2; i < val; i++) {
//		if (isprime(i)) {
//			std::cout << i << " ";
//		}
//	}
//	std::cout << "\n";
//}
//void makereverse(std::string name) {
//	std::unordered_map<char, int>coreps;
//	for (char c : name) {
//		coreps[c]++;
//	}
//	for (auto i : coreps) {							
//		std::cout<< i.first << i.second;
//	}
//}
//void sortusingiterator() {
//	int arr[5] = {5, 3, 6, 7, 8};
//	int temp = 0;
//	int sortasc = arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = i + 1; j < 5; j++)
//		{
//			if (arr[i] > arr[j]) {
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++) {
//		std::cout << arr[i] << " ";
//	}
//
//}
//int main() {
//	std::string name = "Helllo worldwh";
//	makereverse(name);
//	listhieprimenumbers(100);
//	sortusingiterator();
//}
//bool isprime(int val) {
//	for (int i = 2; i <= sqrt(val); i++) {
//		if (val % i == 0)return false;
//	}
//	return true;
//}
//void printPrimes(int value) {
//	for (int i = 2; i <= value; i++) {
//		if (isprime(i)) {
//			std::cout << i << " ";
//		}
//	}
//}
//void removeduplicatechars(std::string original) {
//	//char* result{};
//	std::string result;
//	bool find=false;
//	std::cout << "original string" << original << "\n";
//	for (int i = 0; i <= original.size(); i++)
//	{
//		find = false;
//		for (int j = i + 1; j <=original.size(); j++)
//		{
//			if (original[i] == original[j]) {
//				find = true;
//			}
//			
//		}
//		if (!find) {
//			result += original[i];
//		}
//	}
//	
//	std::cout << result << "\n";
//}
//int main() {
//	int a = 5;
//	int b = 10;
//	std::cout << "before swapping " << a << " " << b << "\n";
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	std::cout << "after swapping " << a << " " << b << "\n";
//	printPrimes(100);
//	removeduplicatechars("programming");
//
//}
// Function to convert unordered_map to a string representation
//std::string hashMapToString(const std::unordered_map<std::string, std::string>& map) {
//    std::string result;
//    for (const auto& i : map) {
//        result += i.first + ":" + i.second + ";"; // Create a simple format "key:value;"
//    }
//    return result; // Return the formatted string
//}
//int main() {
	//std::ofstream fileopen("./lseg.txt", std::ios::out);
	//if (!fileopen.is_open()) {
	//	std::cout << "err file not opened\n";
	//}
	//if (fileopen.is_open()) {
	//	fileopen << "Hello world\n";
	//	fileopen << "odjncked\n";
	//	fileopen << "eojndcijend cinqdijnc\n";
	//	fileopen << "jdncijqnwodmc\n";
	//	fileopen.close();
	//}
	//

	//std::ifstream inFile("./lseg.txt"); // Open file for reading
	//if (inFile.is_open()) { // Check if the file is opened successfully
	//	std::string line;
	//	while (getline(inFile, line)) { // Read file line by line
	//		std::cout << line << std::endl; // Print each line to the console
	//	}
	//	inFile.close(); // Close the file
	//}
	//else {
	//	std::cerr << "Unable to open the file for reading." << std::endl;
	//}

	//std::ofstream fileappend("./lseg.txt", std::ios::app);
	//if (fileappend.is_open()) {
	//	fileappend << "efn jenfj njfnnejqernvkjqknef ckefvhkeqrfvqekrvhkqer\n";
	//	fileappend.close();
	//}
	////std::ifstream fileoread("./lseg.txt", std::ios::in);
	//std::ifstream infile2("./lseg.txt",std::ios::in);
	//if (infile2.is_open())
	//{
	//	std::string line;
	//	while (getline(infile2, line)) {
	//		std::cout << line << "\n";
	//	}
	//	infile2.close();

	//}
	//std::ofstream opencsv(". /lsg.csv");
	//std::ifstream infile3("./lseg.txt", std::ios::in);
	//if (infile3.is_open()) {
	//	std::string line;
	//	while (getline(infile3, line)) {
	//		for (int i = 0; i < line.size(); i++) {
	//			if (line[i] == ' ') {
	//				line[i] = ',';
	//			}
	//		}
	//		
	//		opencsv << line;
	//	}
	//	
	//	opencsv.close();
	//	infile3.close();
	//	
	//	
	//}
	//std::string name = "hello world\n";
	//std::string firstname;
	//std::string secondname;
	//bool findspace = false;
	//for (char c : name) {
	//	if (c == ' ')
	//	{
	//		findspace = true;
	//	}
	//	if (findspace) {
	//		secondname += c;
	//	}
	//	else {
	//		firstname += c;
	//	}
	//}
	//std::cout << secondname << " " << firstname << "\n";
//}
#include <iostream>
#include <chrono>
#include<string>
#include <thread> // For std::this_thread::sleep_for
#include<unordered_map>
#include<sstream>
#include<fstream>
#include<list>
class Solution {
public:
	int lengthOfLongestSubstring(std::string s) {
		int lenghtofsubstring = 0;
		std::string substring = {};
		bool charfound = false;
		for (int i = 0; i < s.length(); i++)
		{
			charfound = false;
			for (int j = i + 1; j < s.length(); j++)
			{
				if (s[i] == s[j])
				{
					charfound = true;
					break;
				}
			}
			if (!charfound)
			{
				substring += s[i];
			}
		}
		std::cout << substring << " lenghtpof substring is" << substring.length();
		return substring.length();
	}

};
class singleton
{
private:
	static int* val;
	int val2;
	//singleton() {};
	singleton()
	{
		std::cout << "privateconstructorcalled\n";

		this->val2=getinstance2();
	}
public:
	static int& getiinstance()
	{
		val = new int(5);
		*val = 89;
		return *val;
	}
	int  getinstance2()
	{
		val = new int(9);
		
		std::cout << val << "\n";
		return *val;
	}
	static int accessnonstaticmember(singleton& val)
	{
		std::cout << "non static datamember" << val.val2;
	}
};
int* singleton::val = nullptr;
void missingelementsinanarray()
{
	std::vector<int>arr1 = { 1,3,4,5,7,8,9 };
	std::vector<int>arr2 = { 2,3,4,6,11 };
	std::vector<int>store;
	bool notmissing = false;
	for (int i = 0; i < arr1.size(); i++)
	{
		notmissing = false;
		for (int j = 0; j < arr2.size(); j++)
		{
			if (arr1[i] == arr2[j])
			{
				notmissing = true;
				break;
			}
		}
		if (!notmissing)
		{
			store.push_back(arr1[i]);
		}
	}
	for (auto& i : store)
	{
		std::cout << i << " ";
	}

}
int main()
{
	Solution obj;
	obj.lengthOfLongestSubstring("abcabcbb");
	missingelementsinanarray();
	/*auto& sing = singleton::getiinstance();
	std::cout << singleton::accessnonstaticmember(sing);
	std::cout << sing;*/
}