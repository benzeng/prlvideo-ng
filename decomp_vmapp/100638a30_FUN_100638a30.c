
bool FUN_100638a30(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QProcess local_38 [23];
  undefined1 local_21;
  
  QProcess::QProcess(local_38,(QObject *)0x0);
  cVar1 = FUN_100770460(param_1,param_2,180000,local_38,0);
  if (cVar1 != '\0') {
    bVar3 = *(int *)(*param_2 + 4) != 0;
    goto LAB_100638ba3;
  }
  iVar2 = QProcess::exitCode();
  if (iVar2 != 0) {
    bVar3 = false;
    goto LAB_100638ba3;
  }
  cVar1 = QProcess::waitForFinished((int)local_38);
  if (cVar1 != '\0') {
    bVar3 = false;
    goto LAB_100638ba3;
  }
  QString::toUtf8();
  FUN_1008e3970("","prl_problem_report_utils",0,
                "Command \'%s\' not finished in time, will be terminated",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100638b09;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100638b09:
  QProcess::terminate();
  cVar1 = QProcess::waitForFinished((int)local_38);
  if (cVar1 != '\0') {
    bVar3 = false;
    goto LAB_100638ba3;
  }
  QString::toUtf8();
  FUN_1008e3970("","prl_problem_report_utils",0,
                "Command \'%s\' not finished in time, will be killed",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100638b8a;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100638b8a:
  QProcess::kill();
  QProcess::waitForFinished((int)local_38);
  bVar3 = false;
LAB_100638ba3:
  QProcess::~QProcess(local_38);
  return bVar3;
}

