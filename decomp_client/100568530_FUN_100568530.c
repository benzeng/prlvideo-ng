
QVariant * FUN_100568530(QVariant *param_1,long param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  QString local_50;
  byte local_48;
  QKeySequence local_40 [15];
  undefined1 local_31;
  
  if ((((long)*param_3 < 0) || (param_3[1] < 0)) || (*(long *)(param_3 + 4) == 0)) {
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
    return param_1;
  }
  pbVar1 = *(byte **)(*(long *)(param_2 + 0x10) + 0x10 +
                     ((long)*(int *)(*(long *)(param_2 + 0x10) + 8) + (long)*param_3) * 8);
  local_48 = *pbVar1;
  QKeySequence::QKeySequence(local_40,(QKeySequence *)(pbVar1 + 8));
  local_48 = *pbVar1;
  if (param_4 == 10) {
    if (param_3[1] == 0) {
      QVariant::QVariant(param_1,(uint)local_48 * 2);
      goto LAB_10056863f;
    }
  }
  else if ((param_4 == 0) && (param_3[1] == 1)) {
    FUN_1007170a0(&local_50,local_40,2);
    QVariant::QVariant(param_1,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10056863f;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
    goto LAB_10056863f;
  }
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
LAB_10056863f:
  QKeySequence::~QKeySequence(local_40);
  return param_1;
}

