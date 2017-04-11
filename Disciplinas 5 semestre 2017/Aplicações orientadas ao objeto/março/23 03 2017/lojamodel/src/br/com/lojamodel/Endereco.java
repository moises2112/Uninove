package br.com.lojamodel;

import java.util.List;

public class Endereco {
	
	private String rua;
	private int num;
	private int cep;
	private String cidade;
	private String estado;
	
	public String getRua() {
		return rua;
	}
	public void setRua(String rua) {
		this.rua = rua;
	}
	public int getNum() {
		return num;
	}
	public void setNum(int num) {
		this.num = num;
	}
	public int getCep() {
		return cep;
	}
	public void setCep(int cep) {
		this.cep = cep;
	}
	public String getCidade() {
		return cidade;
	}
	public void setCidade(String cidade) {
		this.cidade = cidade;
	}
	public String getEstado() {
		return estado;
	}
	public void setEstado(String estado) {
		this.estado = estado;
	}
	@Override
	public String toString() {
		return "Endereco [rua=" + rua + ", num=" + num + ", cep=" + cep + ", cidade=" + cidade + ", estado=" + estado
				+ "]";
	}
	
	
}
