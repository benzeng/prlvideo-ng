
undefined8 FUN_1003311f0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(DAT_1011c8478 + 0x3c) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1002fcb70(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 4));
  }
  return uVar1;
}

