
undefined8 FUN_1006aa780(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = QApplication::activeWindow();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = QApplication::activeWindow();
    uVar2 = CONCAT71((int7)((ulong)*(long *)(lVar1 + 0x28) >> 8),
                     (*(byte *)(*(long *)(lVar1 + 0x28) + 0x12) & 3) == 0);
  }
  return uVar2;
}

