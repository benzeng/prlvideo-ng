
long FUN_1000ee6e0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int local_38;
  undefined1 local_33;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 8);
  local_38 = param_2;
  piVar4 = (int *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar3 = *param_1;
  FUN_1000ee8e0(param_1,lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8,
                lVar3 + 0x10 + ((long)local_38 + (long)*(int *)(lVar3 + 8)) * 8,
                lVar2 + 0x10 + (long)iVar1 * 8);
  lVar3 = *param_1;
  FUN_1000ee8e0(param_1,lVar3 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar3 + 8) + (long)local_38) * 8,
                lVar3 + 0x10 + (long)*(int *)(lVar3 + 0xc) * 8,
                lVar2 + 0x10 + ((long)iVar1 + (long)local_38) * 8);
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_33 = *piVar4 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1000ee790;
    }
    FUN_1000ee5e0(param_1);
  }
LAB_1000ee790:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}

