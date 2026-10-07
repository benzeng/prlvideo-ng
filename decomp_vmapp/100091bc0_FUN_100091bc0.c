
undefined8 * FUN_100091bc0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar1 = CVmCommonOptions::getOsVersion();
  if (param_3 == 0) {
    uVar2 = FUN_100060640();
    FUN_1006e04a0(param_1,uVar2,uVar1);
  }
  else {
    uVar3 = QString::fromAscii_helper("",0);
    *param_1 = uVar3;
  }
  return param_1;
}

