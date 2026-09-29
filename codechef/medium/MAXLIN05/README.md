# MAXLIN05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are an HR analyst at MaxLinear, a semiconductor company, tasked with analyzing recent hires across both employees and contractors.

#### Task

 **Your goal is to:** 

- Create a combined report of all personnel (both employees and contractors) hired after January 1, 2022
- Include each person's name, job title, hire date, and salary in the results
- Combine the data from two separate tables into a single, unified result set
- Order the results by hire date (most recent first)
#### Table Structure

The `maxlinear_employees` table contains:

- employee_id: Unique identifier for each employee
- name: Employee's full name
- job_title: Employee's job position
- hire_date: Date when the employee was hired
- salary: Employee's annual salary
- department: Department where the employee works

The `maxlinear_contractors` table contains:

- contractor_id: Unique identifier for each contractor
- name: Contractor's full name
- job_title: Contractor's job position
- hire_date: Date when the contractor was hired
- salary: Contractor's annual salary equivalent
- project: Project the contractor is assigned to
#### Employees Data
employee_id	name	job_title	hire_date	salary	department
101	John Smith	Software Engineer	2021-10-15	95000	Engineering
102	Sarah Johnson	Data Analyst	2022-02-20	85000	Analytics
103	Michael Brown	Product Manager	2022-03-05	110000	Product
104	Emily Davis	HR Specialist	2021-08-12	75000	Human Resources
105	David Wilson	Systems Architect	2022-01-10	120000	Engineering
#### Contractors Data
contractor_id	name	job_title	hire_date	salary	project
201	Jessica Lee	UX Designer	2022-02-01	90000	Website Redesign
202	Robert Chen	Database Consultant	2021-11-15	105000	Data Migration
203	Amanda Miller	Content Strategist	2022-04-10	80000	Marketing Campaign
204	Thomas Jackson	Security Specialist	2022-03-22	115000	Security Audit
205	Lisa Garcia	Financial Analyst	2021-12-05	95000	Annual Budget
#### Expected Output Columns
- name
- job_title
- hire_date
- salary

## Solution

**Language:** SQL  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-29T04:27:12.488Z  

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

[View on CodeChef](https://www.codechef.com/problems/MAXLIN05)