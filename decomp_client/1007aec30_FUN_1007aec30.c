
void FUN_1007aec30(long param_1)

{
  int *piVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  QVariant local_188;
  undefined *local_178;
  QVariant local_170;
  QArrayData *local_160;
  QArrayData *local_158;
  Connection local_150 [8];
  QArrayData *local_148;
  Data_conflict local_140;
  undefined4 local_138;
  QArrayData *local_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 local_120;
  QVariant local_108 [2];
  undefined1 local_f0 [48];
  int *local_c0;
  int *local_b8;
  int *local_b0;
  int *local_a8;
  QTypedArrayData<unsigned_short> *local_a0;
  undefined4 local_98;
  int *local_90;
  undefined8 local_88;
  undefined8 local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  QString local_58;
  undefined4 local_50;
  int *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_21;
  
  local_28 = 0;
  local_2c = 0;
  cVar2 = FUN_1007a7bb0(*(undefined8 *)(param_1 + 0x100),&local_28,&local_2c);
  if (cVar2 == '\0') {
    return;
  }
  if (((*(long *)(param_1 + 0x118) == 0) || (*(int *)(*(long *)(param_1 + 0x118) + 4) == 0)) ||
     (*(long *)(param_1 + 0x120) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance to edit snapshot.");
    return;
  }
  cVar2 = FUN_10011a820();
  if (cVar2 != '\0') {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x118) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x120);
    }
    FUN_10011a850(uVar4);
    return;
  }
  FUN_1007a7870(local_f0,*(undefined8 *)(param_1 + 0x100),local_28,local_2c);
  local_78 = local_c0;
  if (1 < *local_c0 + 1U) {
    LOCK();
    *local_c0 = *local_c0 + 1;
    local_128 = *local_c0 != 0;
    UNLOCK();
  }
  local_70 = local_b8;
  if (1 < *local_b8 + 1U) {
    LOCK();
    *local_b8 = *local_b8 + 1;
    local_128 = *local_b8 != 0;
    UNLOCK();
  }
  local_68 = local_b0;
  if (1 < *local_b0 + 1U) {
    LOCK();
    *local_b0 = *local_b0 + 1;
    local_128 = *local_b0 != 0;
    UNLOCK();
  }
  local_60 = local_a8;
  if (1 < *local_a8 + 1U) {
    LOCK();
    *local_a8 = *local_a8 + 1;
    local_128 = *local_a8 != 0;
    UNLOCK();
  }
  local_58.field0_0x0 = local_a0;
  if (1 < *(int *)local_a0 + 1U) {
    LOCK();
    *(int *)local_a0 = *(int *)local_a0 + 1;
    local_128 = *(int *)local_a0 != 0;
    UNLOCK();
  }
  local_50 = local_98;
  local_48 = local_90;
  if (1 < *local_90 + 1U) {
    LOCK();
    *local_90 = *local_90 + 1;
    local_128 = *local_90 != 0;
    UNLOCK();
  }
  local_38 = local_80;
  local_40 = local_88;
  FUN_1007a1cf0(&local_c0);
  if (*(int *)(local_58.field0_0x0 + 4) == 0) goto LAB_1007af0f1;
  local_130 = (QArrayData *)
              QString::fromAscii_helper("1onSnapshotPropertiesDialogFinished(int)",0x28);
  local_138 = 0x80000000;
  local_140.field7 = 0;
  FUN_100a1c600(&local_128,param_1,&local_130,&local_140);
  QVariant::~QVariant((QVariant *)&local_140);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007aee72;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1007aee72:
  plVar3 = operator_new(0xb0);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x118) != 0) &&
     (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x120);
  }
  FUN_100188480(&local_148,uVar4);
  FUN_1007b2340(plVar3,&local_148,param_1,&local_70,&local_68);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_21 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007aeef8;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1007aeef8:
  QWidget::setAttribute(plVar3,0x37,1);
  cVar2 = FUN_10019cd90(&local_128);
  if (cVar2 != '\0') {
    uVar4 = 0;
    if ((CONCAT71(uStack_127,local_128) != 0) &&
       (uVar4 = 0, *(int *)(CONCAT71(uStack_127,local_128) + 4) != 0)) {
      uVar4 = local_120;
    }
    FUN_100a1c770(&local_160,&local_128);
    QString::toLatin1();
    if ((1 < *(uint *)local_158) || (*(long *)(local_158 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_158,*(uint *)(local_158 + 4) + 1,*(uint *)(local_158 + 8) >> 0x1f);
    }
    QObject::connect(local_150,plVar3,"2finished(int)",uVar4,local_158 + *(long *)(local_158 + 0x10)
                     ,0);
    QMetaObject::Connection::~Connection(local_150);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_21 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007aeff7;
      }
      QArrayData::deallocate(local_158,1,8);
    }
LAB_1007aeff7:
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_21 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007af02d;
      }
      QArrayData::deallocate(local_160,2,8);
    }
  }
LAB_1007af02d:
  (**(code **)(*plVar3 + 0x1a0))(plVar3);
  local_178 = PTR_shared_null_1021e15e8;
  QVariant::QVariant(&local_188,&local_58);
  FUN_10012ae80(&local_178,&local_188);
  QVariant::QVariant(&local_170,(QList *)&local_178);
  QObject::setProperty((char *)plVar3,(QVariant *)"RelatedItem");
  QVariant::~QVariant(&local_170);
  QVariant::~QVariant(&local_188);
  FUN_100035ea0(&local_178);
  QVariant::~QVariant(local_108);
  piVar1 = (int *)CONCAT71(uStack_127,local_128);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && ((void *)CONCAT71(uStack_127,local_128) != (void *)0x0)) {
      operator_delete((void *)CONCAT71(uStack_127,local_128));
    }
  }
LAB_1007af0f1:
  FUN_1007a1cf0(&local_78);
  return;
}

