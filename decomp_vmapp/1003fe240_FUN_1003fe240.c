
void FUN_1003fe240(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar6 = param_1[7];
    uVar4 = 0xf0000002;
    if ((int)param_1[0x18] == 0) {
      uVar4 = 0;
    }
    *(undefined4 *)(lVar6 + 0x28) = uVar4;
    uVar5 = *(uint *)(lVar6 + 0x20);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar6 + 0x20);
      bVar7 = uVar5 == uVar1;
      if (bVar7) {
        *(uint *)(lVar6 + 0x20) = uVar5 & 0xfffffffa;
        uVar1 = uVar5;
      }
      uVar5 = uVar1;
      UNLOCK();
    } while (!bVar7);
    (**(code **)(**(long **)(lVar2 + 0x838) + 0x18))(*(long **)(lVar2 + 0x838),4);
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      lVar6 = *(long *)(lVar2 + 0x858);
    }
    else {
      lVar6 = *(long *)(lVar2 + 0x860);
    }
    *(long *)(lVar6 + 0xf0) = *(long *)(lVar6 + 0xf0) + 1;
    if (*(int *)(lVar2 + 0x878) != 0) {
      lVar2 = param_1[0x11e];
      plVar3 = (long *)param_1[0x11f];
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      param_1[0x11e] = (long)(param_1 + 0x11e);
      param_1[0x11f] = (long)(param_1 + 0x11e);
    }
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  return;
}

