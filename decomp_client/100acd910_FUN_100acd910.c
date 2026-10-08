
void FUN_100acd910(long param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (DAT_102310998 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006faf60(pvVar2);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar2;
  }
  pvVar2 = DAT_102310998;
  uVar3 = FUN_100319390(*(undefined8 *)(param_1 + 0x70));
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar1 = CVmCommonOptions::getOsType();
  FUN_1006fb710(pvVar2,uVar1);
  return;
}

