
undefined8 FUN_100d3d820(long param_1,undefined8 *param_2)

{
  char cVar1;
  QString *this;
  long lVar2;
  void *pvVar3;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  this = operator_new(0x58);
  FUN_100d38790(this);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_29 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(this,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d3d89e;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d3d89e:
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[1];
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_29 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(this + 1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d3d8f5;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d3d8f5:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[3];
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(this + 3,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d3d94c;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100d3d94c:
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[2];
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_29 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(this + 2,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d3d9a3;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d3d9a3:
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[4];
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_29 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(this + 4,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d3d9fa;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d3d9fa:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[5];
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=(this + 5,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d3da53;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100d3da53:
  *(undefined4 *)((long)&this[6].field0_0x0 + 4) = *(undefined4 *)((long)param_2 + 0x34);
  lVar2 = FUN_100d39010(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x10));
  if (lVar2 == 0) {
    pvVar3 = operator_new(0x58);
    FUN_100d38790(pvVar3);
    FUN_100d38a20(pvVar3,this);
    *(void **)(param_1 + 0x10) = pvVar3;
  }
  else {
    cVar1 = FUN_100d38a20(lVar2,this);
    if (cVar1 == '\0') {
      FUN_100d38800(this);
      operator_delete(this);
      return 5;
    }
  }
  FUN_100d38dc0(this,1);
  return 0;
}

