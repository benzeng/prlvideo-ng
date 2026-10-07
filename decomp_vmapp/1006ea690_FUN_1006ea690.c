
QString * FUN_1006ea690(QString *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  int *piVar3;
  QString local_38;
  char local_30;
  undefined7 uStack_2f;
  undefined1 local_21;
  
  FUN_1006d8290(&local_30);
  pQVar2 = (QArrayData *)CONCAT71(uStack_2f,local_30);
  iVar1 = *(int *)(pQVar2 + 4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006ea6d8;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1006ea6d8:
  if (iVar1 == 0) {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    return param_1;
  }
  FUN_1006ddf40(&local_38);
  param_1->field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper(&local_30,0xae98b1);
  QString::append(param_1);
  piVar3 = (int *)CONCAT71(uStack_2f,local_30);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006ea752;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_2f,local_30),2,8);
  }
LAB_1006ea752:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_30 = '\0';
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

