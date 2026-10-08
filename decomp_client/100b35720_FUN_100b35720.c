
undefined1 FUN_100b35720(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = _fcntl(param_1,1);
  if ((uVar1 != 0xffffffff) && (iVar2 = _fcntl(param_1,2,(ulong)(uVar1 | 1)), iVar2 != -1)) {
    return 1;
  }
  piVar3 = ___error();
  iVar2 = *piVar3;
  pcVar4 = _strerror(iVar2);
  if (pcVar4 != (char *)0x0) {
    _strlen(pcVar4);
  }
  QString::fromLocal8Bit_helper((char *)&local_38,(int)pcVar4);
  QString::toUtf8();
  FUN_100df99c0("","SocketUtils",0,"Unable to set close-on-exec flag: error %d (%s)",iVar2,
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b357ff;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100b357ff:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0;
}

