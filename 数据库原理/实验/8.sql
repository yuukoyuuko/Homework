-- a) 创建用户
CREATE USER 'student_user'@'localhost' IDENTIFIED BY 'password123';

-- b) 创建角色并分配权限
CREATE ROLE 'student_role';
GRANT SELECT, INSERT ON db_experiment.* TO 'student_role';

-- c) 给用户分配权限（直接分配、通过角色分配）
-- 直接分配权限
GRANT SELECT, INSERT ON db_experiment.* TO 'student_user'@'localhost';

-- 通过角色分配权限
GRANT 'student_role' TO 'student_user'@'localhost';

-- d) 验证权限分配正确性
SHOW GRANTS FOR 'student_user'@'localhost';

-- e) 收回权限
-- 收回直接分配的权限
REVOKE SELECT, INSERT ON db_experiment.* FROM 'student_user'@'localhost';

-- 收回通过角色分配的权限
REVOKE 'student_role' FROM 'student_user'@'localhost';
