
void FUN_1009b0df0(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  QString *this;
  QString QVar1;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  if (param_2 == 1) {
    this = (QString *)*param_4;
    if (param_3 == 2) {
      *(undefined1 *)&this->field0_0x0 = *(undefined1 *)(param_1 + 0x20);
    }
    else {
      if (param_3 == 1) {
        local_28.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x18);
        if (1 < *(int *)local_28.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
          local_11 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
        }
        QString::operator=(this,&local_28);
        if (*(int *)local_28.field0_0x0 == -1) {
          return;
        }
        QVar1.field0_0x0 = local_28.field0_0x0;
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_28.field0_0x0 != 0) {
            return;
          }
          local_11 = 0;
        }
      }
      else {
        if (param_3 != 0) {
          return;
        }
        local_20.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x10);
        if (1 < *(int *)local_20.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + 1;
          local_11 = *(int *)local_20.field0_0x0 != 0;
          UNLOCK();
        }
        QString::operator=(this,&local_20);
        if (*(int *)local_20.field0_0x0 == -1) {
          return;
        }
        QVar1.field0_0x0 = local_20.field0_0x0;
        if (*(int *)local_20.field0_0x0 != 0) {
          LOCK();
          *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_20.field0_0x0 != 0) {
            return;
          }
          local_11 = 0;
        }
      }
      QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
    }
  }
  return;
}

