
undefined8 FUN_10089c040(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_28;
  long local_20;
  
  local_20 = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    iVar1 = FUN_1008a52d0(param_2,&local_20,param_1);
    if (local_20 == 0) {
      FUN_100887ce0(0xd,0xbf,0x41,"a_dup.c",0x6e);
      uVar2 = 0;
    }
    else {
      local_28 = local_20;
      uVar2 = FUN_1008a5f10(0,&local_28,(long)iVar1,param_1);
      FUN_10081e1a0(local_20);
    }
  }
  return uVar2;
}

