-- your code goes here
select name , job_title, hire_date, salary
from maxlinear_employees where hire_date > '2022-01-01'

union all 

select name, job_title, hire_date, salary
from maxlinear_contractors where hire_date > '2022-01-01'

order by hire_date desc;