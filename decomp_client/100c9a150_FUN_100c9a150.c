
undefined8 FUN_100c9a150(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100c7b050(param_1[1],*(undefined8 *)(*param_1 + 0x10));
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_100c79220(&DAT_102251ea0,param_1[1],param_1[2],*param_1,param_2);
  return uVar2;
}

