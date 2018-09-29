describe ("mitadDeNumero") {
  it ("la mitad de 3 es 1.5") {
    should_float(mitad(3.0)) be equal to(1.5);
  } end
  
  it ("la mitad de 20 es 10") {
    should_float(mitad(10.0)) be equal to(10.0);
  } end
  
} end