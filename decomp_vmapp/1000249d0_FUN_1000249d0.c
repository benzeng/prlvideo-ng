
undefined8 FUN_1000249d0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),4,0,0,1,0);
  }
  return uVar1;
}

