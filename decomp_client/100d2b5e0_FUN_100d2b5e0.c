
void FUN_100d2b5e0(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  QString *this;
  QArrayData *pQVar1;
  QString local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (DAT_10230ffd0 < 3) goto LAB_100d2b753;
  local_48 = (QArrayData *)*param_2;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  pQVar1 = local_40 + *(long *)(local_40 + 0x10);
  local_58 = (QArrayData *)*param_4;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_31 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","VBoxVmModel",3,"VBox: Add image %s,%d,%s",pQVar1,param_3,
                local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2b6c3;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100d2b6c3:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2b6f3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d2b6f3:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2b723;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d2b723:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d2b753;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d2b753:
  this = (QString *)FUN_100d2bcb0(param_1 + 0x10,param_2);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_4;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  local_60 = param_3;
  QString::operator=(this,&local_68);
  *(undefined4 *)&this[1].field0_0x0 = local_60;
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
  return;
}

