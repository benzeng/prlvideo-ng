
void FUN_1007c9b80(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x28);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10015a330(uVar3);
  CDispCommonPreferences::getWorkspacePreferences();
  cVar2 = CDispWorkspacePreferences::isEnableSendStatisticReport();
  if (cVar1 == cVar2) {
    return;
  }
  CCepStatisticsProvider::setSendStatistics(SUB81(*(undefined8 *)(param_1 + 0x20),0));
  return;
}

