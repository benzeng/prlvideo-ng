
undefined8 FUN_0040de50(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  
  local_14 = param_3;
  iVar1 = FUN_0040e550(param_1,&local_14,4,0x20cf);
  if (iVar1 == 0) {
    uVar2 = FUN_0040de30(param_2);
    iVar1 = FUN_0040e550(param_1,param_2,uVar2,0x2191);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0xfffffffd;
}

