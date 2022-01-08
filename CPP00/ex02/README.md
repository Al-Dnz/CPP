
### NOTE	

Timestamps are different between old and current logs.
To check a diff ignoring the timestamps, launch :

```
 diff <(cut -c 18- 42_log) <(cut -c 18- log)
```

For the last part, the destructor call the instance in a reversed order in MacOS
but in the right order on Linux;