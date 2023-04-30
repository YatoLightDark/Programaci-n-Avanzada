
public class Pasajero {

	private String nombres;
	private String apellidos;
	private String numeroPasaporte;
	private String asiento;
	private int edad;
	
	public Pasajero() {
		
	}
	
	public Pasajero(String nombres, String apellidos, String numero, String asiento,int edad)throws Exception 
	{
		try {
			if(nombres == null || apellidos == null || numero == null || asiento == null) {
				throw new NullPointerException("Los valores nombres, apellidos, numero  o asiento no puede ser null");
			}
			
			if(nombres.length()==0 || apellidos.length() == 0 || numero.length() == 0 || asiento.length() == 0) {
				throw new RuntimeException("el tamano de nombres, apellidos, numero o asiento debe ser mayor a 0");
			}
			
			if(edad < 0) {
				throw new IllegalArgumentException("La edad debe ser mayor a 0");
			}
			
			this.nombres = nombres;
			this.apellidos = apellidos;
			this.numeroPasaporte = numero;
			this.asiento = asiento;
			this.edad = edad;
		}catch (Exception npe) {
			npe.printStackTrace();
			System.err.println(npe.getMessage());
		}
		
	}
	
	public String getNombres() {
		return this.nombres;
	}
	
	public void setNombres(String nombre) {
		try {
			if(nombres == null || nombres.length() == 0) {
				throw new RuntimeException("nombres no puede ser null y debe ser de longitud mayor a 0");
			}
			this.nombres = nombre;
		}catch(Exception e) {
			System.err.println(e.getMessage());
		}
	}

	public String getApellidos() {
		return apellidos;
	}

	public void setApellidos(String apellidos) {
		try {
			if(apellidos == null || apellidos.length() == 0) {
				throw new RuntimeException("apellidos no puede ser null y debe ser de longitud mayor a 0");
			}
			this.apellidos = apellidos;
		}catch(Exception e) {
			System.err.println(e.getMessage());
		}
	}

	public String getNumeroPasaporte() {
		return numeroPasaporte;
	}

	public void setNumeroPasaporte(String numeroPasaporte) {
		try {
			if(numeroPasaporte == null || numeroPasaporte.length() == 0) {
				throw new RuntimeException("numero pasaporte no puede ser null y debe ser de longitud mayor a 0");
			}
			this.numeroPasaporte = numeroPasaporte;
		}catch(Exception e) {
			System.err.println(e.getMessage());
		}
	}

	public String getAsiento() {
		return asiento;
	}

	public void setAsiento(String asiento) {
		try {
			if(asiento == null || asiento.length() == 0) {
				throw new RuntimeException("asiento no puede ser null y debe ser de longitud mayor a 0");
			}
			this.asiento = asiento;
		}catch(Exception e) {
			System.err.println(e.getMessage());
		}
	}

	public int getEdad() {
		return edad;
	}

	public void setEdad(int edad) {
		
		try {
			if(edad <0) {
				throw new Exception ("Edad debe ser mayor o igual a cero");
			}
			this.edad = edad;
		}catch(Exception e) {
			e.printStackTrace();
		}
		
	}
	
	public static Pasajero buscarMenorEdad(Pasajero p1, Pasajero p2) {
		if(p1.getEdad()>p2.getEdad()) {
			return p2;
		}else {
			return p1;
		}
	}
	
	
	
	
}
