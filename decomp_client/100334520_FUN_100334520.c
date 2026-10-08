
undefined8 FUN_100334520(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100092b60(*(undefined8 *)(param_1 + 0x18));
  }
  return uVar1;
}

