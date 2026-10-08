
int FUN_100786710(undefined8 *param_1)

{
  QArrayData *pQVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  QArrayData *local_40;
  undefined1 local_38 [12];
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar1 = (QArrayData *)*param_1;
  if (1 < *(uint *)pQVar1 + 1) {
    LOCK();
    *(uint *)pQVar1 = *(uint *)pQVar1 + 1;
    local_19 = *(uint *)pQVar1 != 0;
    UNLOCK();
  }
  uVar5 = 0;
  if (0 < (int)*(uint *)(pQVar1 + 4)) {
    uVar5 = (uint)*(ushort *)(pQVar1 + *(long *)(pQVar1 + 0x10));
  }
  local_28 = pQVar1;
  uVar2 = QChar::toUpper(uVar5);
  if ((int)*(uint *)(pQVar1 + 4) < 1) {
    QString::expand((int)&local_28);
  }
  else if ((1 < *(uint *)pQVar1) || (*(long *)(pQVar1 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_28,(bool)((char)*(uint *)(pQVar1 + 4) + '\x01'));
  }
  *(undefined2 *)(local_28 + *(long *)(local_28 + 0x10)) = uVar2;
  QMetaObject::indexOfEnumerator((char *)&PTR_staticMetaObject_10222b090);
  local_38 = QMetaObject::enumerator(0x222b090);
  QString::toLatin1();
  iVar3 = QMetaEnum::keyToValue(local_38,(bool *)(local_40 + *(long *)(local_40 + 0x10)));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100786804;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100786804:
  iVar4 = 0;
  if (iVar3 != -1) {
    iVar4 = iVar3;
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return iVar4;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return iVar4;
}

