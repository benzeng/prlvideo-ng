
undefined8 FUN_1007d8430(undefined8 param_1,int param_2)

{
  char *pcVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  pcVar1 = _strerror(param_2);
  if (pcVar1 != (char *)0x0) {
    _strlen(pcVar1);
  }
  QString::fromUtf8_helper((char *)&local_30,(int)pcVar1);
  QString::normalized(param_1,&local_30,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

