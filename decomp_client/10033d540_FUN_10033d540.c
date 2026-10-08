
undefined1 FUN_10033d540(long param_1,int param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  uVar1 = 1;
  if ((((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
      (*(long *)(param_1 + 0x18) != 0)) && (lVar2 = FUN_100319390(), lVar2 != 0)) {
    FUN_10018c2b0(lVar2);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmCoherence();
    if (param_2 == 1) {
      uVar1 = CVmCoherence::isShowTaskBarInCoherence();
    }
    else {
      uVar1 = CVmCoherence::isShowTaskBar();
    }
  }
  return uVar1;
}

