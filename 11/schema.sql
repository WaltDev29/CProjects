DROP TABLE IF EXISTS 고객;

CREATE TABLE 고객 (
    고객아이디 VARCHAR(20) NOT NULL PRIMARY KEY,
    고객이름 VARCHAR(10) NOT NULL,
    나이 INT,
    등급 VARCHAR(10) NOT NULL,
    직업 VARCHAR(20),
    적립금 INT DEFAULT 0
);

INSERT INTO 고객 (고객아이디, 고객이름, 나이, 등급, 직업, 적립금) VALUES
('apple', '정소화', 20, 'gold', '학생', 1000),
('banana', '김선우', 25, 'vip', '간호사', 2500),
('carrot', '고명석', 28, 'gold', '교사', 4500),
('orange', '김용욱', 22, 'silver', '학생', 0),
('melon', '성원용', 35, 'gold', '회사원', 5000),
('peach', '오형준', NULL, 'silver', '의사', 300),
('pear', '채광주', 31, 'silver', '회사원', 500);
