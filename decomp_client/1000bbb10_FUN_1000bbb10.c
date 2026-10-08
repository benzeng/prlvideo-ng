
undefined8 FUN_1000bbb10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_10018c2b0(lVar2);
    lVar2 = CVmConfiguration::getVmSettings();
    if (lVar2 != 0) {
      uVar1 = CVmSettings::getVmTools();
      return uVar1;
    }
  }
  return 0;
}

