
void FUN_1005207f0(long param_1,char param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  char cVar3;
  tm local_78;
  long local_40;
  long local_38;
  
  FUN_1007eb1f0(&local_38);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getTimeSync();
  cVar1 = CVmToolsTimeSync::isEnabled();
  cVar3 = param_2;
  if ((cVar1 != '\0') && (cVar1 = CVmToolsTimeSync::isKeepTimeDiff(), cVar1 != '\0')) {
    local_38 = local_38 + *(long *)(param_1 + 8);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar2 = CVmCommonOptions::getOsType();
    cVar3 = '\x01';
    if (iVar2 != 8) {
      cVar3 = param_2;
    }
  }
  local_40 = local_38 / 1000;
  *param_3 = (int)local_40;
  if (cVar3 == '\0') {
    _localtime_r(&local_40,&local_78);
  }
  else {
    _gmtime_r(&local_40,&local_78);
  }
  if (local_38 != -0x8000000000000000) {
    param_3[2] = local_78.tm_sec;
    param_3[3] = local_78.tm_min;
    param_3[4] = local_78.tm_hour;
    param_3[5] = local_78.tm_mday;
    param_3[6] = local_78.tm_mon;
    param_3[7] = local_78.tm_year;
    param_3[8] = local_78.tm_wday;
    param_3[9] = local_78.tm_yday;
  }
  return;
}

