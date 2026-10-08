
void FUN_100055ad0(undefined8 param_1,char *param_2)

{
  QArrayData *local_30;
  undefined1 local_22;
  
  if (param_2 != (char *)0x0) {
    _strlen(param_2);
  }
  QString::fromUtf8_helper((char *)&local_30,(int)param_2);
  FUN_1007f90b0(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

