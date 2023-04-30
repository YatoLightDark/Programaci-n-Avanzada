import java.util.ArrayList;

public class Vuelo {

	private String codigo;
	private String origen;
	private String destino;
	private int capacidad;
	private ArrayList<Pasajero> pasajeros;
	
	public Vuelo() {
		this.pasajeros = new ArrayList<>();
	}

	public Vuelo(String codigo, String origen, String destino, int capacidad) {
		
		try {
			if(codigo == null || codigo.length() ==0 || origen == null || origen.length() ==0 || destino == null || destino.length() ==0) {
				throw new Exception("codigo, origen,destino debe ser diferente de null y mayor a cero");
			}
			
			if(capacidad <= 0) {
				throw new Exception("capacidad debe ser mayor a cero");
			}
			
		}catch(Exception e) {
			e.printStackTrace();
		}
		this.codigo = codigo;
		this.origen = origen;
		this.destino = destino;
		this.capacidad = capacidad;
		this.pasajeros = new ArrayList<>();
	}

	public String getCodigo() {
		return codigo;
	}

	public void setCodigo(String codigo) {
		
		try {
			if(codigo == null || codigo.length()==0) {
				throw new Exception("codigo no puede ser null y debe ser mayor a 0");
			}
			
			this.codigo = codigo;
		}catch(Exception e) {
			e.printStackTrace();
		}
		
	}

	public String getOrigen() {
		return origen;
	}

	public void setOrigen(String origen) {
		try {
			if(origen == null || origen.length()==0) {
				throw new Exception("origen no puede ser null y debe ser mayor a 0");
			}
			
			this.origen = origen;
		}catch(Exception e) {
			e.printStackTrace();
		}

	}

	public String getDestino() {
		return destino;
	}

	public void setDestino(String destino) {
		try {
			if(destino == null || destino.length()==0) {
				throw new Exception("destino no puede ser null y debe ser mayor a 0");
			}
			this.destino = destino;
			
		}catch(Exception e) {
			e.printStackTrace();
		}

	}

	public int getCapacidad() {
		return capacidad;
	}

	public void setCapacidad(int capacidad) {
		try {
			if( capacidad<=0) {
				throw new Exception("capacidad debe ser mayor a 0");
			}
			
			this.capacidad = capacidad;
		}catch(Exception e) {
			e.printStackTrace();
		}

	}

	public ArrayList<Pasajero> getPasajeros() {
		return pasajeros;
	}
	
	public int numeroPasajeros() {
		return pasajeros.size();
	}
	
	public void agregarPasajero(String nombres, String apellidos, String numeroPasaporte, String asiento, int edad) {
		
		try {
			
			Pasajero p = new Pasajero(nombres,apellidos,numeroPasaporte,asiento,edad);
			
			if(this.capacidad < pasajeros.size()) {
				throw new Exception("La capacidad del vuelo supera");
			}else {
				
				for(Pasajero pa:this.pasajeros) {
					if(pa.getNumeroPasaporte().equals(numeroPasaporte)) {
						throw new Exception("Ya se encuentra el numero de pasaporte en el vuelo");
					}
					
					if(pa.getAsiento().equals(asiento)) {
						throw new Exception("Ya se encuentra el numero de asiento registrado en el vuelo");
					}
				}
				/*
				for(int i=0; i<this.pasajeros.size();i++) {
					if(pasajeros.get(i).getNumeroPasaporte().equals(numeroPasaporte)) {
						throw new Exception("Ya se encuentra el numero de pasaporte en el vuelo");
					}
				}
				*/
				
				pasajeros.add(p);
			}
			
			
			
		}catch (Exception e) {
			e.printStackTrace();
		}
		
	}
	
	public boolean eliminarPasajero(String numeroPasaporte) {
		for(Pasajero p: this.pasajeros) {
			if(p.getNumeroPasaporte().equals(numeroPasaporte)) {
				return this.pasajeros.remove(p);
			}
		}
		
		return false;
		
	}
	
	public String obtenerPasajeroMasJoven() {
		String mensaje;
		
		
		if(pasajeros.size()==0) {
			mensaje = "El vuelo esta vacio";
		}else {
			
			Pasajero joven = pasajeros.get(0);
			for(int i=1; i<pasajeros.size();i++) {
				joven = Pasajero.buscarMenorEdad(joven, pasajeros.get(i));
			
			}
			
			mensaje = "El pasajero mas joven del vuelo es "+joven.getNombres()+" "+joven.getApellidos()+" (pasaporte: "+joven.getNumeroPasaporte()+"). Tiene "+joven.getEdad()+" anios y esta sentado en el asiento " + joven.getAsiento();
		}
		return mensaje;
		
	}
	
}
