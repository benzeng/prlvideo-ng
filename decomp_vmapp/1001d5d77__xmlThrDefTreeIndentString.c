
char * _xmlThrDefTreeIndentString(char *v)

{
  undefined *puVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  puVar1 = PTR_s__1011113e0;
  PTR_s__1011113e0 = v;
  _xmlMutexUnlock(DAT_1011b8728);
  return puVar1;
}

