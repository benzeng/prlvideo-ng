
void FUN_1003fe400(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  lVar2 = *(long *)(param_2 + 0x38);
  uVar3 = 0xf0000002;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(lVar2 + 0x28) = uVar3;
  uVar4 = *(uint *)(lVar2 + 0x20);
  do {
    LOCK();
    uVar1 = *(uint *)(lVar2 + 0x20);
    bVar5 = uVar4 == uVar1;
    if (bVar5) {
      *(uint *)(lVar2 + 0x20) = uVar4 & 0xfffffffa;
      uVar1 = uVar4;
    }
    uVar4 = uVar1;
    UNLOCK();
  } while (!bVar5);
  (**(code **)(**(long **)(param_1 + 0x838) + 0x18))(*(long **)(param_1 + 0x838),4);
  *(undefined4 *)(param_2 + 0x44) = 0;
  return;
}

