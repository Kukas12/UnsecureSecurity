#pragma once

using namespace System;

public ref class Usuario {
public:
	static int id;
	static String^ Nombre;
	static String^ Apellido;
	static String^ CorreoElectronico;
	static String^ Contrase�a;
	static bool BaseDatos = true;
};