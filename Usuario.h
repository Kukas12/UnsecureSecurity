#pragma once

using namespace System;

//Variables publicas para manejar dentro de todo el codigo

public ref class Usuario {
public:
	static int id;
	static String^ Nombre;
	static String^ Apellido;
	static String^ CorreoElectronico;
	static String^ Contraseña;
	static bool BaseDatos = true;
};