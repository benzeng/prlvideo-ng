
void FUN_100298b50(long *param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  
  if ((-1 < param_2) && ((char)param_1[5] != '\0')) {
    lVar2 = 0;
    if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar2 = param_1[4];
    }
    FUN_10018c2b0(lVar2);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    bVar1 = (bool)CVmRunTimeOptions::getVmFullScreen();
    CVmFullScreen::setUseAllDisplays(bVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100298bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

