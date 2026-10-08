
undefined8 FUN_1000b7a40(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000d76f0(*(long *)(param_1 + 0x40),param_2,param_3);
  }
  return uVar1;
}

