-- 插入数据
INSERT INTO students (student_id, name, age, gender, email)
VALUES (6, 'David Brown', 22, 'M', 'davidbrown@example.com');

--修改数据
UPDATE students SET age = 23 WHERE student_id = 1;

-- 删除数据
DELETE FROM students WHERE student_id = 6;