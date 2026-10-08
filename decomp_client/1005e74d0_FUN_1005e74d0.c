
void FUN_1005e74d0(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  QString *this;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_2 != 1) {
    return;
  }
  this = (QString *)*param_4;
  if (param_3 == 2) {
    FUN_1005e60e0(&local_38,param_1);
    QString::operator=(this,&local_38);
    if (*(int *)local_38.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  else if (param_3 == 1) {
    local_30.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x58);
    if (1 < *(int *)local_30.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
    }
    QString::operator=(this,&local_30);
    if (*(int *)local_30.field0_0x0 == -1) {
      return;
    }
    local_38.field0_0x0 = local_30.field0_0x0;
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  else {
    if (param_3 != 0) {
      return;
    }
    local_28.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x18);
    if (1 < *(int *)local_28.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
    }
    QString::operator=(this,&local_28);
    if (*(int *)local_28.field0_0x0 == -1) {
      return;
    }
    local_38.field0_0x0 = local_28.field0_0x0;
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  return;
}

