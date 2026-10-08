
undefined8 FUN_100add1c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100adbbf0(*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else if ((*(byte *)(lVar1 + 0x18) & 0x41) == 0) {
    uVar2 = FUN_100adc710(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar1 + 8));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

