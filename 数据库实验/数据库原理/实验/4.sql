-- 插入学生数据
INSERT INTO students (student_id, name, age, gender, email) VALUES
(1, 'John Doe', 20, 'M', 'johndoe@example.com'),
(2, 'Jane Smith', 22, 'F', 'janesmith@example.com'),
(3, 'Alice Johnson', 21, 'F', 'alice.johnson@example.com'),
(4, 'Bob Lee', 23, 'M', 'boblee@example.com'),
(5, 'Charlie Brown', 19, 'M', 'charliebrown@example.com');

-- 插入课程数据
INSERT INTO courses (course_id, course_name, credits) VALUES
(101, 'Database Systems', 3),
(102, 'Algorithms', 4),
(103, 'Operating Systems', 3),
(104, 'Data Structures', 3),
(105, 'Software Engineering', 4);

-- 插入成绩数据
INSERT INTO grades (grade_id, student_id, course_id, grade) VALUES
(1, 1, 101, 'D'),
(2, 2, 101, 'A'),
(3, 3, 102, 'A'),
(4, 4, 103, 'C'),
(5, 5, 104, 'B'),
(6, 1, 104, 'F'),
(7, 3, 105, 'A'),
(8, 2, 105, 'F');