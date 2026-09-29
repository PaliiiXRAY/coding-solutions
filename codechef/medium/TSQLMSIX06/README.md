# TSQLMSIX06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** SQL  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T04:27:19.202Z  

```sql
-- your code goes here
select name , job_title, hire_date, salary
from maxlinear_employees where hire_date > '2022-01-01'

union all 

select name, job_title, hire_date, salary
from maxlinear_contractors where hire_date > '2022-01-01'

order by hire_date desc;
```

---

[View on CodeChef](https://www.codechef.com/problems/TSQLMSIX06)