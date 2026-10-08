
void FUN_10064e940(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  undefined8 uVar3;
  CPasswordEditWatcher *pCVar4;
  long lVar5;
  long lVar6;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined8 local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  QArrayData *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = param_1[9].field0_0x0;
  uVar3 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_1006501f0(pQVar1,uVar3);
  QMetaObject::tr((char *)&local_40,(char *)&PTR_PTR_102223420,0x1e08345);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064e9c5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10064e9c5:
  uVar3 = CDeclarativeWizardProxyPage::sourcePage();
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(uVar3,&local_50,PTR_staticMetaObject_1021e14a8,&local_48,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064ea30;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10064ea30:
  local_70 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_70);
      lVar5 = (long)*(int *)(local_70 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_70 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_70 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar5 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      local_78 = *(undefined8 *)local_68;
      QObject::objectName();
      local_88 = (QArrayData *)QString::fromAscii_helper("m_lblRegWarning",0xf);
      cVar2 = QString::startsWith(&local_80,&local_88,1);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10064eb43;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10064eb43:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10064eb73;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10064eb73:
      if (cVar2 != '\0') {
        FUN_100461500(param_1 + 10,&local_78);
      }
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064ebce;
    }
    QListData::dispose(local_70);
  }
LAB_10064ebce:
  pCVar4 = operator_new(0x28);
  CPasswordEditWatcher::CPasswordEditWatcher(pCVar4,*(undefined8 *)(param_1[9].field0_0x0 + 0x60),3)
  ;
  pCVar4 = operator_new(0x28);
  CPasswordEditWatcher::CPasswordEditWatcher(pCVar4,*(undefined8 *)(param_1[9].field0_0x0 + 0x98),3)
  ;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_48);
  }
  return;
}

