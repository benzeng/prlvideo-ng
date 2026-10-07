
undefined8 FUN_1004c92a0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_2 + 0x14) == 4) && (*(short *)(param_2 + 0x16) == 0)) {
    uVar1 = FUN_1002a6010(param_2);
    uVar1 = FUN_1004ceea0(param_1,uVar1,1);
    return uVar1;
  }
  return 0xf0000003;
}

