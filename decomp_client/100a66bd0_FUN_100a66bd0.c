
void FUN_100a66bd0(long param_1)

{
  char cVar1;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmCoherence();
  cVar1 = CVmCoherence::isPauseIdleVM();
  *(char *)(param_1 + 0x38) = cVar1;
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x39) == '\0')) &&
     (*(char *)(param_1 + 0x3a) != '\0')) {
    QTimer::start();
    return;
  }
  QTimer::stop();
  return;
}

