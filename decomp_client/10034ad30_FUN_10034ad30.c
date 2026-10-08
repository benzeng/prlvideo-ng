
QDateTime * FUN_10034ad30(QDateTime *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  int local_28 [2];
  
  uVar3 = 0;
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
  }
  uVar3 = FUN_100319390(uVar3);
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getWinMaintenance();
  iVar1 = CVmWinMaintenance::getScheduleTime();
  local_28[0] = iVar1;
  local_30 = QDate::currentDate();
  iVar2 = QTime::currentTime();
  if (iVar1 <= iVar2) {
    local_30 = QDate::addDays((longlong)&local_30);
  }
  uVar3 = 0;
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
  }
  uVar3 = FUN_100319390(uVar3);
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getWinMaintenance();
  iVar1 = CVmWinMaintenance::getScheduleDay();
  if (iVar1 == 9) {
    iVar1 = QDate::dayOfWeek();
    if (5 < iVar1) goto LAB_10034ae7f;
    QDate::dayOfWeek();
  }
  else if (iVar1 == 8) {
    iVar1 = QDate::dayOfWeek();
    if (iVar1 < 6) goto LAB_10034ae7f;
    QDate::dayOfWeek();
  }
  else {
    if ((6 < iVar1 - 1U) || (iVar2 = QDate::dayOfWeek(), iVar2 == iVar1)) goto LAB_10034ae7f;
    QDate::dayOfWeek();
  }
  local_30 = QDate::addDays((longlong)&local_30);
LAB_10034ae7f:
  QDateTime::QDateTime(param_1,&local_30,local_28,0);
  return param_1;
}

