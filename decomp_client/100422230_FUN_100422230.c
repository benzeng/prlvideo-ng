
/* WARNING: Type propagation algorithm not settling */

void FUN_100422230(long param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  size_t sVar4;
  QVariant *pQVar5;
  long *plVar6;
  int iVar7;
  QVariant local_80;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  _func_void_Node_ptr *local_40;
  int local_34 [2];
  undefined1 local_29;
  
  puVar3 = PTR_s_widgetType_1021f1e98;
  if (param_2 == 3) {
    local_34[1] = 2;
  }
  else if (param_2 == 1) {
    local_34[1] = 1;
  }
  else {
    local_34[1] = 0;
  }
  local_34[0] = (uint)(param_2 == 3) << 2;
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x78) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar7 = -1;
  if (PTR_s_widgetType_1021f1e98 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_widgetType_1021f1e98);
    iVar7 = (int)sVar4;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  pQVar5 = (QVariant *)FUN_1002edf40(&local_40,&local_48);
  if (DAT_102273fd0 == 0) {
    DAT_102273fd0 = FUN_10041cb70("CPrlFileDevSelector::FileDevSelectorType",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_58,DAT_102273fd0,local_34,0);
  QVariant::operator=(pQVar5,&local_58);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042235d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10042235d:
  puVar3 = PTR_s_widgetMode_1021f1ea0;
  iVar7 = -1;
  if (PTR_s_widgetMode_1021f1ea0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_widgetMode_1021f1ea0);
    iVar7 = (int)sVar4;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  pQVar5 = (QVariant *)FUN_1002edf40(&local_40,&local_60);
  if (DAT_102273ff0 == 0) {
    DAT_102273ff0 = FUN_10041ccc0("CPrlFileDevSelector::FileDevSelectorMode",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_70,DAT_102273ff0,local_34 + 1,0);
  QVariant::operator=(pQVar5,&local_70);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100422416;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100422416:
  plVar6 = (long *)0x0;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (plVar6 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x78) + 4) != 0)) {
    plVar6 = *(long **)(param_1 + 0x80);
  }
  pcVar1 = *(code **)(*plVar6 + 0x60);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40);
  QVariant::QVariant(&local_80,0x1c,&local_40,0);
  (*pcVar1)(plVar6,uVar2,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_29 = 0;
    }
    QHashData::free_helper(local_40);
  }
  return;
}

