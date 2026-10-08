
void FUN_100736c90(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  QString *pQVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long local_a0;
  long local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  Data *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined4 local_54;
  QString local_50;
  undefined1 local_48 [12];
  undefined1 local_31;
  
  QMetaObject::indexOfEnumerator((char *)&PTR_staticMetaObject_102227a60);
  local_48 = QMetaObject::enumerator(0x2227a60);
  iVar2 = QMetaEnum::keyCount();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      pcVar5 = (char *)QMetaEnum::key((int)local_48);
      iVar4 = -1;
      if (pcVar5 != (char *)0x0) {
        sVar6 = _strlen(pcVar5);
        iVar4 = (int)sVar6;
      }
      local_50.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar5,iVar4);
      uVar3 = QChar::toLower((uint)*(ushort *)
                                    (local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)));
      pQVar7 = (QString *)QString::replace(&local_50,0,1,uVar3);
      QString::operator=(&local_50,pQVar7);
      local_54 = QMetaEnum::value((int)local_48);
      QString::toLatin1();
      QByteArray::QByteArray
                ((QByteArray *)&local_60,(char *)(local_68 + *(long *)(local_68 + 0x10)),-1);
      FUN_100738970(param_1 + 0x28,&local_54,(QByteArray *)&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100736dd8;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_100736dd8:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100736e08;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_100736e08:
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100736e38;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100736e38:
      iVar2 = iVar2 + 1;
      iVar4 = QMetaEnum::keyCount();
    } while (iVar2 < iVar4);
  }
  uVar8 = FUN_100152280();
  FUN_100154b10(&local_70,uVar8);
  local_90 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_90);
      lVar10 = (long)*(int *)(local_90 + 8);
      if ((local_70 + (long)*(int *)(local_70 + 8) * 8 != local_90 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_90 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_90 + 0xc))) {
        _memcpy(local_90 + lVar10 * 8 + 0x10,local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
    do {
      local_78 = 1;
      FUN_1007371c0(param_1,*(undefined8 *)local_88);
      local_88 = local_88 + 8;
    } while (local_88 != local_80);
  }
  local_78 = 1;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100736f50;
    }
    QListData::dispose(local_90);
  }
LAB_100736f50:
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar9 = operator_new(0x18);
    FUN_1001a61d0(pvVar9);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar9;
  }
  QObject::connect(&local_98,DAT_1023108e0,"2vmAdded(const GUI::VmId&)",param_1,
                   "1onVmAdded(const GUI::VmId&)",0);
  if (local_98 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar9 = operator_new(0x18);
    FUN_1001a61d0(pvVar9);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar9;
  }
  QObject::connect(&local_a0,DAT_1023108e0,"2beforeVmRemoved(const GUI::VmId&)",param_1,
                   "1onBeforeVmRemoved(const GUI::VmId&)",0);
  if ((cVar1 != '\0') && (local_a0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_70);
  }
  return;
}

