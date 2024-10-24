
package DAO;

public class contaCorrente {
    int numAge;
    int numCc;
    int idCli;
    int Saldo;

    /*public contaCorrente(int numAge, int numCc, int idCli) {
        this.numAge = numAge;
        this.numCc = numCc;
        this.idCli = idCli;
    }*/
    
    public contaCorrente(){
        
    }
    

    public int getNumAge() {
        return numAge;
    }

    public int getNumCc() {
        return numCc;
    }

    public int getIdCli() {
        return idCli;
    }

    public int getSaldo() {
        return Saldo;
    }

    public void setNumAge(int numAge) {
        this.numAge = numAge;
    }

    public void setNumCc(int numCc) {
        this.numCc = numCc;
    }

    public void setIdCli(int idCli) {
        this.idCli = idCli;
    }

    public void setSaldo(int Saldo) {
        this.Saldo = Saldo;
    }
    
    public String dadosSQLValue(){
        String dadosContaCorrente;
        dadosContaCorrente = "'"
        + this.getNumAge()+ "','"
	+ this.getNumCc()+ "','"
	+ this.getIdCli()+ "','"
	+ this.getSaldo()+ "'";
        
        return dadosContaCorrente;
    }
}
