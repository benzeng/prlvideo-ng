
byte FUN_1005b9820(void)

{
  byte bVar1;
  
  bVar1 = COsInstallationInfo::isIntegrated();
  return bVar1 ^ 1;
}

