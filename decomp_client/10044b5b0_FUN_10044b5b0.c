
void FUN_10044b5b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  QArrayData *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  undefined4 local_90;
  QArrayData *local_88;
  Data *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  local_60 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x10),&local_68,PTR_staticMetaObject_1021e1540,&local_60,1);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044b6ac;
    }
    QListData::dispose(local_60);
  }
LAB_10044b6ac:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044b6dc;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10044b6dc:
  if ((local_40 != 0) && (local_50 != local_48)) {
    do {
      uVar1 = *(undefined8 *)local_50;
      QObject::objectName();
      local_78 = (QArrayData *)QString::fromAscii_helper("qt_",3);
      cVar4 = QString::startsWith(&local_70,&local_78,1);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10044b772;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10044b772:
      if (cVar4 == '\0') {
        FUN_10044b350(param_1,uVar1);
      }
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10044b7b6;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10044b7b6:
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  puVar3 = PTR_shared_null_1021e15e8;
  puVar2 = PTR_shared_null_1021e1288;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044b807;
    }
    QListData::dispose(local_58);
  }
LAB_10044b807:
  local_88 = (QArrayData *)puVar2;
  local_80 = (Data *)puVar3;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x10),&local_88,PTR_staticMetaObject_1021e1510,&local_80,1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044b864;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10044b864:
  local_a8 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_a8);
      lVar6 = (long)*(int *)(local_a8 + 8);
      if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_a8 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_a8 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_a8 + 0xc))
         ) {
        _memcpy(local_a8 + lVar6 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  puVar2 = PTR_staticMetaObject_1021e12b0;
  local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
  local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
    do {
      local_90 = 1;
      WidgetUtils::Adjuster::adjustLayout(*(QLayout **)local_a0);
      lVar6 = QMetaObject::cast((QObject *)puVar2);
      if (lVar6 == 0) {
        QLayout::activate();
      }
      else {
        QObject::objectName();
        iVar5 = QString::compare_helper
                          (local_b0 + *(long *)(local_b0 + 0x10),*(undefined4 *)(local_b0 + 4),
                           "m_mainLayout",0xffffffff,1);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10044b9be;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_10044b9be:
        if (iVar5 == 0) {
          QGridLayout::setColumnMinimumWidth((int)lVar6,0);
        }
      }
      local_a0 = local_a0 + 8;
    } while (local_a0 != local_98);
  }
  local_90 = 1;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044ba3d;
    }
    QListData::dispose(local_a8);
  }
LAB_10044ba3d:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_80);
  }
  return;
}

