
undefined1 FUN_100d367b0(QString *param_1)

{
  char *pcVar1;
  uid_t uVar2;
  long lVar3;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  uVar2 = _getuid();
  lVar3 = _getpwuid(uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  pcVar1 = *(char **)(lVar3 + 0x30);
  if (pcVar1 == (char *)0x0) {
    return 0;
  }
  _strlen(pcVar1);
  QString::fromUtf8_helper((char *)&local_38,(int)pcVar1);
  QString::normalized(&local_30,&local_38,1,0);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d3684a;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100d3684a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 1;
}

