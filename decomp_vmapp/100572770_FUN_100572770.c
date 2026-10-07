
int FUN_100572770(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = param_1 + 0x1198;
  if ((uVar4 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar4 = uVar4 | 1;
  }
  plVar1 = *(long **)(param_1 + 0x1130);
  *(undefined4 *)(param_1 + 0x11a0) = param_2;
  iVar3 = 0;
  if (*(long **)(param_1 + 0x1128) != plVar1) {
    iVar3 = 0;
    plVar2 = *(long **)(param_1 + 0x1128);
    do {
      if (*plVar2 != 0) {
        iVar3 = FUN_10058a340(*plVar2,param_2);
        if (iVar3 == -0x7ffdefdc) {
          iVar3 = 0;
        }
      }
    } while ((plVar1 != plVar2 + 1) && (plVar2 = plVar2 + 1, -1 < iVar3));
  }
  if ((uVar4 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return iVar3;
}

