
void FUN_1003511a0(long param_1,char param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x2c) == 1) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 0;
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x10));
    CVmConfiguration::getVmSettings();
    CVmSettings::getTravelOptions();
    cVar1 = CVmTravelOptions::isEnabled();
    if (param_2 == '\0') {
      if (cVar1 != '\0') {
        FUN_100350950(param_1,0);
        return;
      }
    }
    else if (cVar1 == '\0') {
      FUN_100350b10(param_1,0);
      return;
    }
  }
  return;
}

