
undefined8 * FUN_1004916a0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar1 = CVmCommonOptions::getOsType();
  if (iVar1 == 7) {
    pcVar3 = "/usr/local/bin/prl_nettool";
    iVar1 = 0x1a;
  }
  else if (iVar1 == 9) {
    pcVar3 = "/usr/sbin/prl_nettool";
    iVar1 = 0x15;
  }
  else {
    pcVar3 = "prl_nettool";
    iVar1 = 0xb;
  }
  uVar2 = QString::fromAscii_helper(pcVar3,iVar1);
  *param_1 = uVar2;
  return param_1;
}

