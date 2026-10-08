
void FUN_10044ad10(long param_1)

{
  undefined *puVar1;
  QString *pQVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  Connection local_a0 [8];
  QArrayData *local_98;
  QString *local_90;
  QArrayData *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  int local_60;
  code *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  puVar1 = PTR_staticMetaObject_1021e1398;
  local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  local_80 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x10),&local_88,PTR_staticMetaObject_1021e1398,&local_80,1);
  local_78 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_78);
      lVar4 = (long)*(int *)(local_78 + 8);
      if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_78 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_78 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar4 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044ae0b;
    }
    QListData::dispose(local_80);
  }
LAB_10044ae0b:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044ae3b;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10044ae3b:
  if ((local_60 != 0) && (local_70 != local_68)) {
    do {
      pQVar2 = (QString *)QMetaObject::cast((QObject *)puVar1);
      local_90 = pQVar2;
      QMetaObject::tr((char *)&local_98,"",0x1df4f00);
      CMoreOptionsLabel::setText(pQVar2);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10044aeec;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_10044aeec:
      local_48 = PTR_toggled_1021e13a0;
      local_40 = 0;
      local_58 = FUN_10044b0f0;
      local_50 = 0;
      puVar3 = operator_new(0x20);
      *puVar3 = 1;
      *(code **)(puVar3 + 2) = FUN_10044fa60;
      *(code **)(puVar3 + 4) = FUN_10044b0f0;
      *(undefined8 *)(puVar3 + 6) = 0;
      QObject::connectImpl(local_a0,pQVar2,&local_48,param_1,&local_58,puVar3,0,0,puVar1);
      QMetaObject::Connection::~Connection(local_a0);
      FUN_10044aaa0(param_1,pQVar2,0);
      FUN_10044fad0(param_1 + 0x58,&local_90);
      local_70 = local_70 + 8;
      local_60 = 1;
    } while (local_70 != local_68);
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_78);
  }
  return;
}

