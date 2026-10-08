
void FUN_100a5ea00(long param_1)

{
  char cVar1;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getKeyboardLayoutSync();
  cVar1 = CVmKeyboardLayoutSync::isEnabled();
  if ((((*(char *)(param_1 + 0x30) != cVar1) && (*(char *)(param_1 + 0x30) = cVar1, cVar1 != '\0'))
      && (*(char *)(param_1 + 0x32) != '\0')) &&
     ((*(char *)(param_1 + 0x34) != '\0' && (*(char *)(param_1 + 0x33) != '\0')))) {
    FUN_100a5e890(param_1);
    return;
  }
  return;
}

