
void FUN_1006218d0(CProblemReport *param_1)

{
  char cVar1;
  QArrayData *pQVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bc9220;
  *(undefined ***)(param_1 + 0x10) = &PTR_getXml_100bc94d0;
  if ((param_1[0x259] != (CProblemReport)0x0) &&
     (cVar1 = FUN_1006d6ea0(param_1 + 0x268,3), cVar1 == '\0' && 1 < DAT_1011b55f8)) {
    QString::toUtf8();
    FUN_1008e3970("","prl_problem_report_utils",2,"temp report directory %s was not deleted",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_10062198d;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_10062198d:
  if ((param_1[0x25a] != (CProblemReport)0x0) &&
     (cVar1 = QFile::remove((QString *)(param_1 + 0x260)), cVar1 == '\0' && 1 < DAT_1011b55f8)) {
    QString::toUtf8();
    FUN_1008e3970("","prl_problem_report_utils",2,"archive path %s was not deleted",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_100621a20;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_100621a20:
  pQVar2 = *(QArrayData **)(param_1 + 0x268);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100621a56;
      pQVar2 = *(QArrayData **)(param_1 + 0x268);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100621a56:
  pQVar2 = *(QArrayData **)(param_1 + 0x260);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100621a8c;
      pQVar2 = *(QArrayData **)(param_1 + 0x260);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100621a8c:
  CProblemReport::~CProblemReport(param_1);
  return;
}

