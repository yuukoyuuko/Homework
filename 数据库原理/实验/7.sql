-- 创建视图
CREATE VIEW student_grades AS
SELECT s.name, c.course_name, g.grade
FROM students s
JOIN grades g ON s.student_id = g.student_id
JOIN courses c ON g.course_id = c.course_id;

-- 查询视图
SELECT * FROM student_grades;

-- 删除视图
DROP VIEW student_grades;