
QString * FUN_100d1e430(QString *param_1)

{
  undefined2 uVar1;
  QArrayData *pQVar2;
  uint uVar3;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100d1e060(&local_30);
  if (*(uint *)(local_30 + 4) == 0) goto LAB_100d1e5ab;
  uVar1 = QDir::separator();
  local_40 = local_30;
  if (1 < *(uint *)local_30 + 1) {
    LOCK();
    *(uint *)local_30 = *(uint *)local_30 + 1;
    local_21 = *(uint *)local_30 != 0;
    UNLOCK();
  }
  uVar3 = *(uint *)(local_30 + 4);
  if ((1 < *(uint *)local_30) || ((*(uint *)(local_30 + 8) & 0x7fffffff) < uVar3 + 2)) {
    QString::reallocData((uint)&local_40,SUB41(uVar3 + 2,0));
    uVar3 = *(uint *)(local_40 + 4);
  }
  *(uint *)(local_40 + 4) = uVar3 + 1;
  *(undefined2 *)(local_40 + (long)(int)uVar3 * 2 + *(long *)(local_40 + 0x10)) = uVar1;
  *(undefined2 *)(local_40 + (long)(int)*(uint *)(local_40 + 4) * 2 + *(long *)(local_40 + 0x10)) =
       0;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("VirtualBox.xml",0xe);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(uint *)local_40 + 1) {
    LOCK();
    *(uint *)local_40 = *(uint *)local_40 + 1;
    local_21 = *(uint *)local_40 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d1e54b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d1e54b:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d1e57b;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d1e57b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d1e5ab;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d1e5ab:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

