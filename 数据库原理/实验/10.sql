-- 定义触发器
CREATE TRIGGER before_insert_grade
BEFORE INSERT ON grades
FOR EACH ROW
WHEN NEW.grade NOT IN ('A', 'B', 'C', 'D', 'F')
BEGIN
    SELECT RAISE(ABORT, 'Invalid grade value');
END;

-- 删除触发器
DROP TRIGGER IF EXISTS before_insert_grade;
