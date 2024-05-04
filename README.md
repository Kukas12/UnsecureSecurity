# SecurePass Beta
Generador de Contraseñas con integración de una base de datos(Opcional)

## Antes de Usar
Para utilizar el programa en su totalidad, tiene que instalar el soporte de C++/CLI, tiene que instalar el .NET Desktop Development en el Visual Studio Instaler y debe tener una base de datos creada en Microsoft SQL con al menos 2 tablas y conectarla al código. Una tabla debe almacenar los usuarios registrados y otra tabla las contraseñas almacenadas. Debe relacionar ambas tablas utilizando un Foreign Key.

La tabla del usuario debe tener:

ID(INT IDENTITY 1,1), Nombre(varchar(15)), Apellidos(varchar(50)), CorreoElectronico(varchar(50)) y Contraseña(varchar(max))

La tabla de las contraseñas debe tener:

CorreoElectronicoServ(varchar(max)), ContraseñaServicio(varchar(max)), Servicio(varchar(max)) y UsuarioID(INT, Foreign Key)

Luego dentro del Código de cada interfaz, cambie los querys con los nombres de sus tablas y el enlace de conexión por el de su Base de Datos añadiendo un '\' al enlace.
Si no quiere usar una base de datos, el programa tiene un modo para utilizarlo sin necesidad de alguna Base de Datos. Pero dicho modo tiene funciones limitadas.

## Como Usar el Programa
1. Al abrir el programa, inicie sesión o cree una cuenta. Si no, utiliza el modo sin base de datos.
2. Cuando inicie sesión podrá elegir entre las opciones que el programa les ofrezca. Las opciones se mostrarán abajo.
   
### Opciones
1. Guardar contraseña: En esta parte puedes crear tu contraseña y elegir el largo de esta. Luego si tienes una base de datos conectada puedes almacenarla colocándolo en la parte de abajo junto al correo electrónico del servicio y el servicio.

2. Verificar Contraseña: Si tienes una contraseña ya creada puedes verificar la misma colocando en esta opción. El programa analizara la contraseña y te Dara un rango del 0 al 4 de cuan segura es tu contraseña.

3. Ver Contraseñas: En esta opción podrás ver todas las contraseñas que has guardado utilizando tu cuenta.

***SI NO TIENES BASE DE DATOS, LA OPCION DE GUARDAR CONTRASEÑA Y VER CONTRASEÑA NO ESTARAN DISPONIBLES***

## Versiones 
*v0.8*

El Programa SecurePass es lanzado al publico

Funciones principales funcionales

## Licencia
GNU GENERAL PUBLIC LICENSE
Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. https://fsf.org/
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.
