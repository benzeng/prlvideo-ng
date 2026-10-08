
void FUN_1005db210(long param_1)

{
  QString *this;
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QArrayData *local_68;
  QTypedArrayData<unsigned_short> *local_60;
  QArrayData *local_58;
  QTypedArrayData<unsigned_short> *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  cVar2 = QAbstractButton::isChecked();
  this = (QString *)(param_1 + 0x28);
  if (cVar2 == '\0') {
    pQVar4 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    if (*(int *)(pQVar4 + 4) == 0) {
      local_60 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x20);
      iVar3 = *(int *)local_60;
      local_68 = (QArrayData *)local_60;
      if (1 < iVar3 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        local_68 = *(QArrayData **)(param_1 + 0x20);
        iVar3 = *(int *)local_68;
      }
      if (1 < iVar3 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
      }
      CPrlFileDevSelectorWidget::setCurrentItem(uVar1,2,&local_60,&local_68,0);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1005db4e1;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1005db4e1:
      if (*(int *)local_60 == -1) goto LAB_1005db511;
      pQVar4 = local_60;
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        iVar3 = *(int *)local_60;
        UNLOCK();
        goto joined_r0x0001005db4fc;
      }
    }
    else {
      iVar3 = *(int *)pQVar4;
      local_58 = (QArrayData *)pQVar4;
      if (1 < iVar3 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_21 = *(int *)pQVar4 != 0;
        UNLOCK();
        local_58 = (QArrayData *)this->field0_0x0;
        iVar3 = *(int *)local_58;
      }
      if (1 < iVar3 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
      }
      local_50 = pQVar4;
      CPrlFileDevSelectorWidget::setCurrentItem(uVar1,2,&local_50,&local_58,0);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_21 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1005db437;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1005db437:
      if (*(int *)local_50 == -1) goto LAB_1005db511;
      pQVar4 = local_50;
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        iVar3 = *(int *)local_50;
        UNLOCK();
joined_r0x0001005db4fc:
        local_21 = iVar3 != 0;
        if ((bool)local_21) goto LAB_1005db511;
      }
    }
    QArrayData::deallocate((QArrayData *)pQVar4,2,8);
LAB_1005db511:
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),0));
    return;
  }
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  QString::operator=(this,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005db288;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1005db288:
  FUN_100d84b80(&local_38);
  iVar3 = QString::indexOf(this,&local_38,0,1);
  if (iVar3 != -1) goto LAB_1005db35f;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  local_40 = local_38;
  iVar3 = *(int *)local_38;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
    iVar3 = *(int *)local_38;
  }
  local_48 = local_38;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  CPrlFileDevSelectorWidget::setCurrentItem(uVar1,2,&local_40,&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005db32f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005db32f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005db35f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005db35f:
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),0));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

