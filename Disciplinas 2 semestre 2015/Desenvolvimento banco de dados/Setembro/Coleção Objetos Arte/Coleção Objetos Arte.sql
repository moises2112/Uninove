-- *********************************************
-- * Standard SQL generation                   
-- *--------------------------------------------
-- * DB-MAIN version: 9.1.5              
-- * Generator date: Feb 14 2012              
-- * Generation date: Sat Mar 24 23:06:09 2012 
-- * LUN file: D:\Documents and Settings\Jose\My Documents\Presentaciones\BD USP\LabBd\Objetos Arte.lun 
-- * Schema: ESQUEMA RELACIONAL MUSEU/1-1 
-- ********************************************* 


-- Database Section
-- ________________ 

-- create database ESQUEMA RELACIONAL MUSEU;


-- DBSpace Section
-- _______________


-- Tables Section
-- _____________ 

create table ARTISTA (
	ArtId number(10) not null,
     Nome varchar2(25) not null unique,
     DataNasc date,
     DataMorte date,
     PaisdeOrigem varchar2(50),
     EstiloPrincipal varchar2(50) not null,
     Periodo char(20) not null,
     Descricao varchar2(255) not null,
     constraint ID_ARTISTA_ID primary key (ArtId));

create table COLECAO (
	ColId number(10) not null,
     Nome char(50) not null unique,
     Tipo char(10) not null,
     Descricao char(255) not null,
     Endereco char(25),
     Telefone number(10),
     PessoaContato varchar(50) not null,
     constraint ID_COLECAO_ID primary key (ColId));

create table PERMANENTE (
     NumId number(10) not null,
     DataAquisicao date not null,
     EmExposicao char not null,
     constraint ID_COLEC_OBJET_ID primary key (NumId));

create table EMPRESTADO (
     NumId number(10) not null,
     DataEmprestimo date not null,
     DataDevolucao date not null,
     Colecao number(10) not null Default 1,
     constraint ID_EMPRE_OBJET_ID primary key (NumId));

create table ESCULTURA (
     NumId number(10) not null,
     Material char(20),
     Altura numbeer(2),
     Peso number(2,2),
     constraint ID_ESCUL_OBJET_ID primary key (NumId));

create table EXPOSICAO (
	ExpId number(10) not null,
     Nome char(50) not null,
     DataInicio date not null,
     DataFinal date not null,
     constraint ID_EXPOSICAO_ID primary key (ExpId));

create table Exposto_Em (
     NumId number(10) not null,
     Exposicao number(10) not null,
     constraint ID_Exposto_Em_ID primary key (NumId, Exposicao));

create table OBJETO_DE_ARTE (
     Classe varchar2(10) not null,
     TipoObj Varchar2(10) not null,
     Pais_Cultura varchar2(50),
     Periodo varchar2(50),
     Estilo varchar2(50),
     NumId number(10) not null,
     Ano_Criacao date,
     Titulo varchar2(100) not null,
     Descricao varchar2(255) not null,
     Artista number(10),
	Custo number(9,2),
     constraint ID_OBJETO_DE_ARTE_ID primary key (NumId));

create table OUTROS (
     NumId number(10) not null,
     Tipo char(20) not null,
     constraint ID_OUTRO_OBJET_ID primary key (NumId));

create table PINTURA (
     NumId number(10) not null,
     Suporte varchar(50),
     TipoTinta char(20),
     constraint ID_PINTU_OBJET_ID primary key (NumId));


-- Constraints Section
-- ___________________ 

alter table PERMANENTE add constraint ID_COLEC_OBJET_FK
     foreign key (NumId)
     references OBJETO_DE_ARTE On Delete Cascade;

alter table EMPRESTADO add constraint REF_EMPRE_COLEC_FK
     foreign key (Colecao)
     references COLECAO On Delete Set Default;

alter table EMPRESTADO add constraint ID_EMPRE_OBJET_FK
     foreign key (NumId)
     references OBJETO_DE_ARTE On Delete Cascade;

alter table ESCULTURA add constraint ID_ESCUL_OBJET_FK
     foreign key (NumId)
     references OBJETO_DE_ARTE On Delete Cascade;

alter table Exposto_Em add constraint EQU_Expos_EXPOS
     foreign key (Exposicao)
     references EXPOSICAO On Delete Cascade;

alter table Exposto_Em add constraint REF_Expos_OBJET_FK
     foreign key (NumId)
     references OBJETO_DE_ARTE On Delete Cascade;  

alter table OBJETO_DE_ARTE add constraint EQU_OBJET_ARTIS_FK
     foreign key (Artista)
     references ARTISTA On Delete Set Null;

alter table OUTROS add constraint ID_OUTRO_OBJET_FK
     foreign key (NumId)
     references OBJETO_DE_ARTE On Delete Cascade;

alter table PINTURA add constraint ID_PINTU_OBJET_FK
     foreign key (NumId)
     references OBJETO_DE_ARTE On Delete Cascade;


