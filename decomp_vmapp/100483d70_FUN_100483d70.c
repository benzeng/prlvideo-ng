
void FUN_100483d70(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  CDispCommonPreferences::getWorkspacePreferences();
  bVar1 = CDispWorkspacePreferences::isEnableSendStatisticReport();
  *(uint *)(param_2 + 8) = (uint)bVar1;
  return;
}

