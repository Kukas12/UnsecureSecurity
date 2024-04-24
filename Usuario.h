#pragma once

using namespace System;

public ref class Usuario {
public:
	static int id;
	String^ Nombre;
	String^ Apellido;
	String^ CorreoElectronico;
	String^ Contraseña;
	String^ Telefono;
};