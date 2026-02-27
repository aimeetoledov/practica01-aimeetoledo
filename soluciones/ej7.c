//Sin ejecutar determina cuál dirección es mayor:
//&m[0][3]
//&m[1][0]
//Justifica matemáticamente

//En C los arreglos se almacenan en memoria por filas, por lo tanto, &m[0][3] se almacena primero que &m[1][0].

//Para justificarlo matemáticamente, tenemos la siguiente fórmula:
//Base + [(i × Número de Columnas) + j] × tam_tipo
//Sustituimos para &m[0][3]:            //Sustituimos para &m[1][0]
//Base+[(0*3)+3]*4                      //Base+[(1*4)+0]*4
//Base +[0+3]*4                         //Base+[(4)+0]*4
//Base+12                               //Base+16

//Por lo tanto: &m[1][0] > &m[0][3]
