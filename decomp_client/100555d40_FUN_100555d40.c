
void FUN_100555d40(long param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  QArrayData *local_e0;
  QArrayData *local_d8;
  Connection local_d0 [8];
  QKeySequence local_c8 [8];
  QKeySequence local_c0 [8];
  QKeySequence local_b8 [8];
  QKeySequence local_b0 [16];
  QArrayData *local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68;
  undefined8 local_60;
  QVariant local_48 [2];
  undefined1 local_29;
  
  cVar1 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    return;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("1onEditKeySequenceDialogClosed(int)",0x23);
  local_78 = 0x80000000;
  local_80.field7 = 0;
  FUN_100a1c600(&local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100555dd7;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100555dd7:
  FUN_100714ea0(&local_a0,param_1 + 0x68,param_1 + 0x58);
  FUN_100714f80(local_98,param_1 + 0x60,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100555e38;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100555e38:
  plVar2 = operator_new(0x68);
  QKeySequence::QKeySequence(local_c0);
  QKeySequence::QKeySequence(local_c8);
  FUN_100714b00(local_b8,local_c0,local_c8,2);
  FUN_100586e30(plVar2,local_b8,local_90,*(undefined8 *)(param_1 + 0x10));
  QKeySequence::~QKeySequence(local_b0);
  QKeySequence::~QKeySequence(local_b8);
  QKeySequence::~QKeySequence(local_c8);
  QKeySequence::~QKeySequence(local_c0);
  QWidget::setAttribute(plVar2,0x37,1);
  cVar1 = FUN_10019cd90(&local_68);
  if (cVar1 == '\0') goto LAB_100555ffb;
  uVar3 = 0;
  if ((local_68 != (int *)0x0) && (uVar3 = 0, local_68[1] != 0)) {
    uVar3 = local_60;
  }
  FUN_100a1c770(&local_e0,&local_68);
  QString::toLatin1();
  if ((1 < *(uint *)local_d8) || (*(long *)(local_d8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_d8,*(uint *)(local_d8 + 4) + 1,*(uint *)(local_d8 + 8) >> 0x1f);
  }
  QObject::connect(local_d0,plVar2,"2finished(int)",uVar3,local_d8 + *(long *)(local_d8 + 0x10),0);
  QMetaObject::Connection::~Connection(local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100555fc5;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_100555fc5:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100555ffb;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100555ffb:
  (**(code **)(*plVar2 + 0x1a0))(plVar2);
  FUN_1000fec30(local_98);
  QVariant::~QVariant(local_48);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    local_29 = *local_68 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68 != (int *)0x0)) {
      operator_delete(local_68);
    }
  }
  return;
}

