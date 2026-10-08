
void FUN_1004e5980(long param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *local_c0;
  QObject *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  int local_70;
  int *local_68;
  QObject *local_60;
  long local_58;
  QArrayData *local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  uVar4 = FUN_1001d50a0();
  QObject::connect(&local_40,uVar4,"2focusChanged(QWidget*,QWidget*)",param_1,"1stopSearching()",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar4 = FUN_1001d50a0();
    QObject::connect(&local_48,uVar4,"2activeStateWillChange(bool)",param_1,"1stopSearching()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar4 = FUN_1001d50a0();
    QObject::connect(&local_48,uVar4,"2activeStateWillChange(bool)",param_1,"1stopSearching()",0);
    if ((cVar2 != '\0') && (local_48 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  puVar1 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar5 = (QObject *)
           qt_qFindChild_helper
                     (*(undefined8 *)(param_1 + 0x18),&local_50,PTR_staticMetaObject_1021e13c8,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e5ab1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004e5ab1:
  if (pQVar5 != (QObject *)0x0) {
    QObject::connect(&local_58,pQVar5,"2clicked()",param_1,"1stopSearching()",0);
    if (local_58 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_58);
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      if (cVar2 != '\0') {
        piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
        local_68 = piVar6;
        local_60 = pQVar5;
        FUN_10007b8d0(param_1 + 0x30,&local_68);
        if (piVar6 != (int *)0x0) {
          LOCK();
          *piVar6 = *piVar6 + -1;
          local_31 = *piVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar6);
          }
        }
      }
    }
  }
  plVar7 = (long *)FUN_1003a3910(*(undefined8 *)(param_1 + 0x18));
  if (plVar7 == (long *)0x0) {
    return;
  }
  lVar8 = (**(code **)(*plVar7 + 0x1f8))(plVar7);
  if (lVar8 == 0) {
    return;
  }
  local_98 = (QArrayData *)puVar1;
  local_90 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(lVar8,&local_98,PTR_staticMetaObject_1021e1540,&local_90,1);
  local_88 = local_90;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 == 0) {
      QListData::detach((int)&local_88);
      lVar8 = (long)*(int *)(local_88 + 8);
      if ((local_90 + (long)*(int *)(local_90 + 8) * 8 != local_88 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_88 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_88 + 0xc))
         ) {
        _memcpy(local_88 + lVar8 * 8 + 0x10,local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  local_70 = 1;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e5c5d;
    }
    QListData::dispose(local_90);
  }
LAB_1004e5c5d:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e5c93;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004e5c93:
  if ((local_70 != 0) && (local_80 != local_78)) {
    do {
      pQVar5 = *(QObject **)local_80;
      lVar8 = (**(code **)(*(long *)pQVar5 + 8))(pQVar5,"QAbstractButton");
      if (lVar8 == 0) {
        lVar8 = (**(code **)(*(long *)pQVar5 + 8))(pQVar5,"QAbstractSlider");
        if (lVar8 != 0) {
          QObject::connect(&local_a8,pQVar5,"2valueChanged(int)",param_1,"1stopSearching()",0);
          bVar3 = 1;
          if (local_a8 != 0) {
            bVar3 = QMetaObject::Connection::isConnected_helper();
            bVar3 = bVar3 ^ 1;
          }
          QMetaObject::Connection::~Connection((Connection *)&local_a8);
          goto LAB_1004e5e00;
        }
        lVar8 = (**(code **)(*(long *)pQVar5 + 8))(pQVar5,"QAbstractSpinBox");
        if (lVar8 != 0) {
          QObject::connect(&local_b0,pQVar5,"2editingFinished()",param_1,"1stopSearching()",0);
          bVar3 = 1;
          if (local_b0 != 0) {
            bVar3 = QMetaObject::Connection::isConnected_helper();
            bVar3 = bVar3 ^ 1;
          }
          QMetaObject::Connection::~Connection((Connection *)&local_b0);
          goto LAB_1004e5e00;
        }
      }
      else {
        QObject::connect((Connection *)&local_a0,pQVar5,"2clicked(bool)",param_1,"1stopSearching()",
                         0);
        bVar3 = 1;
        if (local_a0 != 0) {
          bVar3 = QMetaObject::Connection::isConnected_helper();
          bVar3 = bVar3 ^ 1;
        }
        QMetaObject::Connection::~Connection((Connection *)&local_a0);
LAB_1004e5e00:
        if (bVar3 == 0) {
          piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
          local_c0 = piVar6;
          local_b8 = pQVar5;
          FUN_10007b8d0(param_1 + 0x30,&local_c0);
          if (piVar6 != (int *)0x0) {
            LOCK();
            *piVar6 = *piVar6 + -1;
            local_31 = *piVar6 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              operator_delete(piVar6);
            }
          }
        }
      }
      local_80 = local_80 + 8;
      local_70 = 1;
    } while (local_80 != local_78);
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_88);
  }
  return;
}

