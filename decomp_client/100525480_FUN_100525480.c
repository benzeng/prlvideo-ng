
long FUN_100525480(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int local_3c;
  undefined1 local_35;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 8);
  local_3c = param_2;
  piVar4 = (int *)QListData::detach_grow((int *)param_1,(int)&local_3c);
  lVar3 = *param_1;
  FUN_100524f00(param_1,lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8,
                lVar3 + 0x10 + ((long)local_3c + (long)*(int *)(lVar3 + 8)) * 8,
                lVar2 + 0x10 + (long)iVar1 * 8);
  lVar3 = *param_1;
  FUN_100524f00(param_1,lVar3 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar3 + 8) + (long)local_3c) * 8,
                lVar3 + 0x10 + (long)*(int *)(lVar3 + 0xc) * 8,
                lVar2 + 0x10 + ((long)iVar1 + (long)local_3c) * 8);
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_35 = *piVar4 != 0;
      UNLOCK();
      if ((bool)local_35) goto LAB_100525530;
    }
    FUN_100524cc0(param_1);
  }
LAB_100525530:
  return *param_1 + 0x10 + ((long)local_3c + (long)*(int *)(*param_1 + 8)) * 8;
}

