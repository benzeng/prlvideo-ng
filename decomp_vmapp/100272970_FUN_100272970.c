
undefined8 FUN_100272970(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar4 = &DAT_1011c3820;
  lVar3 = 0;
  do {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + lVar3 * 8);
    if (lVar1 != 0) {
      iVar2 = FUN_1002729f0(lVar1,puVar4);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      FUN_100272b10(lVar1,1);
    }
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 0x40;
  } while (lVar3 < 0x10);
  if (DAT_101115c78 != '\0') {
    FUN_100272c10();
  }
  return 0;
}

