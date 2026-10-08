
undefined8 FUN_1003ee610(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  QVariant local_50;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar2 = QVariant::toUInt((bool *)(param_1 + 0x38));
  if (iVar2 != 4) {
    return 0;
  }
  MappingHelpers::getParentObjectPath(&local_38);
  plVar3 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  pcVar1 = *(code **)(*plVar3 + 0x70);
  local_40.field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1df30be);
  QString::append(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003ee6bf;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003ee6bf:
  QVariant::QVariant(&local_50,1);
  (*pcVar1)(plVar3,param_1 + 0x28,&local_40,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003ee71b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1003ee71b:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0;
}

