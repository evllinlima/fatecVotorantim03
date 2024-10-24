
package DAO;

public class historicos {
    int idHis;
    String desHis;

    /*public historicos(int idHis, String desHis) {
        this.idHis = idHis;
        this.desHis = desHis;
    }*/
    
    public historicos(){
        
    }
    

    public int getIdHis() {
        return idHis;
    }

    public String getDesHis() {
        return desHis;
    }

    public void setIdHis(int idHis) {
        this.idHis = idHis;
    }

    public void setDesHis(String desHis) {
        this.desHis = desHis;
    }
    
    public String dadosSQLValue(){
        String dadosHistorico;
        dadosHistorico = "'"
        + this.getIdHis()+ "','"
	+ this.getDesHis()+ "'";
        
        return dadosHistorico;
    }
    
}
