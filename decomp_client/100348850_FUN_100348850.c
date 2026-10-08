
void FUN_100348850(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_78;
  QArrayData *local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar3);
  if (iVar2 != 0x30000004) {
    return;
  }
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_58 = (QArrayData *)
             QString::fromAscii_helper("Main Window/Status Bar Devices Visibility",0x29);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_50,&local_40);
  bVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10034891b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10034891b:
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_10018c280(uVar3);
  iVar2 = FUN_100319ae0(uVar3);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("{2B44816D-DCC6-4D1A-B81F-1C2A6F0A2DFC}",0x26);
  QString::number((int)&local_78,(uint)(bVar1 & iVar2 == 1));
  lVar4 = FUN_100198ac0(uVar3,&local_70,&local_78,0);
  *(undefined1 *)(lVar4 + 0x60) = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003489cd;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003489cd:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003489fd;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003489fd:
  QSettings::~QSettings((QSettings *)&local_40);
  return;
}

