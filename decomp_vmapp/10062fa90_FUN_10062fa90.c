
void FUN_10062fa90(QString param_1,QString *param_2)

{
  undefined *puVar1;
  char cVar2;
  QArrayData *pQVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_28;
  undefined1 local_19;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("/CepData.xml",0xc);
                    /* WARNING: Load size is inaccurate */
  local_28.field0_0x0 = param_1.field0_0x0[0x268];
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_19 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10062fb0f;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10062fb0f:
  puVar1 = PTR_shared_null_100ba20d0;
  CProblemReport::setCepCustomData(param_1);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_19 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10062fb56;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_10062fb56:
  cVar2 = QFile::exists(param_2);
  if (cVar2 == '\0') goto LAB_10062fcb0;
  cVar2 = QFile::exists(&local_28);
  if ((cVar2 != '\0') && (cVar2 = QFile::remove(&local_28), cVar2 == '\0')) {
    QString::toUtf8();
    FUN_1008e3970("","prl_problem_report_utils",0,"cannot remove %s!",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10062fcb0;
      }
      QArrayData::deallocate(local_40,1,8);
    }
    goto LAB_10062fcb0;
  }
  cVar2 = QFile::copy(param_2,&local_28);
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","prl_problem_report_utils",0,"cannot copy %s!",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10062fbf6;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_10062fbf6:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("CepData.xml",0xb);
  CProblemReport::setCepCustomData(param_1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_19 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10062fcb0;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10062fcb0:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

