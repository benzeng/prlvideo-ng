
void FUN_10019d220(QSize *param_1)

{
  QSize QVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  QArrayData *local_38;
  ulong local_30;
  undefined1 local_21;
  
  QVar1 = param_1[5];
  uVar5 = (*(int *)((long)QVar1 + 0x1c) + 1) - *(int *)((long)QVar1 + 0x14);
  uVar3 = (*(int *)((long)QVar1 + 0x20) + 1) - *(int *)((long)QVar1 + 0x18);
  uVar2 = (**(code **)((long)*param_1 + 0x78))();
  local_30 = (ulong)uVar5;
  if ((int)uVar5 < (int)uVar2) {
    local_30 = uVar2 & 0xffffffff;
  }
  uVar4 = (ulong)uVar3;
  if ((int)uVar3 < (int)(uVar2 >> 0x20)) {
    uVar4 = uVar2 >> 0x20;
  }
  local_30 = local_30 | uVar4 << 0x20;
  QWidget::setFixedSize(param_1);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1dd569e);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_10019d2d7;
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10019d2d7:
  param_1[0x1d].field0_0x0 = 0xffffffff;
  return;
}

