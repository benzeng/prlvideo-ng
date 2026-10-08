
QVariant * FUN_10038a070(QVariant *param_1,long param_2,int *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  QVariant local_a8;
  QVariant local_98;
  QVariant local_88;
  QVariant local_78;
  QVariant local_68;
  undefined1 local_58 [8];
  QString QStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  iVar1 = *param_3;
  if ((long)iVar1 < 0) {
    return param_1;
  }
  if (param_3[1] < 0) {
    return param_1;
  }
  if (*(long *)(param_3 + 4) == 0) {
    return param_1;
  }
  lVar2 = **(long **)(param_2 + 0x10);
  if (iVar1 < *(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 8)) {
    puVar3 = *(undefined8 **)(lVar2 + 0x10 + ((long)*(int *)(lVar2 + 8) + (long)iVar1) * 8);
    local_58 = (undefined1  [8])*puVar3;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QStack_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3[1];
    if (1 < *(int *)QStack_50.field0_0x0 + 1U) {
      LOCK();
      *(int *)QStack_50.field0_0x0 = *(int *)QStack_50.field0_0x0 + 1;
      local_31 = *(int *)QStack_50.field0_0x0 != 0;
      UNLOCK();
    }
    local_48._0_4_ = *(undefined4 *)(puVar3 + 2);
    QIcon::QIcon((QIcon *)&uStack_40,(QIcon *)(puVar3 + 3));
    local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(puVar3 + 2));
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    register0x00001208 = (int)PTR_shared_null_1021e1288;
    local_58 = (undefined1  [8])PTR_shared_null_1021e1288;
    register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    QIcon::QIcon((QIcon *)&uStack_40);
  }
  if (param_4 < 1) {
    if (param_4 == 0) {
      QVariant::QVariant(&local_68,(QString *)(local_58 + 8));
      QVariant::operator=(param_1,&local_68);
      QVariant::~QVariant(&local_68);
    }
  }
  else if (param_4 < 0x101) {
    if (param_4 == 1) {
      QIcon::operator_cast_to_QVariant((QIcon *)&local_78);
      QVariant::operator=(param_1,&local_78);
      QVariant::~QVariant(&local_78);
    }
    else if (param_4 == 0x100) {
      QVariant::QVariant(&local_88,(QString *)local_58);
      QVariant::operator=(param_1,&local_88);
      QVariant::~QVariant(&local_88);
    }
  }
  else if (param_4 == 0x101) {
    QVariant::QVariant(&local_98,(int)local_48);
    QVariant::operator=(param_1,&local_98);
    QVariant::~QVariant(&local_98);
  }
  else if (param_4 == 0x102) {
    QVariant::QVariant(&local_a8,*(int *)(*(long *)(param_2 + 0x10) + 8) == *param_3);
    QVariant::operator=(param_1,&local_a8);
    QVariant::~QVariant(&local_a8);
  }
  QIcon::~QIcon((QIcon *)&uStack_40);
  if (*(int *)QStack_50.field0_0x0 != -1) {
    if (*(int *)QStack_50.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_50.field0_0x0 = *(int *)QStack_50.field0_0x0 + -1;
      local_31 = *(int *)QStack_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10038a292;
    }
    QArrayData::deallocate((QArrayData *)QStack_50.field0_0x0,2,8);
  }
LAB_10038a292:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58,2,8);
  }
  return param_1;
}

