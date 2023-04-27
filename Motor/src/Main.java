import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;


class Motor {
    private int cilindrada;
    private double velocidadMax;
    private int caballosFuerza;
    private String tipoCombustible;

    // Constructor
    public Motor(String tipCombustible, double vMax, int caballosDeFuerza, int cilin) {
        this.tipoCombustible = tipCombustible;
        this.velocidadMax = vMax;
        this.caballosFuerza = caballosDeFuerza;
        this.cilindrada = cilin;
    }

    public int getCilindrada() {
        return cilindrada;
    }
    // Imprimir Motor
    public String imprimirMotor() {
        return "Cilindrada: " + cilindrada + ", Velocidad Maxima: " + velocidadMax + ", Caballos de Fuerza: " + caballosFuerza + ", Combustible: " + tipoCombustible;
    }
}

class Vehiculo {
    // atributos
    private String placa;
    private String marca;
    private Motor motor;

    // Constructor
    public Vehiculo(String placa, String marca, Motor motor) {
        this.placa = placa;
        this.marca = marca;
        this.motor = motor;
    }

    public Vehiculo(String placa, String marca, String tipoCombustible, double velocidadMax, int caballosFuerza, int cilindrada) {
        this.placa = placa;
        this.marca = marca;
        this.motor = new Motor(tipoCombustible, velocidadMax, caballosFuerza, cilindrada);
    }

    /* getters y setters para los atributos */

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getPlaca() {
        return placa;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public Motor getMotor() {
        return motor;
    }

    public void setMotor(Motor motor) {
        this.motor = motor;
    }

    public String imprimirVehiculo() {
        return "Marca: " + getMarca() + ", Placa: " + getPlaca() + ", Motor: " + getMotor().imprimirMotor();
    }

    // Implementación de la comparación de cilindrada entre dos vehículos
    public static Comparator<Vehiculo> compararCilindrada = new Comparator<Vehiculo>() {
        @Override
        public int compare(Vehiculo v1, Vehiculo v2) {
            int cilindrada1 = v1.getMotor().getCilindrada();
            int cilindrada2 = v2.getMotor().getCilindrada();
            if (cilindrada1 > cilindrada2) {
                return 1;
            } else if (cilindrada1 < cilindrada2) {
                return -1;
            } else {
                return 0;
            }
        }
    };

    public static void main(String[] args) {
        Vehiculo Vehiculo1 = new Vehiculo("ABC123", "Toyota", "Gasolina", 200.0, 150, 3000);
        Vehiculo Vehiculo2 = new Vehiculo("MRZ153", "NISSAN", "Gasolina", 150.0, 120, 2150);

        ArrayList<Vehiculo> vehiculos = new ArrayList<Vehiculo>();
        vehiculos.add(Vehiculo1);
        vehiculos.add(Vehiculo2);

        System.out.println("Vehículos ordenados por cilindrada:");
        Collections.sort(vehiculos, Vehiculo.compararCilindrada);
        for (Vehiculo v : vehiculos) {
            System.out.println(v.imprimirVehiculo());
        }
    }
}