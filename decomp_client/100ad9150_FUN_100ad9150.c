
undefined8 FUN_100ad9150(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_100adb590(param_1 + 0x100);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x19)) & 0xffffffffffffff02;
    uVar4 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
  }
  return uVar4;
}

