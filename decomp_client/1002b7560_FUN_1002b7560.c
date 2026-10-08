
void FUN_1002b7560(long param_1)

{
  undefined8 uVar1;
  QMapNodeBase *pQVar2;
  undefined1 local_88 [16];
  QString local_78 [4];
  QString local_58 [2];
  QArrayData *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  FUN_1002ba9a0(param_1 + 0x58);
  uVar1 = FUN_100748240();
  local_48 = (QArrayData *)QString::fromAscii_helper("win7look",8);
  uVar1 = FUN_100748290(uVar1,&local_48);
  FUN_100746c20(&local_40,uVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b75e5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002b75e5:
  if (1 < *(uint *)local_40) {
    FUN_100283ba0(&local_40);
  }
  if (*(long *)(local_40 + 0x10) == 0) {
    pQVar2 = local_40 + 8;
  }
  else {
    pQVar2 = *(QMapNodeBase **)(local_40 + 0x20);
  }
  while( true ) {
    if (1 < *(uint *)local_40) {
      FUN_100283ba0(&local_40);
    }
    if (pQVar2 == local_40 + 8) break;
    FUN_1001eef00(local_88);
    QString::operator=(local_58,(QString *)(pQVar2 + 0x58));
    DLCItemInfo::load();
    QString::operator=(local_78,(QString *)(param_1 + 0x50));
    DLCItemInfo::save();
    FUN_1002bae30(param_1 + 0x58,local_88);
    FUN_1001b8c60(local_88);
    pQVar2 = (QMapNodeBase *)QMapNodeBase::nextNode();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_100283b30();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return;
}

