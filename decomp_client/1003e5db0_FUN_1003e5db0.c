
undefined8 FUN_1003e5db0(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18));
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_1003b0a30(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18));
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x18);
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmCommonOptions();
      uVar1 = CVmCommonOptions::getOsVersion();
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getChipset();
      uVar2 = Chipset::getType();
      uVar4 = FUN_1003b2390(uVar4,param_2,lVar3 + 0x30,uVar1,uVar2);
    }
  }
  return uVar4;
}

