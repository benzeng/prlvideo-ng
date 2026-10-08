
void FUN_10033bc00(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar4 = FUN_100319390(uVar6);
  lVar5 = 0;
  if (lVar4 != 0) {
    FUN_10018c2b0(lVar4);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    lVar5 = CVmTools::getVmCoherence();
  }
  uVar1 = FUN_10033c480(param_1);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x25) = 0;
    uVar3 = 0;
  }
  else {
    bVar2 = CVmCoherence::isShowTaskBar();
    *(uint *)(param_1 + 0x25) = (uint)bVar2;
    bVar2 = CVmCoherence::isShowTaskBarInCoherence();
    uVar3 = (uint)bVar2;
  }
  *(uint *)(param_1 + 0x29) = uVar3;
  return;
}

