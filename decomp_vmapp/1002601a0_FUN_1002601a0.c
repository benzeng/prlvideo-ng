
void FUN_1002601a0(long param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  undefined8 local_20;
  
  FUN_10025b2f0(param_1 + 0x68,2);
  lVar7 = *(long *)(param_1 + 0xa0);
  if (*(int *)(lVar7 + 0x2c) != 0) {
    do {
      piVar1 = (int *)(lVar7 + 0x3c);
      piVar2 = (int *)(lVar7 + 0x38);
      puVar3 = (uint *)(lVar7 + 0x44);
      lVar7 = *(long *)(param_1 + 0xa0);
      if ((*puVar3 & *piVar1 - *piVar2) == 0) break;
      iVar5 = FUN_1007d7280(lVar7 + 0x30,*(undefined4 *)(lVar7 + 0x30),&local_20);
      iVar5 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
                        (*(long **)(param_1 + 0xa8),local_20,(long)iVar5);
      if (0 < iVar5) {
        lVar7 = *(long *)(param_1 + 0xa0);
        *(uint *)(lVar7 + 0x38) = iVar5 + *(int *)(lVar7 + 0x38) & *(uint *)(lVar7 + 0x44);
      }
      lVar7 = *(long *)(param_1 + 0xa0);
    } while (*(int *)(lVar7 + 0x2c) != 0);
  }
  uVar6 = *(uint *)(lVar7 + 0x18);
  do {
    LOCK();
    uVar4 = *(uint *)(lVar7 + 0x18);
    bVar8 = uVar6 == uVar4;
    if (bVar8) {
      *(uint *)(lVar7 + 0x18) = uVar6 | 1;
      uVar4 = uVar6;
    }
    uVar6 = uVar4;
    UNLOCK();
  } while (!bVar8);
  FUN_1002effe0(*(undefined8 *)(param_1 + 0xb8));
  return;
}

