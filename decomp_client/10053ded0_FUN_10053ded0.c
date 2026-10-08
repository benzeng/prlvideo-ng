
void FUN_10053ded0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  size_t sVar5;
  Data *pDVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  Data *local_38;
  undefined1 local_29;
  
  FUN_100525c10();
  puVar3 = PTR_s_DispPreferences_102274488;
  plVar1 = *(long **)(param_1 + 0x30);
  pcVar2 = *(code **)(*plVar1 + 0x60);
  iVar7 = -1;
  if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_DispPreferences_102274488);
    iVar7 = (int)sVar5;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  local_58 = (QArrayData *)QString::fromAscii_helper("LockedOperationsList.LockedOperation",0x24);
  (*pcVar2)(&local_48,plVar1,&local_50,&local_58);
  FUN_1003df0d0(&local_38,&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053df8a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10053df8a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10053dfba;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10053dfba:
  iVar7 = *(int *)(local_38 + 8);
  iVar9 = *(int *)(local_38 + 0xc);
  if ((iVar9 == iVar7) || (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 0x40) + 0x13c) != '\0'))
  {
    QObject::connect(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),"2toggled(bool)",
                     *(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
    if (local_60 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78),"2toggled(bool)",
                     *(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
    if (cVar4 == '\0') {
      cVar4 = '\0';
    }
    else if (local_68 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x80),"2toggled(bool)",
                     *(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
    if (cVar4 == '\0') {
      cVar4 = '\0';
    }
    else if (local_70 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),"2toggled(bool)",
                     *(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
    if (cVar4 == '\0') {
      cVar4 = '\0';
    }
    else if (local_78 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90),"2toggled(bool)",
                     *(undefined8 *)(param_1 + 0x38),"1onPreprocessedValueChanged()",0);
    if ((cVar4 != '\0') && (local_80 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_80);
  }
  else {
    lVar10 = (long)iVar7 << 3;
    do {
      if (**(int **)(local_38 + lVar10 + 0x10) == 0x2c) {
        QAbstractButton::setChecked(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),0));
        iVar7 = *(int *)(local_38 + 8);
        iVar9 = *(int *)(local_38 + 0xc);
        break;
      }
      lVar10 = lVar10 + 8;
    } while ((long)iVar9 * 8 != lVar10);
    if (iVar7 != iVar9) {
      lVar10 = (long)iVar7 << 3;
      do {
        if (**(int **)(local_38 + lVar10 + 0x10) == 0x18) {
          QAbstractButton::setChecked(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78),0));
          iVar7 = *(int *)(local_38 + 8);
          iVar9 = *(int *)(local_38 + 0xc);
          break;
        }
        lVar10 = lVar10 + 8;
      } while ((long)iVar9 * 8 != lVar10);
      if (iVar7 != iVar9) {
        lVar10 = (long)iVar7 << 3;
        do {
          if (**(int **)(local_38 + lVar10 + 0x10) == 8) {
            QAbstractButton::setChecked(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x80),0));
            iVar7 = *(int *)(local_38 + 8);
            iVar9 = *(int *)(local_38 + 0xc);
            break;
          }
          lVar10 = lVar10 + 8;
        } while ((long)iVar9 * 8 != lVar10);
        if (iVar7 != iVar9) {
          pDVar6 = local_38 + (long)iVar7 * 8 + 0x10;
          lVar10 = (long)iVar9 * 8 + (long)iVar7 * -8;
          do {
            if (**(int **)pDVar6 == 7) {
              QAbstractButton::setChecked
                        (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),0));
              break;
            }
            pDVar6 = pDVar6 + 8;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
      }
    }
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar8 = 0;
  if ((lVar10 != 0) && (uVar8 = 0, *(int *)(lVar10 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
  }
  QObject::connect(&local_88,uVar8,"2appPreferencesCustomPasswordProtected(bool)",param_1,
                   "1updateCustomProtectedControls()",0);
  if (local_88 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  QObject::connect(&local_90,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28),"2clicked()",param_1,
                   "1onSetPassword()",0);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else if (local_90 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  QObject::connect(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),"2clicked()",param_1,
                   "1onChangePassword()",0);
  if ((cVar4 != '\0') && (local_98 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar7 = *(int *)(local_38 + 0xc);
    if (iVar7 != *(int *)(local_38 + 8)) {
      lVar10 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar7 * -8;
      pDVar6 = local_38 + (long)iVar7 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

