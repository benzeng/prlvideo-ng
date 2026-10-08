
void FUN_1003a6700(QObject *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  QVariant local_90;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  byte local_49;
  void *local_48;
  byte *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if ((int)param_2 < 0) goto LAB_1003a68b8;
  uVar2 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  QObject::sender();
  QObject::property((char *)&local_90);
  QVariant::toString();
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    UNLOCK();
    local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_80 != 0);
  }
  QString::fromUtf8_helper((char *)&local_58,0x1df16d5);
  QString::append(&local_78);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_58 != 0);
      if (*(int *)local_58 != 0) goto LAB_1003a67d3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003a67d3:
  FUN_1003e1800(&local_70,uVar2,&local_78,0);
  QVariant::toString();
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_78.field0_0x0 != 0);
      if (*(int *)local_78.field0_0x0 != 0) goto LAB_1003a682b;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1003a682b:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_80 != 0);
      if (*(int *)local_80 != 0) goto LAB_1003a685b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003a685b:
  QVariant::~QVariant(&local_90);
  lVar3 = FUN_1003a5510(param_1);
  if (lVar3 != 0) {
    uVar2 = FUN_1003a5510(param_1);
    FUN_1001b67d0(uVar2,&local_60);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_60 != 0);
      if (*(int *)local_60 != 0) goto LAB_1003a68b8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003a68b8:
  local_49 = (byte)(param_2 >> 0x1f) & 1 ^ 1;
  local_48 = (void *)0x0;
  local_40 = &local_49;
  QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f1cb0,0,&local_48);
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

