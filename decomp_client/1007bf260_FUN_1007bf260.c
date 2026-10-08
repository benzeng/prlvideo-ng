
void FUN_1007bf260(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  int *local_80;
  QObject *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1007bf8a0(param_1,1);
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001547d0(uVar1,param_1 + 0x30);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance.");
    return;
  }
  lVar2 = FUN_10015a340(lVar2);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007c2220(param_1,*(undefined8 *)(lVar2 + 0x158),&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf2ec;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007bf2ec:
  pQVar3 = operator_new(0x18);
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,0x1dcb0a2);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_29 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e31adc);
  QString::append(&local_60);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf383;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007bf383:
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,(int)PTR_s_Socket_10226e7a8);
  local_58.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  local_50.field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_29 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e23b58);
  QString::append(&local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf438;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007bf438:
  FUN_1007b5750(pQVar3,0xb,param_1,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf47c;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007bf47c:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf4ac;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007bf4ac:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf4de;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007bf4de:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf50e;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1007bf50e:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf53e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007bf53e:
  piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  local_80 = piVar4;
  local_78 = pQVar3;
  FUN_1007c57e0(param_1 + 0x38,&local_80);
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_29 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar4);
    }
  }
  FUN_1007c2b80(param_1);
  return;
}

