
void FUN_1007d0c60(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  uint local_58;
  Data *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(param_3->field0_0x0 + 4) == 0) {
    QObject::objectName();
    QString::operator=(param_3,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007d0cd1;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1007d0cd1:
  QAction::associatedWidgets();
  local_70 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_70);
      lVar5 = (long)*(int *)(local_70 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_70 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_70 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar5 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  puVar2 = PTR_staticMetaObject_1021e14a0;
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  lVar5 = 0;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    lVar5 = 0;
    do {
      if (local_58 == 0) goto LAB_1007d0ee7;
      lVar5 = QMetaObject::cast((QObject *)puVar2);
      if (lVar5 == 0) {
LAB_1007d0ee0:
        local_58 = 0;
      }
      else {
        QObject::objectName();
        iVar1 = *(int *)(local_78 + 4);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d0ddf;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1007d0ddf:
        if (iVar1 == 0) goto LAB_1007d0ee0;
        QObject::objectName();
        local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
        if (1 < *(int *)local_88 + 1U) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + 1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_40,0x1e18c0a);
        QString::append(&local_80);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d0e5d;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_1007d0e5d:
        QString::insert((int)param_3,(QChar *)0x0,
                        (int)*(undefined8 *)(local_80.field0_0x0 + 0x10) + (int)local_80.field0_0x0)
        ;
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d0ea5;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_1007d0ea5:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d0ee7;
          }
          QArrayData::deallocate(local_88,2,8);
        }
      }
LAB_1007d0ee7:
      local_68 = local_68 + 8;
      uVar4 = local_58 ^ 1;
      bVar7 = local_58 != 1;
      local_58 = uVar4;
    } while ((bVar7) && (local_68 != local_60));
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d0f33;
    }
    QListData::dispose(local_70);
  }
LAB_1007d0f33:
  if (lVar5 != 0) {
    uVar3 = QMenu::menuAction();
    FUN_1007d0c60(param_1,uVar3,param_3);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_50);
  }
  return;
}

