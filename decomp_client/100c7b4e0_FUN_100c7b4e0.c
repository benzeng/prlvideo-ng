
undefined4 FUN_100c7b4e0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_100c7b190(&local_28,param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_100c80850(local_28,param_2,&DAT_1022516d8);
      FUN_100c801c0(local_28,&DAT_1022516d8);
    }
  }
  return uVar2;
}

