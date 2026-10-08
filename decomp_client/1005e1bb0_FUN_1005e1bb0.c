
void FUN_1005e1bb0(undefined8 *param_1,QSize *param_2)

{
  int iVar1;
  QGridLayout *this;
  undefined8 *puVar2;
  CProgressIndicator *pCVar3;
  undefined *puVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  bool local_38;
  undefined7 uStack_37;
  
  QObject::objectName();
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      _local_38 = CONCAT71(uStack_37,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_1005e1c03;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005e1c03:
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e05336);
    QObject::setObjectName((QString *)param_2);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        _local_38 = CONCAT71(uStack_37,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1005e1c5a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1005e1c5a:
  local_38 = true;
  uStack_37 = 0x156000002;
  QWidget::resize(param_2);
  this = operator_new(0x20);
  QGridLayout::QGridLayout(this,(QWidget *)param_2);
  *param_1 = this;
  QString::fromUtf8_helper((char *)&local_50,0x1dd67e5);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005e1ce2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005e1ce2:
  puVar2 = operator_new(0x28);
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar4 = PTR_vtable_1021e17a0 + 0x10;
  *puVar2 = puVar4;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x8700000014;
  *(undefined4 *)((long)puVar2 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar2 + 0x14,1);
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0x24) = 0xffffffff;
  param_1[1] = puVar2;
  QGridLayout::addItem(*param_1,puVar2,0,1,1,1,0);
  puVar2 = operator_new(0x28);
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = puVar4;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x14000000e0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar2 + 0x14,1);
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0x24) = 0xffffffff;
  param_1[2] = puVar2;
  QGridLayout::addItem(*param_1,puVar2,1,0,1,1,0);
  pCVar3 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar3,param_2,1);
  param_1[3] = pCVar3;
  QString::fromUtf8_helper((char *)&local_58,0x1df0c9b);
  QObject::setObjectName((QString *)pCVar3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_38 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_38) goto LAB_1005e1e5f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005e1e5f:
  QGridLayout::addWidget(*param_1,param_1[3],1,1,1,1,0);
  puVar2 = operator_new(0x28);
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = puVar4;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x14000000df;
  *(undefined4 *)((long)puVar2 + 0x14) = 0x170000;
  QSizePolicy::setControlType((long)puVar2 + 0x14,1);
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0x24) = 0xffffffff;
  param_1[4] = puVar2;
  QGridLayout::addItem(*param_1,puVar2,1,2,1,1,0);
  puVar2 = operator_new(0x28);
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = puVar4;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x8600000014;
  *(undefined4 *)((long)puVar2 + 0x14) = 0x710000;
  QSizePolicy::setControlType((long)puVar2 + 0x14,1);
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0x24) = 0xffffffff;
  param_1[5] = puVar2;
  QGridLayout::addItem(*param_1,puVar2,2,1,1,1,0);
  FUN_1005e20d0(param_1,param_2);
  QMetaObject::connectSlotsByName((QObject *)param_2);
  return;
}

