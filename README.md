# SecurePass Beta
Generador de Contraseñas con integracion de una base de datos(Opcional)

## Antes de Usar
Para utilizar el programa en su totalidad, debe tener una base de datos creada en Microsoft SQL con al menos 2 tablas y conectarla al codigo. Una tabla debe almacenar los usuarios y otra tabla las contraseñas. Debe conectar ambas tablas utilizando un Foreign Key

La tabla del usuario debe tener:
ID(INT IDENTITY 1,1), Nombre(varchar(15)), Apellidos(varchar(50)), CorreoElectronico(varchar(50)) y Contraseña(varchar(max))

La tabla de las contraseñas debe tener:
CorreoElectronicoServ(varchar(max)), ContraseñaServicio(varchar(max)), Servicio(varchar(max)) y UsuarioID(INT, Foreign Key)

Luego dentro de los Forms en el codigo cambie los querys con los nombres de sus tablas y el enlace de conexión por el de su Base de Datos añadiendo un '\' al enlace.
Si no quiere usar una base de datos, puede utilizar el programa Sin Base de Datos para ver como funciona el generador y verificador de contraseñas.

## Como Usar
1. Al abrir el programa, inicie sesión o cree una cuenta. Si no, utilize el modo sin base de datos.
2. Cuando inicie sesion podra elegir entre las opciones que el programa les ofrezca. Las opciones se mostraran abajo.
   
### Opciones
1. Guardar contraseña: En esta parte puedes crear tu contraseña y elegir el largo de la misma. Luego si tienes una base de datos conectada puedes almacenarla colocandolo en la parte de abajo junto al correo electronico del servicio y el servicio.

2. Verificar Contraseña: Si tienes una contraseña ya creada puedes verificar la misma colocando en esta opcion. El programa analizara la contraseña y te dara un rango del 0 al 4 de cuan segura es tu contraseña.

3. Ver Contraseñas: En esta opcion podras ver todas las contraseñas que has guardado utilizando tu cuenta.

***SI NO TIENES BASE DE DATOS, LA OPCION DE GUARDAR CONTRASEÑA Y VER CONTRASEÑA NO ESTARAN DISPONIBLES***

## Versiones 
v0.8
El Programa SecurePass es lanzado al publico\n
Funciones principales funcionales

## Licencia
GNU GENERAL PUBLIC LICENSE
Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. https://fsf.org/
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.
