
undefined1 FUN_1004c1d40(void)

{
  undefined1 uVar1;
  
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    if (DAT_1011b55f8 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      FUN_1008e3970("","SharedProfileHost",1,"Configuration is not available");
    }
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharedProfile();
    uVar1 = CVmSharedProfile::isEnabled();
  }
  return uVar1;
}

