
undefined8 FUN_100850fd0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = FUN_10084eac0(param_1,param_1,*(long *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18),
                          param_3);
    return uVar1;
  }
  FUN_100887ce0(3,0x65,0x6b,"bn_blind.c",0x10f);
  return 0;
}

