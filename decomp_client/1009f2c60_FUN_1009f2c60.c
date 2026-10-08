
void FUN_1009f2c60(long param_1,QString *param_2,QString *param_3)

{
  char cVar1;
  QArrayData *local_58;
  long local_50 [2];
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return;
  }
  cVar1 = operator==(param_2,param_3);
  if (cVar1 != '\0') {
    return;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_38.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x268);
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  local_30.field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009f2d29;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1009f2d29:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009f2d59;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009f2d59:
  QFile::QFile((QFile *)local_50,&local_30);
  cVar1 = QFile::open(local_50,2);
  if (cVar1 != '\0') {
    QString::toUtf8();
    QIODevice::write((char *)local_50,(longlong)(local_58 + *(long *)(local_58 + 0x10)));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1009f2dcc;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_1009f2dcc:
  (**(code **)(local_50[0] + 0x70))(local_50);
  QFile::~QFile((QFile *)local_50);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

