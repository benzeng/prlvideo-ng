
void FUN_1007c9b10(long param_1,byte param_2)

{
  byte bVar1;
  
  if ((((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
      (*(long *)(param_1 + 0x18) != 0)) &&
     (*(byte *)(param_1 + 0x28) = param_2, *(char *)(*(long *)(param_1 + 0x18) + 0x139) != '\0')) {
    FUN_10015a330();
    CDispCommonPreferences::getWorkspacePreferences();
    bVar1 = CDispWorkspacePreferences::isEnableSendStatisticReport();
    if ((bVar1 ^ param_2) == 1) {
      CCepStatisticsProvider::setSendStatistics(SUB81(*(undefined8 *)(param_1 + 0x20),0));
      return;
    }
  }
  return;
}

