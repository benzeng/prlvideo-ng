
void FUN_1001a6bd0(undefined8 param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  QArrayData *local_90;
  QArrayData *local_88;
  Connection local_80 [8];
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1001a6a80(&local_38,param_1);
  QLineEdit::text();
  cVar1 = FUN_1001a6fa0();
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001a6c3f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001a6c3f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001a6c6f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001a6c6f:
  if (cVar1 != '\0') {
    QDialog::accept();
    return;
  }
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_48 = 1;
  plVar2 = operator_new(0x68);
  FUN_1001a86b0(plVar2,param_1);
  QWidget::setAttribute(plVar2,0x37,1);
  cVar1 = FUN_10019cd90(&local_78);
  if (cVar1 == '\0') goto LAB_1001a6dd7;
  uVar3 = 0;
  if ((local_78 != (int *)0x0) && (uVar3 = 0, local_78[1] != 0)) {
    uVar3 = uStack_70;
  }
  FUN_100a1c770(&local_90,&local_78);
  QString::toLatin1();
  if ((1 < *(uint *)local_88) || (*(long *)(local_88 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_88,*(uint *)(local_88 + 4) + 1,*(uint *)(local_88 + 8) >> 0x1f);
  }
  QObject::connect(local_80,plVar2,"2finished(int)",uVar3,local_88 + *(long *)(local_88 + 0x10),0);
  QMetaObject::Connection::~Connection(local_80);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001a6da1;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1001a6da1:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001a6dd7;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1001a6dd7:
  (**(code **)(*plVar2 + 0x1a0))(plVar2);
  QVariant::~QVariant((QVariant *)&local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_29 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
  return;
}

