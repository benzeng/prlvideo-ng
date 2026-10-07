
int FUN_100506270(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long local_40;
  int local_38;
  
  lVar2 = *param_2;
  lVar3 = *(long *)(lVar2 + 0x10);
  iVar5 = 1;
  if (0x4b < *(uint *)(lVar2 + 4)) {
    local_40 = lVar2 + 0x4c + lVar3;
    local_38 = *(uint *)(lVar2 + 4) - 0x4c;
    iVar5 = 2;
    if ((*(int *)(lVar2 + lVar3) == 0x4c) &&
       (iVar4 = _memcmp((void *)(lVar3 + 4 + lVar2),&DAT_100b45d80,0x10), iVar4 == 0)) {
      FUN_100504f80(param_1);
      uVar1 = *(uint *)(lVar3 + 0x14 + lVar2);
      _memcpy((void *)(param_1 + 0x20),(void *)(lVar2 + lVar3),0x4c);
      if (((uVar1 & 1) != 0) && (iVar5 = FUN_100507010(param_1,param_1,&local_40), iVar5 != 0)) {
        return iVar5;
      }
      if (((uVar1 & 2) != 0) && (iVar5 = FUN_100507150(param_1,param_1 + 8,&local_40), iVar5 != 0))
      {
        return iVar5;
      }
      if (((uVar1 & 0x7c) != 0) &&
         (iVar5 = FUN_100507290(param_1,param_1 + 0x10,&local_40), iVar5 != 0)) {
        return iVar5;
      }
      iVar5 = FUN_1005073d0(param_1,param_1 + 0x18,&local_40);
    }
  }
  return iVar5;
}

