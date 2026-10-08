
undefined1 FUN_1009f9b20(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QFileInfo::fileName();
  iVar1 = *(int *)(local_30 + 4);
  QFileInfo::fileName();
  iVar2 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009f9b84;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009f9b84:
  QFileInfo::fileName();
  cVar3 = QString::startsWith(&local_30,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009f9bd4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009f9bd4:
  if (cVar3 == '\0') {
    FUN_100df99c0("","prl_problem_report_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "fileName.startsWith(m_file.fileName())","CLogTemplate.cpp",0x41,"getSuffix");
  }
  if (iVar1 - iVar2 < 0) {
    uVar4 = 0;
    FUN_100df99c0("","prl_problem_report_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "suffixLen >= 0","CLogTemplate.cpp",0x42,"getSuffix");
  }
  else {
    QString::right((int)&local_48);
    QString::operator=(param_3,&local_48);
    uVar4 = 1;
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009f9cb3;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1009f9cb3:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar4;
}

