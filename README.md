# Segundo Examen Parcial - Algoritmos y Estructuras de Datos I

Este proyecto corresponde al segundo examen parcial de la materia Algoritmos y Estructuras de Datos I de la carrera Analista en Sistemas del Instituto Superior de Formación Técnica N°151. El código implementa un sistema de gestión de pedidos en C++, diseñado para realizar operaciones básicas de carga y visualización de artículos, clientes, empleados y pedidos.

## Funcionalidades Principales

### Cargar Equipos
- Permite cargar artículos como ropa, zapatos, antiparras, etc.
- Los artículos incluyen información como descripción, cantidad, precio unitario y subtotal.

### Cargar Clientes
- Permite registrar nuevos clientes en el sistema.
- Los clientes incluyen información personal como nombre completo, dirección y DNI.

### Cargar Empleados
- Permite registrar nuevos empleados en el sistema.
- Los empleados incluyen información similar a la de los clientes, y pueden manejar pedidos.

### Cargar Pedidos de Artículos Asignados a los Clientes
- Permite registrar pedidos de artículos y asignarlos a clientes específicos.
- Los pedidos incluyen detalles como la fecha del pedido, los artículos solicitados, el cliente y el empleado que gestiona el pedido.

### Mostrar los Pedidos de los Clientes
- Muestra los pedidos registrados para cada cliente.
- Incluye información detallada sobre cada pedido y los artículos asociados.

## Estructura del Código

El código está organizado en clases que modelan los diferentes componentes del sistema:

- **article**: Clase que representa un artículo con atributos como descripción, cantidad, precio unitario y subtotal.
- **person**: Clase base abstracta para representar personas, incluyendo atributos como ID, nombre completo, dirección y DNI.
- **user**: Clase que hereda de `person` y representa un empleado.
- **customer**: Clase que hereda de `person` y representa un cliente.
- **order**: Clase que representa un pedido, incluyendo un identificador, fecha, artículos asociados, cliente y empleado.

### Archivos de encabezado (include/)

- **article.hpp**
- **person.hpp**
- **user.hpp**
- **customer.hpp**
- **order.hpp**

### Archivos fuente (src/)

- **article.cpp**
- **person.cpp**
- **user.cpp**
- **customer.cpp**
- **order.cpp**

### Archivo principal

- **main.cpp**


## Licencia

Este proyecto está licenciado bajo la Licencia MIT. Consulta el archivo LICENSE para más detalles.

-------------------------------------------------------------------------------------------------------------------------

# Second Midterm Exam - Algorithms and Data Structures I

This project is part of the second midterm exam for the Algorithms and Data Structures I course of the Systems Analyst program at the Instituto Superior de Formación Técnica N°151. The code implements an order management system in C++, designed to perform basic operations for loading and viewing items, customers, employees, and orders.

## Main Features

### Load Items
- Allows loading items such as clothes, shoes, goggles, etc.
- Items include information such as description, quantity, unit price, and subtotal.

### Load Customers
- Allows registering new customers in the system.
- Customers include personal information such as full name, address, and ID.

### Load Employees
- Allows registering new employees in the system.
- Employees include similar information to customers and can manage orders.

### Load Orders Assigned to Customers
- Allows registering orders of items and assigning them to specific customers.
- Orders include details such as order date, requested items, customer, and the employee managing the order.

### Show Customer Orders
- Displays the orders registered for each customer.
- Includes detailed information about each order and the associated items.

## Code Structure

The code is organized into classes that model the different components of the system:

- **article**: Class representing an item with attributes such as description, quantity, unit price, and subtotal.
- **person**: Abstract base class representing people, including attributes such as ID, full name, address, and ID number.
- **user**: Class that inherits from `person` and represents an employee.
- **customer**: Class that inherits from `person` and represents a customer.
- **order**: Class representing an order, including an identifier, date, associated items, customer, and employee.

### Header Files (include/)

- **article.hpp**
- **person.hpp**
- **user.hpp**
- **customer.hpp**
- **order.hpp**

### Source Files (src/)

- **article.cpp**
- **person.cpp**
- **user.cpp**
- **customer.cpp**
- **order.cpp**

### Main File

- **main.cpp**

## License

This project is licensed under the MIT License. See the LICENSE file for more details.

