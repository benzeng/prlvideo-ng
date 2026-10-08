
void FUN_100db5430(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x50) + 0x14);
  if (0xf < uVar3) {
    uVar2 = uVar3;
    if (DAT_1023119b8 / DAT_1023119b0 <= uVar3) {
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
        FUN_100db5350(lVar1 + -0x28,*(undefined8 *)(param_1 + 0x50));
        uVar2 = uVar3;
      } while (DAT_1023119b8 / DAT_1023119b0 <= *(uint *)(*(long *)(param_1 + 0x50) + 0x14));
    }
    if ((int)uVar3 < 0) {
      FUN_100df99c0("","AbstractFile",0,"Handle pool exhausted");
      return;
    }
  }
  return;
}

