
undefined8 FUN_10029bde0(long param_1,char param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_100409570(*(undefined1 *)(param_1 + 0x18));
  if (param_2 == '\0') {
    return 1;
  }
  QMutex::lock();
  if (*(int *)(param_1 + 0x50) == 2) {
    uVar1 = *(ulong *)(param_1 + 0x58);
    uVar2 = FUN_1007d87f0();
    if (uVar2 <= uVar1) {
LAB_10029be50:
      QMutex::unlock();
      return 1;
    }
    *(undefined4 *)(param_1 + 0x50) = 3;
  }
  else if (*(int *)(param_1 + 0x50) != 3) goto LAB_10029be50;
  lVar3 = FUN_1007d87f0();
  *(long *)(param_1 + 0x58) = lVar3 + *(long *)(param_1 + 0x60);
  QMutex::unlock();
  FUN_100409ce0(*(undefined1 *)(param_1 + 0x18));
  return 1;
}

