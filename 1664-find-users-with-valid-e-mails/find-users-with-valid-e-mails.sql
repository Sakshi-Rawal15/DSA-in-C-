select user_id,name,mail
from Users
WHERE LOWER(mail) REGEXP '^[a-z][a-z0-9_.-]*@leetcode[.]com$' && mail LIKE BINARY '%@leetcode.com';