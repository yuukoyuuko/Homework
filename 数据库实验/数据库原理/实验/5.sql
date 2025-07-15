-- 单表
SELECT * FROM students;

-- 分组
SELECT course_id, COUNT(*) AS student_count
FROM grades
GROUP BY course_id;

-- 多表连接
SELECT s.name, c.course_name, g.grade
FROM students s
JOIN grades g ON s.student_id = g.student_id
JOIN courses c ON g.course_id = c.course_id;

-- 单表连接
SELECT s1.name AS student_name, s2.name AS same_classmate
FROM students s1
LEFT JOIN students s2 
    ON s1.age = s2.age AND s1.student_id != s2.student_id;

-- 嵌套查询
SELECT name
FROM students
WHERE student_id IN (SELECT student_id FROM grades WHERE grade = 'A');

-- 集合查询
SELECT student_id FROM grades WHERE course_id = 101
UNION
SELECT student_id FROM grades WHERE course_id = 102;