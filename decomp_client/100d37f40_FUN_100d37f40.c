
void FUN_100d37f40(QString *param_1,undefined8 *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  undefined1 auVar2 [16];
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar2;
  *(undefined1 (*) [16])(param_1 + 2) = auVar2;
  *(undefined1 (*) [16])(param_1 + 4) = auVar2;
  param_1[8].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  param_1[7].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d37ff2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d37ff2:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[1];
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1 + 1,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d38048;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100d38048:
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[2];
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1 + 2,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3809e;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d3809e:
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[3];
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_31 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1 + 3,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d380f3;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d380f3:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[4];
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1 + 4,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d38148;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100d38148:
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[5];
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(param_1 + 5,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) goto LAB_100d3819d;
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100d3819d:
  *(undefined1 *)&param_1[6].field0_0x0 = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)&param_1[6].field0_0x0 + 1) = *(undefined1 *)((long)param_2 + 0x31);
  *(undefined4 *)((long)&param_1[6].field0_0x0 + 4) = *(undefined4 *)((long)param_2 + 0x34);
  pQVar1 = (QTypedArrayData<unsigned_short> *)param_2[8];
  param_1[7].field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[7];
  param_1[8].field0_0x0 = pQVar1;
  return;
}

