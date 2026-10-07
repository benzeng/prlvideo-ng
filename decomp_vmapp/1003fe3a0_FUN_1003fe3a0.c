
void FUN_1003fe3a0(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[7];
    uVar5 = 0xf0000002;
    if (param_2 == 0) {
      uVar5 = 0;
    }
    *(undefined4 *)(lVar3 + 0x28) = uVar5;
    uVar6 = *(uint *)(lVar3 + 0x20);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar3 + 0x20);
      bVar7 = uVar6 == uVar1;
      if (bVar7) {
        *(uint *)(lVar3 + 0x20) = uVar6 & 0xfffffffa;
        uVar1 = uVar6;
      }
      uVar6 = uVar1;
      UNLOCK();
    } while (!bVar7);
    plVar4 = *(long **)(lVar2 + 0x838);
    (**(code **)(*plVar4 + 0x18))(plVar4,4);
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  return;
}

