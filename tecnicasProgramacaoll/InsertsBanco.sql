USE MOV_CONTA_CORRENTE
GO

--Inserts da tabela Agencias
INSERT INTO Agencias (NUM_AGE, NOME_AGE, ENDE_AGE, NUM_END_AGE, COMPL_AGE, BAIR_AGE, CIDA_AGE, UF_AGE, CEP_AGE, FONE_AGE) VALUES
(07001, 'Agência Penha', 'Rua da Penha', '593', 'Sala 10', 'Centro', 'São Paulo', 'SP', '01311100', '(11)3356-9876'),
(07002, 'Agência Brasil', 'Avenida Brasil', '1465', NULL, 'Vila Tereza', 'São Paulo', 'RJ', '01451000', '(11)32389799'),
(07003, 'Agência  Soares', 'Rua Atanázio Soares', '1789', 'Andar 2', 'Jardim das Acácias', 'Belo Horizonte', 'MG', '18074385', '(31)34567890'),
(07004, 'Agência Guaruja', 'Avenida Guaruja', '325', NULL, 'Jardim Guaruja', 'Curitiba', 'PR', '03502030', '(41)3367-8901'),
(07005, 'Agência Faria Lima', 'Rua Brigadeiro Faria Lima', '610', 'Casa 10', 'Casa Branca', 'São Paulo', 'SP', '01452000', '(11)31789002');

--Inserts tabela Historicos
INSERT INTO Historicos (ID_HIS, DES_HIS) VALUES
(1, 'Pix Enviado'),
(2, 'Pagamento de cartão de crédito'),
(3, 'Pix Enviado'),
(4, 'Saque'),
(5, 'Recebimento');

DELETE FROM Historicos

--Inserts da tabela Clientes
INSERT INTO Clientes (ID_CLI, NOME_CLI, ENDE_CLI, NUM_CLI, COMPL_CLI, BAIR_CLI, CIDA_CLI, UF_CLI, CEP_CLI, FONE_CLI, CPF_CLI, DATA_NASC, CNPJ_CLI) VALUES
(0701, 'Ana Carolina da Silva', 'Av. das Nações', 123, 'Bloco B', 'Centro', 'São Paulo', 'SP', '01020001', '(11)9875-4321', '50784590813', '13-09-1975 00:00:00', '56389123905732'),
(0702, 'Carlos Pereira de Souza', 'Rua da Liberdade', 456, NULL, 'Jardim das Acácias', 'Rio de Janeiro', 'RJ', '20010002', '(11)9876-5432', '09247954388', '22-08-1985 00:00:00', '23986789000100'),
(0703, 'Maria Janaina de Oliveira', 'Rua Bonifácio Peres', 789, 'Casa 8', 'Vila Tereza', 'Belo Horizonte', 'MG', '30010003', '(31)9865-1234', '34567890130', '30-12-1879 00:00:00', '38967890009180'),
(0704, 'Roberto Carlos Lima', 'Avenida Itavuvu', 321, NULL, 'Bairro Novo', 'Curitiba', 'PR', '80010004', '(41)9754-3210', '21348698732', '10-04-1983 00:00:00', '45678901008145'),
(0705, 'Fernanda Lima Costa', 'Avenida Washington Luiz', 654, 'Apto 202', 'Casa Branca', 'São Paulo', 'SP', '88011095', '(11)9543-2109', '23409876522', '25-11-1995 00:00:00', '50078901255019');

--inserts da conta corrente
INSERT INTO ContaCorrente (NUM_CC, NUM_AGE, ID_CLI, SALDO) VALUES
(0700000001, 07001, 0701, 3400.00),
(0700000002, 07002, 0702, 7500.00),
(0700000003, 07003, 0703, 9200.00),
(0700000004, 07004, 0704, 10000.00),
(0700000005, 07005, 0705, 1900.00);

--Inserts tabela movimentação
INSERT INTO Movimentacao (NUM_AGE, NUM_CC, DATA_MOV, NUM_DOCTO, DEB_CRED, ID_HIS, COMPL_HIS, VALOR, SALDO) VALUES
(07001, 0700000001, '01-09-2024 10:30:00', 'DOC001', 'D', 1, 'Pix Enviado', 15.00, 3400.00 ),
(07002, 0700000002, '05-09-2024 14:15:00', 'DOC002', 'D', 2, 'Pagamento de cartão de crédito', 200.00, 7500.00),
(07003, 0700000003, '06-09-2024 09:00:00', 'DOC003', 'D', 1, 'Pix Enviado', 250, 9200.00),
(07004, 0700000004, '15-09-2024 18:45:00', 'DOC004', 'D', 4, 'Saque', 150.00, 10000.00),
(07005, 0700000005, '19-09-2024 08:00:00', 'DOC005', 'C', 3, 'Recebimento', 1000.00, 1900.00);

--inserts tabela usuários
INSERT INTO Usuarios (ID_USUARIO, SENHA, NUM_AGE, NUM_CC, ID_CLI) VALUES
('ana.silva_07', 'abc321', 07001, 0700000001, 0701),
('carlos.souza_07', 'def456', 07002, 0700000002, 0702),
('maria.oliveira_07', 'ghi789', 07003, 0700000003, 0703),
('roberto.lima_07', 'jkl098', 07004, 0700000004, 0704),
('fernanda.costa_07', 'mno123', 07005, 0700000005, 0705);
