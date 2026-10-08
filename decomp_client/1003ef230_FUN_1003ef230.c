
undefined8 FUN_1003ef230(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar2 = QVariant::toLongLong((bool *)(param_1 + 0x38));
  if (iVar2 != 1) {
    return 0;
  }
  plVar3 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  pcVar1 = *(code **)(*plVar3 + 0x70);
  local_38 = (QArrayData *)QString::fromAscii_helper("Settings.Autoprotect.TotalSnapshots",0x23);
  QVariant::QVariant(&local_48,3);
  (*pcVar1)(plVar3,param_1 + 0x28,&local_38,&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ef2da;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003ef2da:
  plVar3 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  pcVar1 = *(code **)(*plVar3 + 0x70);
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.Autoprotect.Period",0x1b);
  QVariant::QVariant(&local_60,0x2a300);
  (*pcVar1)(plVar3,param_1 + 0x28,&local_50,&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return 0;
}

