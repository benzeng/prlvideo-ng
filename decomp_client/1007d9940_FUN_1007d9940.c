
void FUN_1007d9940(long param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x20);
  CDispCommonPreferences::getWorkspacePreferences();
  cVar2 = CDispWorkspacePreferences::isEnableSendStatisticReport();
  if (cVar1 == cVar2) {
    return;
  }
  CDispCommonPreferences::getWorkspacePreferences();
  uVar3 = CDispWorkspacePreferences::isEnableSendStatisticReport();
  *(undefined1 *)(param_1 + 0x20) = uVar3;
  CCepStatisticsSender::sendStatisticsChanged(SUB81(param_1,0));
  return;
}

