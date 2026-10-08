
void FUN_100421800(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x68) == 0) || (*(int *)(*(long *)(param_1 + 0x68) + 4) == 0)) ||
     (*(long *)(param_1 + 0x70) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Hard Disk instance is null.");
    return;
  }
  CVmDevice::getSystemName();
  if (*(int *)(local_30 + 4) == 0) {
    CPrlFileDevSelectorWidget::clearUp();
  }
  else {
    uVar5 = CVmHardDisk::getSize();
    QDoubleSpinBox::setValue((double)(uVar5 >> 10));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
    uVar5 = CVmHardDisk::getSize();
    CMemorySlider::setMemoryValue((int)uVar1,SUB81(uVar5 >> 10,0));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x68);
    CVmHardDisk::isSplitted();
    QAbstractButton::setChecked(SUB81(uVar1,0));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x70);
    CVmHardDisk::getDiskType();
    QAbstractButton::setChecked(SUB81(uVar1,0));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40);
    iVar4 = QComboBox::currentIndex();
    local_38 = local_30;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
    CVmDevice::getUserFriendlyName();
    CPrlFileDevSelectorWidget::setCurrentItem
              (uVar1,(iVar4 == 2) * '\x04' + '\x01',&local_38,&local_40,1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004219bd;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1004219bd:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100421a20;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100421a20:
  CPrlFileDevSelectorWidget::getDefaultPath();
  iVar4 = *(int *)(local_48 + 4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100421a65;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100421a65:
  if (iVar4 != 0) goto LAB_100421b2f;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  local_58 = (QArrayData *)QString::fromAscii_helper(".pvs",4);
  cVar2 = QString::endsWith(&local_50,&local_58,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100421ae0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100421ae0:
  if (cVar2 != '\0') {
    FUN_100109830(&local_50);
  }
  CPrlFileDevSelectorWidget::setDefaultPath(*(QString **)(*(long *)(param_1 + 0x60) + 0x40));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100421b2f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100421b2f:
  uVar3 = CVmHardDisk::isEncrypted();
  FUN_1004230c0(param_1,uVar3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

