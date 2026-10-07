
void FUN_10070a300(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x50) + 0x14);
  if (0xf < uVar3) {
    uVar2 = uVar3;
    if (DAT_1011ccb28 / DAT_1011ccb20 <= uVar3) {
      do {
        uVar3 = uVar2 - 1;
        if ((int)uVar2 < 1) break;
        QMutex::lock();
        lVar1 = *(long *)(param_1 + 0x50);
        if (*(long *)(lVar1 + 0x20) == lVar1 + 0x20) {
          QMutex::unlock();
          break;
        }
        lVar1 = *(long *)(lVar1 + 0x28);
        QMutex::unlock();
        FUN_10070a220(lVar1 + -0x28,*(undefined8 *)(param_1 + 0x50));
        uVar2 = uVar3;
      } while (DAT_1011ccb28 / DAT_1011ccb20 <= *(uint *)(*(long *)(param_1 + 0x50) + 0x14));
    }
    if ((int)uVar3 < 0) {
      FUN_1008e3970("","AbstractFile",0,"Handle pool exhausted");
      return;
    }
  }
  return;
}

