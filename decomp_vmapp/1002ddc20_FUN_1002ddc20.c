
undefined8 FUN_1002ddc20(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = param_1 + 0x20;
  if ((uVar10 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar10 = uVar10 | 1;
  }
  uVar9 = (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4);
  if (uVar9 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar4 = 0;
    do {
      lVar5 = *(long *)(lVar2 + uVar4 * 0x10);
      if ((lVar5 != 0) &&
         (puVar8 = *(undefined4 **)(lVar2 + 8 + uVar4 * 0x10), puVar8 != (undefined4 *)0x0)) {
        bVar1 = *(byte *)(lVar5 + 4);
        uVar3 = (ulong)bVar1;
        if (uVar3 != 0) {
          uVar6 = 0;
          if (bVar1 != (bVar1 & 1)) {
            uVar6 = uVar3 - (uVar3 & 1);
            lVar5 = uVar3 - (uVar3 & 1);
            puVar7 = puVar8;
            do {
              *puVar7 = 0;
              puVar7[10] = 0;
              puVar7 = puVar7 + 0x14;
              lVar5 = lVar5 + -2;
            } while (lVar5 != 0);
          }
          if (uVar3 != uVar6) {
            puVar8 = puVar8 + uVar6 * 10;
            do {
              *puVar8 = 0;
              uVar6 = uVar6 + 1;
              puVar8 = puVar8 + 10;
            } while (uVar6 < uVar3);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar9);
  }
  if ((uVar10 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return 1;
}

