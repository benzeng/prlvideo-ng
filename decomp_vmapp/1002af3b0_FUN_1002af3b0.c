
void FUN_1002af3b0(long param_1,byte *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((*param_2 & 2) != 0) {
    lVar2 = *(long *)(param_1 + 0x910);
    uVar3 = (uint)*(ushort *)(lVar2 + 0x10) * (uint)*(ushort *)(lVar2 + 0x12);
    uVar1 = *(uint *)(param_1 + 0x928);
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
    uVar4 = 0;
    if (*(uint *)(lVar2 + 0x18) <= uVar1 - uVar3) {
      uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
    }
    ___bzero(uVar4 + *(long *)(param_1 + 0x920),uVar3);
  }
  QMutex::lock();
  QWaitCondition::wakeOne();
  QMutex::unlock();
  return;
}

