
void FUN_10051f4b0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getTimeSync();
  cVar1 = CVmToolsTimeSync::isEnabled();
  if (cVar1 != '\0') {
    cVar1 = CVmToolsTimeSync::isKeepTimeDiff();
    if (cVar1 != '\0') {
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getClock();
      uVar2 = Clock::getTimeShift();
      param_1[1] = uVar2;
    }
  }
  return;
}

