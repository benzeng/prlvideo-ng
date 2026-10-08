
undefined8 FUN_100051cd0(long *param_1,QString *param_2,QString *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  if (*(int *)(*param_1 + 4) == 0) {
    return 0;
  }
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return 0;
  }
  QFileInfo::QFileInfo(local_30,param_2);
  uVar1 = QDir::separator();
  local_40 = (QArrayData *)*param_1;
  if (1 < *(uint *)local_40 + 1) {
    LOCK();
    *(uint *)local_40 = *(uint *)local_40 + 1;
    local_21 = *(uint *)local_40 != 0;
    UNLOCK();
  }
  uVar2 = *(uint *)(local_40 + 4);
  if ((1 < *(uint *)local_40) || ((*(uint *)(local_40 + 8) & 0x7fffffff) < uVar2 + 2)) {
    QString::reallocData((uint)&local_40,SUB41(uVar2 + 2,0));
    uVar2 = *(uint *)(local_40 + 4);
  }
  *(uint *)(local_40 + 4) = uVar2 + 1;
  *(undefined2 *)(local_40 + (long)(int)uVar2 * 2 + *(long *)(local_40 + 0x10)) = uVar1;
  *(undefined2 *)(local_40 + (long)(int)*(uint *)(local_40 + 4) * 2 + *(long *)(local_40 + 0x10)) =
       0;
  QFileInfo::baseName();
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(uint *)local_40 + 1) {
    LOCK();
    *(uint *)local_40 = *(uint *)local_40 + 1;
    local_21 = *(uint *)local_40 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  QString::operator=(param_3,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100051de9;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100051de9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100051e19;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100051e19:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100051e49;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100051e49:
  QFileInfo::~QFileInfo(local_30);
  return 1;
}

