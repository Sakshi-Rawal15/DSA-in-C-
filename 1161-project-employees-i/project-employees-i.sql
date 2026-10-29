SELECT project_id,Round(AVG(experience_years), 2)as average_years
From Project
JOIN Employee
ON Project.employee_id = Employee.employee_id
Group by project_id;
