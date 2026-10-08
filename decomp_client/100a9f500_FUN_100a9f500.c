
void FUN_100a9f500(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 8);
  piVar4 = (int *)QListData::detach((int)param_1);
  lVar3 = *param_1;
  FUN_100a9ef60(param_1,lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8,
                lVar3 + 0x10 + (long)*(int *)(lVar3 + 0xc) * 8,lVar2 + 0x10 + (long)iVar1 * 8);
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 != 0) {
        return;
      }
    }
    FUN_100a9eba0(param_1,piVar4);
  }
  return;
}

