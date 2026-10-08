
undefined1 FUN_1007272f0(QStringList *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  AnonymousUnion0 AVar6;
  int *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  Data_conflict local_158;
  undefined4 local_150;
  undefined1 local_148;
  CSlotInfo local_138;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  CSlotInfo local_e8;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  CSlotInfo local_98;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  ExternalRefCountData *local_50;
  AnonymousUnion0 local_48;
  QArrayData *local_40;
  QArrayData *local_38 [2];
  
  QLineEdit::text();
  FUN_10013f270(&local_40,*(undefined8 *)((long)param_1[0xc].field0_0x0.field1 + 0x28));
  if (*(int *)(local_38[0] + 4) == 0) {
    iVar3 = CMessageManager::instance();
    local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_50 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_98.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
    local_98._24_8_ = 0;
    local_98.field3_0x28 = 0;
    local_98.field2_0x1c.field0_0x0._4_8_ = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x3aa6,param_1,(QStringList *)&local_48.field0,
               (CSlotInfo *)&local_50,(bool)((char)&local_98 + '\x10'));
    QVariant::~QVariant((QVariant *)&local_68);
    if (local_98.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
      LOCK();
      *(int *)local_98.field1_0x10.field0_0x0 = *(int *)local_98.field1_0x10.field0_0x0 + -1;
      local_38[1]._7_1_ = *(int *)local_98.field1_0x10.field0_0x0 != 0;
      UNLOCK();
      if ((!(bool)local_38[1]._7_1_) && (local_98.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
        operator_delete(local_98.field1_0x10.field0_0x0);
      }
    }
    FUN_100039a80(&local_50);
    FUN_100039a80(&local_48);
LAB_1007276c4:
    uVar5 = 0;
  }
  else {
    if (*(int *)(local_40 + 4) == 0) {
      iVar3 = CMessageManager::instance();
      local_98.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      local_98.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
      local_e8.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_e8._24_8_ = 0;
      local_e8.field3_0x28 = 0;
      local_e8.field2_0x1c.field0_0x0._4_8_ = 0;
      local_b0 = 0x80000000;
      local_b8.field7 = 0;
      local_a8 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x3aa7,param_1,
                 (QStringList *)&local_98.field0_0x0.field0_0x0.field1_0x8,&local_98,
                 (bool)((char)&local_e8 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_b8);
      if (local_e8.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_e8.field1_0x10.field0_0x0 = *(int *)local_e8.field1_0x10.field0_0x0 + -1;
        local_38[1]._7_1_ = *(int *)local_e8.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_38[1]._7_1_) && (local_e8.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_e8.field1_0x10.field0_0x0);
        }
      }
      FUN_100039a80(&local_98);
      FUN_100039a80(&local_98.field0_0x0.field0_0x0.field1_0x8);
      goto LAB_1007276c4;
    }
    cVar2 = FUN_100df0a80(local_38);
    if (cVar2 == '\0') {
      iVar3 = CMessageManager::instance();
      puVar1 = PTR_shared_null_1021e15e8;
      local_e8.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      FUN_1000341d0(&local_e8.field0_0x0.field0_0x0.field1_0x8,local_38);
      local_e8.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)puVar1;
      local_138.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_138._24_8_ = 0;
      local_138.field3_0x28 = 0;
      local_138.field2_0x1c.field0_0x0._4_8_ = 0;
      local_100 = 0x80000000;
      local_108.field7 = 0;
      local_f8 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x3ac5,param_1,
                 (QStringList *)&local_e8.field0_0x0.field0_0x0.field1_0x8,&local_e8,
                 (bool)((char)&local_138 + '\x10'));
      QVariant::~QVariant((QVariant *)&local_108);
      if (local_138.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_138.field1_0x10.field0_0x0 = *(int *)local_138.field1_0x10.field0_0x0 + -1;
        local_38[1]._7_1_ = *(int *)local_138.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_38[1]._7_1_) && (local_138.field1_0x10.field0_0x0 != (QMetaObject *)0x0))
        {
          operator_delete(local_138.field1_0x10.field0_0x0);
        }
      }
      FUN_100039a80(&local_e8);
      FUN_100039a80(&local_e8.field0_0x0.field0_0x0.field1_0x8);
      goto LAB_1007276c4;
    }
    AVar6.field1 = (Data *)0x0;
    if ((param_1[0xd].field0_0x0.field1 != (Data *)0x0) &&
       (AVar6.field1 = (Data *)0x0, *(int *)((long)param_1[0xd].field0_0x0.field1 + 4) != 0)) {
      AVar6 = (AnonymousUnion0)param_1[0xe].field0_0x0.field1;
    }
    uVar4 = FUN_10018d490(AVar6.field1);
    cVar2 = FUN_1007271a0(local_38,uVar4);
    uVar5 = 1;
    if (cVar2 != '\0') {
      iVar3 = CMessageManager::instance();
      local_138.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
      local_138.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8
      ;
      local_178 = (int *)0x0;
      uStack_170 = 0;
      local_160 = 0;
      local_168 = 0;
      local_150 = 0x80000000;
      local_158.field7 = 0;
      local_148 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x80000037,param_1,
                 (QStringList *)&local_138.field0_0x0.field0_0x0.field1_0x8,&local_138,
                 SUB81(&local_178,0));
      QVariant::~QVariant((QVariant *)&local_158);
      if (local_178 != (int *)0x0) {
        LOCK();
        *local_178 = *local_178 + -1;
        local_38[1]._7_1_ = *local_178 != 0;
        UNLOCK();
        if ((!(bool)local_38[1]._7_1_) && (local_178 != (int *)0x0)) {
          operator_delete(local_178);
        }
      }
      FUN_100039a80(&local_138);
      FUN_100039a80(&local_138.field0_0x0.field0_0x0.field1_0x8);
      goto LAB_1007276c4;
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_38[1]._7_1_ = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1007276f6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007276f6:
  if (*(int *)local_38[0] != -1) {
    if (*(int *)local_38[0] != 0) {
      LOCK();
      *(int *)local_38[0] = *(int *)local_38[0] + -1;
      UNLOCK();
      if (*(int *)local_38[0] != 0) {
        return uVar5;
      }
      local_38[1]._7_1_ = 0;
    }
    QArrayData::deallocate(local_38[0],2,8);
  }
  return uVar5;
}

