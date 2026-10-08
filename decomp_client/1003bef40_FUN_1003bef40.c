
undefined8 FUN_1003bef40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    uVar2 = FUN_10016f500(uVar2);
    uVar2 = FUN_10061b4d0(uVar2,0x80);
  }
  return uVar2;
}

