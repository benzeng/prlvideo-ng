
undefined8 FUN_10063f1d0(undefined8 param_1)

{
  int iVar1;
  QSettings local_40 [16];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QCoreApplication::organizationName();
  local_30 = (QArrayData *)QString::fromAscii_helper("Parallels Software",0x12);
  iVar1 = QString::compare(&local_28,&local_30,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10063f240;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10063f240:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10063f270;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10063f270:
  if (iVar1 != 0) {
    FUN_1008e3970("","prl_problem_report_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "!qApp->organizationName().compare( PRL_VENDOR )","CProblemReportUtils.cpp",0x2f7,
                  "getGuiCepQSettingsOrganizationName");
  }
  QSettings::QSettings(local_40,(QObject *)0x0);
  QSettings::organizationName();
  QSettings::~QSettings(local_40);
  return param_1;
}

