
void FUN_10057ca60(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  QVariant *pQVar5;
  int iVar6;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  _func_void_Node_ptr *local_68;
  QTreeWidgetItemIterator local_60 [24];
  QTreeWidgetItemIterator local_48 [8];
  long local_40;
  undefined1 local_29;
  
  uVar3 = QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),0x400);
  QWidget::setFocus(uVar3,7);
  QTreeWidgetItemIterator::QTreeWidgetItemIterator
            (local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0);
  while (puVar2 = PTR_s_ShortcutsStorage_102274490, local_40 != 0) {
    QTreeWidget::closePersistentEditor
              (*(QTreeWidgetItem **)(*(long *)(param_1 + 0x18) + 0x30),(int)local_40);
    QTreeWidgetItemIterator::QTreeWidgetItemIterator(local_60,local_48);
    QTreeWidgetItemIterator::operator++(local_48);
    QTreeWidgetItemIterator::~QTreeWidgetItemIterator(local_60);
  }
  local_68 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar6 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar6 = (int)sVar4;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  uVar3 = FUN_1003ae480(&local_68,&local_70);
  puVar2 = PTR_s_Profiles_1022744b0;
  iVar6 = -1;
  if (PTR_s_Profiles_1022744b0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_Profiles_1022744b0);
    iVar6 = (int)sVar4;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  pQVar5 = (QVariant *)FUN_1002edf40(uVar3,&local_78);
  if (DAT_102274378 == 0) {
    DAT_102274378 = FUN_100581170("Remaps::ProfilesList",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_88,DAT_102274378,(void *)(param_1 + 0x28),0);
  QVariant::operator=(pQVar5,&local_88);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10057cbf8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10057cbf8:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10057cc28;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10057cc28:
  puVar2 = PTR_s_ShortcutsStorage_102274490;
  iVar6 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar6 = (int)sVar4;
  }
  local_90 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  uVar3 = FUN_1003ae480(&local_68,&local_90);
  puVar2 = PTR_s_ProfileAssignments_1022744b8;
  iVar6 = -1;
  if (PTR_s_ProfileAssignments_1022744b8 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_ProfileAssignments_1022744b8);
    iVar6 = (int)sVar4;
  }
  local_98 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  pQVar5 = (QVariant *)FUN_1002edf40(uVar3,&local_98);
  if (DAT_1022743a0 == 0) {
    DAT_1022743a0 = FUN_10024fc20("GUI::StringPairList",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_a8,DAT_1022743a0,(void *)(param_1 + 0x30),0);
  QVariant::operator=(pQVar5,&local_a8);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10057cd30;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10057cd30:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10057cd66;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10057cd66:
  (**(code **)(**(long **)(param_1 + 0x20) + 0x78))(*(long **)(param_1 + 0x20),&local_68);
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10057cda6;
    }
    QHashData::free_helper(local_68);
  }
LAB_10057cda6:
  QTreeWidgetItemIterator::~QTreeWidgetItemIterator(local_48);
  return;
}

