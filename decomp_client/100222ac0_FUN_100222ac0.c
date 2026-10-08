
undefined8 FUN_100222ac0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  QDir local_b0 [8];
  QString local_a8;
  QDir local_a0 [8];
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMetaObject::tr((char *)&local_40,(char *)&PTR_staticMetaObject_1022018f0,0x1ddcd6b);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::homePath();
  QDir::QDir((QDir *)&local_58,&local_50);
  local_60 = (QArrayData *)QString::fromAscii_helper("Desktop",7);
  cVar2 = QDir::exists(&local_58);
  if (cVar2 != '\0') {
    QDir::absoluteFilePath(&local_68);
    QString::operator=(&local_50,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100222b8f;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
LAB_100222b8f:
  QString::operator=(&local_48,&local_50);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100222bcc;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100222bcc:
  QDir::~QDir((QDir *)&local_58);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100222c05;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100222c05:
  lVar4 = 0;
  do {
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    if ((int)lVar4 == 0) {
      local_98 = (QArrayData *)QString::fromAscii_helper("%0.png",6);
      QString::arg(&local_90,&local_98,&local_40,0,0x20);
      QString::operator=(&local_70,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100222da5;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100222da5:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100222de0;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
    else {
      local_88 = (QArrayData *)QString::fromAscii_helper("%0 %1.png",9);
      QString::arg(&local_80,&local_88,&local_40,0,0x20);
      QString::arg(&local_78,&local_80,lVar4,0,10,0x20);
      QString::operator=(&local_70,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100222cc1;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_100222cc1:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100222cf1;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100222cf1:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100222de0;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
LAB_100222de0:
    QDir::QDir(local_a0,&local_48);
    cVar2 = QDir::exists((QString *)local_a0);
    QDir::~QDir(local_a0);
    iVar5 = 0;
    if (cVar2 == '\0') {
      QDir::QDir(local_b0,&local_48);
      QDir::absoluteFilePath(&local_a8);
      QString::operator=((QString *)(param_1 + 0x30),&local_a8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100222e7e;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_100222e7e:
      iVar5 = -2;
      QDir::~QDir(local_b0);
    }
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100222ec0;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100222ec0:
  } while ((iVar5 == 0) && (lVar4 = lVar4 + 1, lVar4 < 0x100));
  uVar3 = 0;
  if (*(int *)(((QString *)(param_1 + 0x30))->field0_0x0 + 4) == 0) {
    uVar3 = 0x80000009;
    FUN_100df99c0("","prl_client_app",0,"Failed to find unused screenshot file name.");
  }
  puVar1 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100222f47;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100222f47:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100222f77;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100222f77:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar3;
}

