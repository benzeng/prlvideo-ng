
int FUN_1008e2f50(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar1 = _dup(param_1);
  if (iVar1 != -1) {
    return iVar1;
  }
  piVar2 = ___error();
  iVar1 = *piVar2;
  pcVar3 = _strerror(iVar1);
  if (pcVar3 != (char *)0x0) {
    _strlen(pcVar3);
  }
  QString::fromLocal8Bit_helper((char *)&local_40,(int)pcVar3);
  QString::toUtf8();
  FUN_1008e3970("","SocketUtils",0,"Unable to duplicate socket: error %d (%s)",iVar1,
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1008e3010;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1008e3010:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return -1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return -1;
}

