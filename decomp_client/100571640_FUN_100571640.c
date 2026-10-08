
void FUN_100571640(undefined8 param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  QArrayData *local_98;
  QArrayData *local_90;
  Connection local_88 [8];
  QArrayData *local_80;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60;
  undefined8 local_58;
  QVariant local_40 [2];
  undefined1 local_21;
  
  local_68 = (QArrayData *)QString::fromAscii_helper("1onPortForwardDialogFinished(int)",0x21);
  local_70 = 0x80000000;
  local_78.field7 = 0;
  FUN_100a1c600(&local_60,param_1,&local_68,&local_78);
  QVariant::~QVariant((QVariant *)&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005716c1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005716c1:
  plVar2 = operator_new(0x118);
  local_80 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10058abb0(plVar2,param_1,0xffffffff,0xffffffff,&local_80,0xffffffff);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100571728;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100571728:
  QWidget::setAttribute(plVar2,0x37,1);
  cVar1 = FUN_10019cd90(&local_60);
  if (cVar1 == '\0') goto LAB_10057184b;
  uVar3 = 0;
  if ((local_60 != (int *)0x0) && (uVar3 = 0, local_60[1] != 0)) {
    uVar3 = local_58;
  }
  FUN_100a1c770(&local_98,&local_60);
  QString::toLatin1();
  if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
  }
  QObject::connect(local_88,plVar2,"2finished(int)",uVar3,local_90 + *(long *)(local_90 + 0x10),0);
  QMetaObject::Connection::~Connection(local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100571815;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100571815:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10057184b;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10057184b:
  (**(code **)(*plVar2 + 0x1a0))(plVar2);
  QVariant::~QVariant(local_40);
  if (local_60 != (int *)0x0) {
    LOCK();
    *local_60 = *local_60 + -1;
    local_21 = *local_60 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_60 != (int *)0x0)) {
      operator_delete(local_60);
    }
  }
  return;
}

