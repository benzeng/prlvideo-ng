
void FUN_100d37b60(QString *param_1)

{
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  if (param_1->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_11 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100d37bbf;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_100d37bbf:
  if (param_1[1].field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_1 + 1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_11 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100d37c14;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100d37c14:
  if (param_1[2].field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_1 + 2,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_11 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100d37c69;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_100d37c69:
  if (param_1[3].field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_1 + 3,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_11 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100d37cbe;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_100d37cbe:
  if (param_1[4].field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_1 + 4,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_11 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100d37d13;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_100d37d13:
  if (param_1[5].field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_1 + 5,&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_20.field0_0x0 != 0) goto LAB_100d37d68;
        local_11 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
LAB_100d37d68:
  *(undefined2 *)&param_1[6].field0_0x0 = 0;
  *(undefined4 *)((long)&param_1[8].field0_0x0 + 4) = 0;
  *(undefined8 *)((long)&param_1[7].field0_0x0 + 4) = 0;
  *(undefined8 *)((long)&param_1[6].field0_0x0 + 4) = 0;
  return;
}

