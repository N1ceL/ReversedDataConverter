#include "MyForm.h"
#pragma comment (lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;
[STAThread]



void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);

}
