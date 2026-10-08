
long * FUN_1009cb420(QString *param_1,undefined1 param_2)

{
  code *pcVar1;
  long *plVar2;
  QFileInfo local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  plVar2 = (long *)FUN_1009cb200(param_2);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  CProblemReport::setReportType(plVar2,0xe);
  pcVar1 = *(code **)(*plVar2 + 0x68);
  QFileInfo::QFileInfo(local_40,param_1);
  QFileInfo::fileName();
  (*pcVar1)(plVar2,param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009cb4af;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009cb4af:
  QFileInfo::~QFileInfo(local_40);
  return plVar2;
}

