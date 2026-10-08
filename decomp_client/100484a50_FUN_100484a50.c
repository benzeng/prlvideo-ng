
void FUN_100484a50(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar2 = FUN_10044e580();
  if (lVar2 == 0) {
    pcVar4 = "(!)Error: Server instance is null.";
LAB_100484d0a:
    FUN_100df99c0("","prl_client_app",0,pcVar4);
    FUN_100459290(param_1);
    return;
  }
  lVar2 = FUN_10044e460(param_1);
  if (lVar2 == 0) {
    pcVar4 = "(!)Error: Vm instance is null.";
    goto LAB_100484d0a;
  }
  uVar3 = FUN_10044e560(param_1);
  FUN_100459010(&local_58,param_1);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_21 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1df1af1);
  QString::append(&local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100484b01;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100484b01:
  FUN_1003e1800(&local_48,uVar3,&local_50,0);
  iVar1 = QVariant::toLongLong((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100484b5a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100484b5a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100484b8a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100484b8a:
  uVar3 = FUN_10044e560(param_1);
  FUN_100459010(&local_78,param_1);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_21 = *(int *)local_78 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1df1f84);
  QString::append(&local_70);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100484c0c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100484c0c:
  FUN_1003e1800(&local_68,uVar3,&local_70,0);
  QVariant::toUInt((bool *)&local_68);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100484c65;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100484c65:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100484c95;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100484c95:
  auVar5 = FUN_10044b340(param_1);
  FUN_1003b2630(auVar5._0_8_,iVar1 == 0,auVar5._8_8_,iVar1 == 0);
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x40),0));
  FUN_100459290(param_1);
  return;
}

