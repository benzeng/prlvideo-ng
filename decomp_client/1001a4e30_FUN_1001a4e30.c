
void FUN_1001a4e30(long *param_1)

{
  QWidget *pQVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  QWizardPage::setPixmap(param_1,3,param_1 + 7);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_1,&local_48,PTR_staticMetaObject_1021e1540,&local_40,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a4eb5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001a4eb5:
  local_68 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_68);
      lVar4 = (long)*(int *)(local_68 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_68 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_68 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar4 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      pQVar1 = *(QWidget **)local_60;
      QObject::objectName();
      iVar2 = QString::compare_helper
                        (local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(local_70 + 4),
                         "m_lblMoreOptions",0xffffffff,1);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001a4fb3;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1001a4fb3:
      if (iVar2 == 0) {
        FontUtils::setSmallFont(pQVar1,false);
      }
      else {
        lVar4 = (**(code **)(*(long *)pQVar1 + 8))(pQVar1,"CPathLineEdit");
        if ((lVar4 != 0) &&
           (lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fb510), lVar4 != 0)) {
          uVar3 = (**(code **)(*param_1 + 0x1d8))(param_1);
          FUN_10013f320(lVar4,uVar3);
        }
      }
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001a505d;
    }
    QListData::dispose(local_68);
  }
LAB_1001a505d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

