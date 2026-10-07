
QString * FUN_1006e3a60(QString *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  int *piVar3;
  QString local_40;
  char local_38;
  undefined7 uStack_37;
  undefined1 local_29;
  
  FUN_1006d8290(&local_38);
  pQVar2 = (QArrayData *)CONCAT71(uStack_37,local_38);
  iVar1 = *(int *)(pQVar2 + 4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e3aaa;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1006e3aaa:
  if (iVar1 == 0) {
    FUN_1006e46f0(param_1);
    return param_1;
  }
  FUN_1006d8290(&local_40);
  param_1->field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_29 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper(&local_38,0xae8b3b);
  QString::append(param_1);
  piVar3 = (int *)CONCAT71(uStack_37,local_38);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e3b27;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_37,local_38),2,8);
  }
LAB_1006e3b27:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_38 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_38) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

