#pragma once

namespace Namespace1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; //	Funciones para dibujar

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			Panel = this->CreateGraphics();//Creación de zona de dibujo
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		Graphics^ Panel;
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 668);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Pen^ Lapiz1 = gcnew Pen(Color::Fuchsia , 3); 
		//Panel->DrawLine(Lapiz1, 10, 200, 110, 200);
		//Panel->DrawLine(Lapiz1, 10, 300, 110, 300);
		//Panel->DrawLine(Lapiz1, 10, 200, 10, 300);
		//Panel->DrawLine(Lapiz1, 110, 200, 110, 300);

		

		/*1. hacer cuadrado lado 200 solamente con lineas */
		//Panel->DrawLine(Lapiz1, 100, 100, 300, 100);
		//Panel->DrawLine(Lapiz1, 300, 100, 300, 300);
		//Panel->DrawLine(Lapiz1, 300, 300, 100, 300);
		//Panel->DrawLine(Lapiz1, 100, 300, 100, 100);

		Point Punto1(20, 20);
		Point Punto2(20, 200);
		//Panel->DrawLine(Lapiz1, Punto1, Punto2);

		/*2.  implementar con for la serie de puntos*/
		//for (int i = 1; i <= 10; i++)
		//{
		//	Panel->DrawLine(Lapiz1, Punto1, Punto2);
		//	Punto1.X += 20;
		//	Punto2.X += 20;
		//}

		/* 3. dibujar */
		for (int i = 1; i <= 10; i++)
		{
			Panel->DrawLine(Lapiz1, Punto1, Punto2);
			Punto2.X += 20;
		}


		//Pen^ Lapiz2 = gcnew Pen(Color::Brown, 3);
		//Panel->DrawRectangle(Lapiz2, 50, 50, 200, 150);
		///* 3. realizar un rectangulo en cada esquina de la ventana */
		//int X = 50;
		//int Y = 50;
		//int Ancho = 200;
		//int Alto = 150;

		//SolidBrush^ Brocha1 = gcnew SolidBrush(Color::Green);
		//Panel->FillRectangle(Brocha1, 52, 52, 197, 147);
		/*4  serie de rectangulos*/
		//for (int i = 1; i <= 10; i++)
		//{
		//	Panel->DrawRectangle(Lapiz2, X, Y, Ancho, Alto);
		//	X += 10;
		//	Y += 10;
		//}

		/*5  serie de rectangulos*/
		//X = 250;
		//Y = 250;
		//Ancho = 20;
		//Alto = 15;
		//for (int i = 1; i <= 10; i++)
		//{
		//	Panel->DrawRectangle(Lapiz2, X, Y, Ancho, Alto);
		//	X -= 10;
		//	Y -= 10;
		//	Ancho += 10;
		//	Alto += 10;
		//}


		/*6  serie de rectangulos*/
		//X = 250;
		//Y = 250;
		//Ancho = 20;
		//Alto = 15;
		//for (int i = 1; i <= 10; i++)
		//{
		//	Panel->DrawRectangle(Lapiz2, X, Y, Ancho, Alto);
		//	X -= 10;
		//	Y -= 10;
		//	Ancho += 10*2;
		//	Alto += 10*2;
		//}


		//Pen^ Lapiz3 = gcnew Pen(Color::Green, 1);
		//X = 50;
		//Y = 50;
		//Ancho = 200;
		//Alto = 150;
		//Panel->DrawRectangle(Lapiz2, X, Y, Ancho, Alto);
		//Panel->DrawArc(Lapiz3,X, Y, Ancho, Alto, 180, 180.0);

		/*7  serie de arcos*/
		//for (int i = 1; i <= 10; i++)
		//{
		//	Panel->DrawArc(Lapiz3, X, Y, Ancho, Alto, 180, 180.0);
		//	X += 10;
		//	Y += 10;
		//	Ancho += 10;
		//	Alto += 10;
		//}

		//Panel->DrawEllipse(Lapiz3, X, Y, Ancho, Alto);
		/*7  serie de elipses*/
		//for (int i = 1; i <= 10; i++)
		//{
		//	Panel->DrawEllipse(Lapiz3, X, Y, Ancho, Alto);
		//	X += 10;
		//	Y += 10;
		//	Ancho += 10;
		//	Alto += 10;
		//}

		/* iamgenes*/
		//X = 50;
		//Y = 50;
		//Ancho = 200;
		//Alto = 300;
		//Image^ UnaFotito = Image::FromFile("Perrito.jpg");
		//Panel->DrawImage(UnaFotito, X, Y, Ancho, Alto);

		/* CADENAS EN GRAFICO */
		//String^ Cadena = "Universidad";
		//System::Drawing::Font^ TipoLetra = gcnew System::Drawing::Font("Arial", 16);
		//SolidBrush^ Pincel1 = gcnew SolidBrush(Color::Red);
		//Point Punto1(50, 50);
		//Panel->DrawString(Cadena, TipoLetra, Pincel1, Punto1);
	}
	};
}
