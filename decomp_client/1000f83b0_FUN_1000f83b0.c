
void FUN_1000f83b0(undefined8 param_1,QString *param_2,QString *param_3,QString *param_4,
                  QString *param_5,QString *param_6,QString *param_7)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  QString *this;
  long lVar5;
  undefined1 auVar6 [16];
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  undefined1 local_e8 [48];
  undefined8 local_b8;
  QString local_58;
  long *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = operator_new(0x40);
  puVar2 = PTR_shared_null_1021e1288;
  auVar6._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar6._0_8_ = PTR_shared_null_1021e1288;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])this = auVar6;
  this[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  *(undefined1 (*) [16])(this + 4) = auVar6;
  this[6].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  local_50 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (local_50 == (long *)0x0) {
    FUN_1000f9380(this);
    operator_delete(this);
    local_50 = (long *)0x0;
    this = (QString *)0x0;
  }
  else {
    *(undefined4 *)(local_50 + 1) = 1;
    local_50[2] = (long)this;
    *local_50 = (long)&PTR_FUN_10226d520;
  }
  plVar3 = local_50;
  QString::operator=(this,param_2);
  lVar5 = 0;
  if (plVar3 != (long *)0x0) {
    lVar5 = plVar3[2];
  }
  QString::operator=((QString *)(lVar5 + 8),param_3);
  lVar5 = 0;
  if (plVar3 != (long *)0x0) {
    lVar5 = plVar3[2];
  }
  QString::operator=((QString *)(lVar5 + 0x10),param_4);
  *(undefined8 *)(plVar3[2] + 0x18) = 0;
  lVar5 = 0;
  if (plVar3 != (long *)0x0) {
    lVar5 = plVar3[2];
  }
  QString::operator=((QString *)(lVar5 + 0x20),param_5);
  lVar5 = 0;
  if (plVar3 != (long *)0x0) {
    lVar5 = plVar3[2];
  }
  QString::operator=((QString *)(lVar5 + 0x28),param_6);
  lVar5 = 0;
  if (plVar3 != (long *)0x0) {
    lVar5 = plVar3[2];
  }
  QString::operator=((QString *)(lVar5 + 0x30),param_7);
  local_58.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_31 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1db6890);
  QString::append(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f8561;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000f8561:
  QString::toUtf8();
  iVar4 = _stat_INODE64(local_f0 + *(long *)(local_f0 + 0x10),local_e8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f85c0;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
LAB_1000f85c0:
  if (iVar4 == 0) {
    *(undefined8 *)(plVar3[2] + 0x18) = local_b8;
  }
  *(undefined8 *)(plVar3[2] + 0x38) = 0;
  local_100.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_100.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
    local_31 = *(int *)local_100.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1db69ba);
  QString::append(&local_100);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f8650;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000f8650:
  QString::toUtf8();
  iVar4 = _stat_INODE64(local_f8 + *(long *)(local_f8 + 0x10),local_e8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f86b2;
    }
    QArrayData::deallocate(local_f8,1,8);
  }
LAB_1000f86b2:
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f86e8;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_1000f86e8:
  if (iVar4 == 0) {
    *(undefined8 *)(plVar3[2] + 0x38) = local_b8;
  }
  FUN_1000f9130(param_1,&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000f873b;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000f873b:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return;
}

