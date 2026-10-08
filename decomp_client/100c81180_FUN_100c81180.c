
int FUN_100c81180(undefined8 param_1,long *param_2,long param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_34;
  
  local_34 = *(int *)(param_3 + 8);
  bVar2 = false;
  iVar3 = FUN_100c812a0(param_1,0,&local_34,param_3);
  if ((0x14 < local_34 + 3U) || ((0x180001U >> (local_34 + 3U & 0x1f) & 1) == 0)) {
    bVar2 = true;
  }
  iVar5 = 0;
  iVar4 = iVar5;
  if (iVar3 != -1) {
    if (iVar3 == -2) {
      iVar5 = 2;
      iVar3 = 0;
    }
    iVar1 = local_34;
    if (param_4 != -1) {
      iVar1 = param_4;
    }
    if (param_2 != (long *)0x0) {
      if (bVar2) {
        FUN_100c8ad50(param_2,iVar5,iVar3,iVar1,param_5);
      }
      FUN_100c812a0(param_1,*param_2,&local_34,param_3);
      if (iVar5 == 0) {
        *param_2 = *param_2 + (long)iVar3;
      }
      else {
        FUN_100c8ae80(param_2);
      }
    }
    iVar4 = iVar3;
    if (bVar2) {
      iVar4 = FUN_100c8aea0(iVar5,iVar3,iVar1);
    }
  }
  return iVar4;
}

