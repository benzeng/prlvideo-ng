
undefined8 FUN_10047bb30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  pcVar2 = (char *)FUN_10078d0a0(param_2);
  iVar1 = FUN_10078d0c0(param_2);
  if ((pcVar2 != (char *)0x0) && (iVar1 == -1)) {
    _strlen(pcVar2);
  }
  QString::fromUtf8_helper((char *)&local_30,(int)pcVar2);
  QDateTime::fromString(param_1,&local_30,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10047bbb9;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10047bbb9:
  QDateTime::setTimeSpec(param_1,1);
  return param_1;
}

