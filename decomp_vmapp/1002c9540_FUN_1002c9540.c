
void FUN_1002c9540(long param_1,ulong param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  
  param_2 = param_2 & 0xffffffff;
  lVar5 = *(long *)(param_1 + 0x40);
  if (param_3 == 0) {
    uVar4 = *(uint *)(lVar5 + 0x2034 + param_2 * 4);
    do {
      puVar1 = (uint *)(lVar5 + 0x2034 + param_2 * 4);
      LOCK();
      uVar2 = *puVar1;
      bVar6 = uVar4 == uVar2;
      if (bVar6) {
        *puVar1 = uVar4 & 0xfffffffb;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar6);
  }
  else {
    uVar4 = *(uint *)(lVar5 + 0x2034 + param_2 * 4);
    do {
      puVar1 = (uint *)(lVar5 + 0x2034 + param_2 * 4);
      LOCK();
      uVar2 = *puVar1;
      bVar6 = uVar4 == uVar2;
      if (bVar6) {
        *puVar1 = uVar4 | 4;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
    } while (!bVar6);
  }
  plVar3 = *(long **)(param_1 + 0x50);
  lVar5 = FUN_100257d80(plVar3);
  uVar4 = *(uint *)(lVar5 + 0x2030);
  do {
    LOCK();
    uVar2 = *(uint *)(lVar5 + 0x2030);
    bVar6 = uVar4 == uVar2;
    if (bVar6) {
      *(uint *)(lVar5 + 0x2030) = uVar4 | 1;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
  } while (!bVar6);
                    /* WARNING: Could not recover jumptable at 0x0001002c95b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}

