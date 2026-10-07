
void FUN_100644310(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x168);
  lVar4 = CHostHardwareInfoBase::getNetworkAdapters();
  lVar5 = *plVar1;
  uVar6 = (ulong)*(uint *)(lVar5 + 8);
  lVar7 = 0;
  if ((int)*(uint *)(lVar5 + 8) < *(int *)(lVar5 + 0xc)) {
    do {
      plVar2 = *(long **)(lVar5 + 0x10 + ((int)uVar6 + lVar7) * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x88))();
        lVar5 = *plVar1;
      }
      lVar7 = lVar7 + 1;
      uVar6 = (ulong)*(int *)(lVar5 + 8);
    } while (lVar7 < (long)((long)*(int *)(lVar5 + 0xc) - uVar6));
  }
  FUN_100650170(plVar1);
  FUN_1006502c0(lVar4 + 0x60);
  uVar3 = CHostHardwareInfoBase::getNetworkSettings();
  CHwNetworkSettings::setMaxVmNetAdapters(uVar3);
  uVar3 = CHostHardwareInfoBase::getNetworkSettings();
  FUN_1006c21e0();
  CHwNetworkSettings::setMaxHostNetAdapters(uVar3);
  FUN_1006443e0(param_1);
  return;
}

