
undefined1 FUN_1003ebf40(long param_1)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  undefined8 local_78;
  QVariant local_70;
  QString local_60;
  QString local_58;
  QVariant local_50;
  QString local_40;
  int local_34;
  QArrayData *local_30;
  QArrayData *local_28;
  
  if (DAT_102273f28 == 0) {
    DAT_102273f28 = FUN_1003fa4f0("PRL_MASS_STORAGE_INTERFACE_TYPE",0xffffffffffffffff,1);
  }
  uVar2 = DAT_102273f28;
  uVar5 = QVariant::userType();
  if (uVar2 == uVar5) {
    piVar7 = (int *)QVariant::constData();
    iVar10 = *piVar7;
  }
  else {
    cVar3 = QVariant::convert((int)param_1 + 0x38,(void *)(ulong)uVar2);
    iVar10 = 0;
    if (cVar3 != '\0') {
      iVar10 = local_34;
    }
  }
  MappingHelpers::getParentObjectPath(&local_40);
  uVar8 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_58.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    UNLOCK();
    local_34 = CONCAT31(local_34._1_3_,*(int *)local_40.field0_0x0 != 0);
  }
  QString::fromUtf8_helper((char *)&local_30,0x1df1f84);
  QString::append(&local_58);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_30 != 0);
      if (*(int *)local_30 != 0) goto LAB_1003ec033;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003ec033:
  FUN_1003e1800(&local_50,uVar8,&local_58,0);
  iVar6 = QVariant::toUInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_58.field0_0x0 != 0);
      if (*(int *)local_58.field0_0x0 != 0) goto LAB_1003ec08b;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1003ec08b:
  if ((iVar10 == 2) && (iVar6 == 1)) goto LAB_1003ec17e;
  plVar9 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  pcVar1 = *(code **)(*plVar9 + 0x70);
  local_60.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    UNLOCK();
    local_34 = CONCAT31(local_34._1_3_,*(int *)local_40.field0_0x0 != 0);
  }
  QString::fromUtf8_helper((char *)&local_28,0x1df30be);
  QString::append(&local_60);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_28 != 0);
      if (*(int *)local_28 != 0) goto LAB_1003ec118;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1003ec118:
  local_78 = 1;
  QVariant::QVariant(&local_70,4,&local_78,0);
  (*pcVar1)(plVar9,param_1 + 0x28,&local_60,&local_70);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_60.field0_0x0 != 0);
      if (*(int *)local_60.field0_0x0 != 0) goto LAB_1003ec17e;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003ec17e:
  uVar4 = FUN_1003ec390(param_1);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      local_34 = CONCAT31(local_34._1_3_,*(int *)local_40.field0_0x0 != 0);
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar4;
      }
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar4;
}

