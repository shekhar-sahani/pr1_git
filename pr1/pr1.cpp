#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

namespace pr1 {
	student a[10];
	int n = 0;
}

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	pr1::MyForm form;
	Application::Run(% form);
	return 0;
}
