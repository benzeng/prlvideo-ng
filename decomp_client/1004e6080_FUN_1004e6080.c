
void FUN_1004e6080(QObject *param_1)

{
  long lVar1;
  QObject *pQVar2;
  int *local_40;
  long *local_38;
  long *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  pQVar2 = (QObject *)FUN_1001d50a0();
  QObject::disconnect(pQVar2,(char *)0x0,param_1,(char *)0x0);
  FUN_10006b440(&local_40,param_1 + 0x30);
  local_38 = (long *)(local_40 + (long)local_40[2] * 2 + 4);
  local_30 = (long *)(local_40 + (long)local_40[3] * 2 + 4);
  if (local_40[2] != local_40[3]) {
    do {
      local_28 = 1;
      lVar1 = *(long *)*local_38;
      if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
         (pQVar2 = (QObject *)((long *)*local_38)[1], pQVar2 != (QObject *)0x0)) {
        QObject::disconnect(pQVar2,(char *)0x0,param_1,(char *)0x0);
      }
      local_38 = local_38 + 1;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      local_19 = *local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004e6149;
    }
    FUN_10006b5d0(&local_40,local_40);
  }
LAB_1004e6149:
  FUN_10007b5a0(param_1 + 0x30);
  return;
}

