
void FUN_100459290(long param_1)

{
  QArrayData *pQVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  uVar5 = FUN_10044e660(param_1);
  uVar3 = FUN_10044e5b0(param_1);
  uVar3 = FUN_1003b1cd0(uVar3);
  cVar2 = FUN_1003bf710(uVar5,uVar3);
  if (cVar2 == '\0') {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x68))(*(long **)(param_1 + 0x50),0);
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  uVar5 = FUN_10044e660(param_1);
  uVar3 = FUN_10044e5b0(param_1);
  uVar3 = FUN_1003b1cd0(uVar3);
  cVar2 = FUN_1003bf710(uVar5,uVar3);
  if (cVar2 == '\0') {
    return;
  }
  lVar6 = FUN_10044e580(param_1);
  if (lVar6 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = FUN_10044e560(param_1);
  pQVar1 = *(QArrayData **)(param_1 + 0x60);
  iVar4 = *(int *)pQVar1;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
    iVar4 = *(int *)pQVar1;
  }
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
  QString::fromUtf8_helper((char *)&local_40,0x1df2611);
  QString::append(&local_58);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004593bb;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004593bb:
  FUN_1003e1800(&local_50,uVar7,&local_58,0);
  lVar6 = QVariant::toLongLong((bool *)&local_50);
  if (lVar6 != 0) {
    uVar7 = FUN_10044e580(param_1);
    uVar3 = FUN_10044e5b0(param_1);
    uVar3 = FUN_1003b1cd0(uVar3);
    FUN_10010a090(uVar7,uVar3);
  }
  QWidget::setEnabled(SUB81(uVar5,0));
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100459475;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100459475:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

