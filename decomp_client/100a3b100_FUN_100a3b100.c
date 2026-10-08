
undefined8 FUN_100a3b100(undefined8 param_1,char param_2,QString *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  QFileInfo local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  ExternalRefCountData *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  iVar2 = CMessageManager::instance();
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_48 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  FUN_10018f860(param_4);
  EnumUtils::OsTypeToString((uint)&local_50);
  FUN_1000341d0(&local_48,&local_50);
  QFileInfo::QFileInfo(local_60,param_3);
  QFileInfo::fileName();
  FUN_1000341d0(&local_48,&local_58);
  local_98 = (int *)0x0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0x80000000;
  local_78.field7 = 0;
  local_68 = 1;
  iVar2 = CMessageManager::showMessageBox
                    (iVar2,(QWidget *)(ulong)(param_2 == '\0' | 0x3bca),(QStringList *)0x0,
                     (QStringList *)&local_40.field0,(CSlotInfo *)&local_48,SUB81(&local_98,0));
  QVariant::~QVariant((QVariant *)&local_78);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_31 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3b24e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a3b24e:
  QFileInfo::~QFileInfo(local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3b287;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a3b287:
  FUN_100039a80(&local_48);
  FUN_100039a80(&local_40);
  if (iVar2 == 1) {
    cVar1 = FUN_100a372c0(param_1,param_2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_100a4a370(param_4,param_2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

