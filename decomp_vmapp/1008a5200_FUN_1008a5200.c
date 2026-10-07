
int FUN_1008a5200(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_1;
  if ((param_2 == (long *)0x0) || (*param_2 != 0)) {
    iVar1 = FUN_1008a5390(&local_38,param_2,param_3,0xffffffff,0x800);
  }
  else {
    iVar2 = FUN_1008a5390(&local_38,0,param_3,0xffffffff,0x800);
    iVar1 = iVar2;
    if ((0 < iVar2) && (lVar3 = FUN_10081ddd0(iVar2,"tasn_enc.c",0x6d), iVar1 = -1, lVar3 != 0)) {
      local_40 = lVar3;
      FUN_1008a5390(&local_38,&local_40,param_3,0xffffffff,0x800);
      *param_2 = lVar3;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

