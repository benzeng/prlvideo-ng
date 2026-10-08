
undefined8 FUN_10025a310(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  QString *pQVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  QArrayData *local_b0;
  QArrayData *local_a8;
  Connection local_a0 [8];
  QArrayData *local_98;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78;
  undefined8 local_70;
  QVariant local_58 [2];
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar6);
  lVar4 = FUN_1001547d0(uVar3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025a390;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10025a390:
  if (lVar4 == 0) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  local_80 = (QArrayData *)QString::fromAscii_helper("1onSharedFolderDialogFinished(int)",0x22);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(&local_78,param_1,&local_80,&local_90);
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025a427;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10025a427:
  pQVar5 = (QString *)CSearchParentHelper::instance();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_98,uVar6);
  uVar6 = CSearchParentHelper::getParentForMessage(pQVar5,SUB81(&local_98,0),(QWidget *)0x0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025a49e;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10025a49e:
  plVar7 = operator_new(0x120);
  lVar8 = CVmSharing::getHostSharing();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10018f860(uVar9);
  FUN_10014cd00(plVar7,lVar4,lVar8 + 0xa8,uVar3,uVar2,uVar6,0);
  QWidget::setAttribute(plVar7,0x37,1);
  cVar1 = FUN_10019cd90(&local_78);
  if (cVar1 == '\0') goto LAB_10025a629;
  uVar6 = 0;
  if ((local_78 != (int *)0x0) && (uVar6 = 0, local_78[1] != 0)) {
    uVar6 = local_70;
  }
  FUN_100a1c770(&local_b0,&local_78);
  QString::toLatin1();
  if ((1 < *(uint *)local_a8) || (*(long *)(local_a8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_a8,*(uint *)(local_a8 + 4) + 1,*(uint *)(local_a8 + 8) >> 0x1f);
  }
  QObject::connect(local_a0,plVar7,"2finished(int)",uVar6,local_a8 + *(long *)(local_a8 + 0x10),0);
  QMetaObject::Connection::~Connection(local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025a5f3;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_10025a5f3:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025a629;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10025a629:
  (**(code **)(*plVar7 + 0x1a0))(plVar7);
  QVariant::~QVariant(local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_31 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
  return 0;
}

