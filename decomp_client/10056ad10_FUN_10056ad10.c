
void FUN_10056ad10(long param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  Data_conflict local_158;
  undefined4 local_150;
  QArrayData *local_148;
  int *local_140 [4];
  QVariant local_120 [2];
  QArrayData *local_108;
  QArrayData *local_100;
  Data_conflict local_f8;
  undefined4 local_f0;
  QArrayData *local_e8;
  int *local_e0;
  undefined8 local_d8;
  QVariant local_c0 [2];
  Connection local_a8 [8];
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  QKeySequence local_50 [8];
  undefined1 local_48 [8];
  QKeySequence local_40 [15];
  undefined1 local_31;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
  }
  cVar1 = FUN_1005a5f40(uVar3);
  if (cVar1 != '\0') {
    return;
  }
  QKeySequence::QKeySequence(local_50);
  local_48[0] = 1;
  QKeySequence::QKeySequence(local_40,local_50);
  QKeySequence::~QKeySequence(local_50);
  plVar2 = operator_new(0x68);
  FUN_100586fa0(plVar2,local_48,*(undefined8 *)(param_1 + 0x10));
  QWidget::setAttribute(plVar2,0x37,1);
  local_90 = (QArrayData *)QString::fromAscii_helper("1onEditKeySequenceDialogClosed(int)",0x23);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  FUN_100a1c600(local_88,param_1,&local_90,&local_a0);
  cVar1 = FUN_10019cd90(local_88);
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_31 = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056ae65;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10056ae65:
  if (cVar1 == '\0') goto LAB_10056b105;
  local_e8 = (QArrayData *)QString::fromAscii_helper("1onEditKeySequenceDialogClosed(int)",0x23);
  local_f0 = 0x80000000;
  local_f8.field7 = 0;
  FUN_100a1c600(&local_e0,param_1,&local_e8,&local_f8);
  uVar3 = 0;
  if ((local_e0 != (int *)0x0) && (uVar3 = 0, local_e0[1] != 0)) {
    uVar3 = local_d8;
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("1onEditKeySequenceDialogClosed(int)",0x23);
  local_150 = 0x80000000;
  local_158.field7 = 0;
  FUN_100a1c600(local_140,param_1,&local_148,&local_158);
  FUN_100a1c770(&local_108,local_140);
  QString::toLatin1();
  if ((1 < *(uint *)local_100) || (*(long *)(local_100 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_100,*(uint *)(local_100 + 4) + 1,*(uint *)(local_100 + 8) >> 0x1f);
  }
  QObject::connect(local_a8,plVar2,"2finished(int)",uVar3,local_100 + *(long *)(local_100 + 0x10),0)
  ;
  QMetaObject::Connection::~Connection(local_a8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056afdd;
    }
    QArrayData::deallocate(local_100,1,8);
  }
LAB_10056afdd:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056b013;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10056b013:
  QVariant::~QVariant(local_120);
  if (local_140[0] != (int *)0x0) {
    LOCK();
    *local_140[0] = *local_140[0] + -1;
    local_31 = *local_140[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_140[0] != (int *)0x0)) {
      operator_delete(local_140[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_158);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056b08c;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_10056b08c:
  QVariant::~QVariant(local_c0);
  if (local_e0 != (int *)0x0) {
    LOCK();
    *local_e0 = *local_e0 + -1;
    local_31 = *local_e0 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_e0 != (int *)0x0)) {
      operator_delete(local_e0);
    }
  }
  QVariant::~QVariant((QVariant *)&local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10056b105;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_10056b105:
  (**(code **)(*plVar2 + 0x1a0))(plVar2);
  QKeySequence::~QKeySequence(local_40);
  return;
}

