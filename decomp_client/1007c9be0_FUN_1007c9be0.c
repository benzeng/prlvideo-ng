
void FUN_1007c9be0(QObject *param_1)

{
  QObject QVar1;
  QObject QVar2;
  CCepStatisticsCollector *pCVar3;
  CCepStatisticsSender *pCVar4;
  CCepStatisticsProvider *this;
  undefined8 uVar5;
  QObject *pQVar6;
  
  pQVar6 = (QObject *)0x0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (pQVar6 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
    pQVar6 = *(QObject **)(param_1 + 0x18);
  }
  QObject::disconnect(pQVar6,"2commonPrefsChanged(CDispCommonPreferences)",param_1,
                      "1onServerCommonPrefsChanged()");
  if (DAT_102310a08 == (CCepStatisticsCollector *)0x0) {
    pCVar3 = operator_new(0x220);
    FUN_1007cc3f0(pCVar3);
    DAT_102273890 = 1;
    DAT_102310a08 = pCVar3;
  }
  pCVar3 = DAT_102310a08;
  pCVar4 = operator_new(0x28);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1007d9930(pCVar4,uVar5,param_1);
  this = operator_new(0x50);
  CCepStatisticsProvider::CCepStatisticsProvider(this,pCVar4,pCVar3,param_1);
  *(CCepStatisticsProvider **)(param_1 + 0x20) = this;
  QVar1 = param_1[0x28];
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10015a330(uVar5);
  CDispCommonPreferences::getWorkspacePreferences();
  QVar2 = (QObject)CDispWorkspacePreferences::isEnableSendStatisticReport();
  if (QVar1 == QVar2) {
    return;
  }
  CCepStatisticsProvider::setSendStatistics(SUB81(*(undefined8 *)(param_1 + 0x20),0));
  return;
}

