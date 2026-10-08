
QString * FUN_100d867e0(QString *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  int *piVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QArrayData *local_38;
  char local_30;
  undefined7 uStack_2f;
  undefined1 local_21;
  
  FUN_100d806d0(&local_30);
  pQVar2 = (QArrayData *)CONCAT71(uStack_2f,local_30);
  iVar1 = *(int *)(pQVar2 + 4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d86828;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d86828:
  if (iVar1 == 0) {
    pQVar4 = (QTypedArrayData<unsigned_short> *)
             QString::fromAscii_helper("/Library/Parallels/Downloads",0x1c);
    param_1->field0_0x0 = pQVar4;
    return param_1;
  }
  QDir::homePath();
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper(&local_30,0x1efe3e4);
  QString::append(param_1);
  piVar3 = (int *)CONCAT71(uStack_2f,local_30);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d868a2;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_2f,local_30),2,8);
  }
LAB_100d868a2:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_30 = '\0';
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

