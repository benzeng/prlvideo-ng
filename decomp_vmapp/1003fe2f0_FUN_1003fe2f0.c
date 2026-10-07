
void FUN_1003fe2f0(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  
  lVar5 = *(long *)(param_2 + 0x38);
  uVar3 = 0xf0000002;
  if (*(int *)(param_2 + 0xc0) == 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(lVar5 + 0x28) = uVar3;
  uVar4 = *(uint *)(lVar5 + 0x20);
  do {
    LOCK();
    uVar1 = *(uint *)(lVar5 + 0x20);
    bVar6 = uVar4 == uVar1;
    if (bVar6) {
      *(uint *)(lVar5 + 0x20) = uVar4 & 0xfffffffa;
      uVar1 = uVar4;
    }
    uVar4 = uVar1;
    UNLOCK();
  } while (!bVar6);
  (**(code **)(**(long **)(param_1 + 0x838) + 0x18))(*(long **)(param_1 + 0x838),4);
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x858);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x860);
  }
  *(long *)(lVar5 + 0xf0) = *(long *)(lVar5 + 0xf0) + 1;
  if (*(int *)(param_1 + 0x878) != 0) {
    lVar5 = *(long *)(param_2 + 0x8f0);
    plVar2 = *(long **)(param_2 + 0x8f8);
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    *(long *)(param_2 + 0x8f0) = param_2 + 0x8f0;
    *(long *)(param_2 + 0x8f8) = param_2 + 0x8f0;
  }
  *(undefined4 *)(param_2 + 0x44) = 0;
  return;
}

