
char * _xmlThrDefTreeIndentString(char *v)

{
  undefined *puVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  puVar1 = PTR_s__1022794e0;
  PTR_s__1022794e0 = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return puVar1;
}

