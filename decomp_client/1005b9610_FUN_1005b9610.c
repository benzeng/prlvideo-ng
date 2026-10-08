
QString * FUN_1005b9610(QString *param_1,long param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  char *pcVar3;
  size_t sVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  QString *pQVar6;
  int iVar7;
  undefined1 local_48 [12];
  QArrayData *local_38;
  undefined1 local_29;
  
  QMetaObject::indexOfEnumerator((char *)&PTR_staticMetaObject_10221e2a0);
  local_48 = QMetaObject::enumerator(0x221e2a0);
  iVar1 = *(int *)(param_2 + 0x50);
  pcVar3 = (char *)QMetaEnum::valueToKey((int)local_48);
  iVar7 = -1;
  if (pcVar3 != (char *)0x0) {
    sVar4 = _strlen(pcVar3);
    iVar7 = (int)sVar4;
  }
  pQVar5 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar3,iVar7);
  param_1->field0_0x0 = pQVar5;
  if (iVar1 != 5) {
    return param_1;
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e41970);
  pQVar6 = (QString *)QString::append(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005b96de;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005b96de:
  pQVar2 = *(QArrayData **)(param_2 + 0x98);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  QString::append(pQVar6);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return param_1;
}

