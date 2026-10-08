
void FUN_1004266b0(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  if ((((-1 < param_2) && (*(long *)(param_1 + 0x68) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) && (*(long *)(param_1 + 0x70) != 0)) {
    FUN_100421800(param_1);
    CVmDevice::getSystemName();
    QString::operator=((QString *)(param_1 + 0xb0),&local_28);
    if (*(int *)local_28.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_1004267ff;
  }
  local_30 = *(QArrayData **)(param_1 + 0xb0);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40);
  if (*(int *)(local_30 + 4) == 0) {
    CPrlFileDevSelectorWidget::clearUp();
    return;
  }
  iVar2 = *(int *)local_30;
  local_38 = local_30;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
    local_38 = *(QArrayData **)(param_1 + 0xb0);
    iVar2 = *(int *)local_38;
  }
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_19 = *(int *)local_38 != 0;
    UNLOCK();
  }
  CPrlFileDevSelectorWidget::setCurrentItem(uVar1,1,&local_30,&local_38,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004267de;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004267de:
  if (*(int *)local_30 == -1) {
    return;
  }
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_30;
  if (*(int *)local_30 != 0) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + -1;
    UNLOCK();
    if (*(int *)local_30 != 0) {
      return;
    }
    local_19 = 0;
  }
LAB_1004267ff:
  QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  return;
}

