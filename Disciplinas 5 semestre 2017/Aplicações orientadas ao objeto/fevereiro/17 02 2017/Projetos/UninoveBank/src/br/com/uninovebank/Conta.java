/**
 * 
 */
package br.com.uninovebank;

/**
 * @author internet
 *
 */
public abstract class Conta {
	
	private Double valor;
	private boolean ativa;
	
	public Boolean depositar(final Double valor){
		if(isAtiva()){
			this.valor+=valor;
			return true;
		}
		else
			return false;
				
	}
	
	public boolean sacar(Double valor){
		if(this.valor>=valor){
			this.valor-=valor;
			return true;
		}else{
			return false;
		}
		
	}
	
	public Double saldo(){
		return this.valor;
	}
	

	/**
	 * @return the ativa
	 */
	public boolean isAtiva() {
		return ativa;
	}

	/**
	 * @param ativa the ativa to set
	 */
	public void setAtiva(boolean ativa) {
		this.ativa = ativa;
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
