
undefined8 FUN_10059a9c0(long param_1)

{
  undefined8 uVar1;
  QStringList *pQVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  QStringList *pQVar6;
  AnonymousUnion0 local_90;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  int *local_70 [4];
  QVariant local_50 [2];
  QArrayData *local_38;
  ExternalRefCountData *local_30;
  undefined1 local_21;
  
  cVar4 = QVariant::toBool();
  if (cVar4 == '\0') {
    return 0;
  }
  QString::number((int)&local_38,64000);
  puVar3 = PTR_shared_null_1021e15e8;
  local_30 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10059aa3e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10059aa3e:
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_78 = (QArrayData *)QString::fromAscii_helper("1onSuccessMessageClosed()",0x19);
  local_80 = 0x80000000;
  local_88.field7 = 0;
  FUN_100a1c600(local_70,uVar1,&local_78,&local_88);
  QVariant::~QVariant((QVariant *)&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10059aab3;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10059aab3:
  iVar5 = CMessageManager::instance();
  pQVar2 = *(QStringList **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x10);
  pQVar6 = (QStringList *)0x0;
  if ((pQVar2 != (QStringList *)0x0) &&
     (pQVar6 = (QStringList *)0x0, (*(byte *)((long)pQVar2[1].field0_0x0.field1 + 0x20) & 1) != 0))
  {
    pQVar6 = pQVar2;
  }
  local_90.field1 = (Data *)puVar3;
  CMessageManager::showMessageBox
            (iVar5,(QWidget *)0x3c10,pQVar6,(QStringList *)&local_90.field0,(CSlotInfo *)&local_30,
             SUB81(local_70,0));
  FUN_100039a80(&local_90);
  QVariant::~QVariant(local_50);
  if (local_70[0] != (int *)0x0) {
    LOCK();
    *local_70[0] = *local_70[0] + -1;
    local_21 = *local_70[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_70[0] != (int *)0x0)) {
      operator_delete(local_70[0]);
    }
  }
  FUN_100039a80(&local_30);
  return 1;
}

