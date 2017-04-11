package br.com.lojamodel.dao;

import java.sql.SQLException;
import java.util.List;

public interface DAO {
	//CRUD
	public void create(Object object) throws SQLException;
	public List<Object> read();
	public void update(Object object);
	public void delete(Object object);
	
	
}
