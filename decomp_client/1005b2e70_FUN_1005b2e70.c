
void FUN_1005b2e70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  Connection local_60 [8];
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  Data *local_38;
  undefined1 local_29;
  
  CAbstractWizardModel::wizardCtrl();
  lVar1 = CWizardController::parentWidget();
  if (lVar1 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  CMessageManager::instance();
  CMessageManager::getMessageWindowsForParent((QWidget *)&local_38);
  if (*(int *)(local_38 + 0xc) == *(int *)(local_38 + 8)) {
    lVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    if ((*(char *)(lVar1 + 0x148) == '\0') || (*(int *)(param_1 + 0x7c) != -0x7ffffcdb)) {
      lVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      if (*(char *)(lVar1 + 0x6e) == '\0') {
        FUN_1005b2c70(param_1);
      }
      else {
        uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        lVar1 = FUN_1005b87b0(uVar2);
        if (lVar1 != 0) {
          uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
          uVar2 = FUN_1005b87b0(uVar2);
          uVar2 = FUN_10018c280(uVar2);
          local_78 = 3;
          local_70 = 0;
          local_74 = 0;
          local_6c = 0xffff;
          local_68 = 0;
          local_64 = 0;
          FUN_10031bef0(uVar2,0,&local_78);
        }
      }
      uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
      FUN_1005b8760(uVar2,0);
      CAbstractWizardModel::wizardCtrl();
      CWizardController::goBack();
    }
  }
  else {
    local_58 = local_38;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 == 0) {
        QListData::detach((int)&local_58);
        lVar1 = (long)*(int *)(local_58 + 8);
        if ((local_38 + (long)*(int *)(local_38 + 8) * 8 != local_58 + lVar1 * 8) &&
           (lVar3 = *(int *)(local_58 + 0xc) - lVar1,
           lVar3 != 0 && lVar1 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar1 * 8 + 0x10,local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10,
                  lVar3 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + 1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
      }
    }
    local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
    local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      do {
        local_40 = 1;
        QObject::connect(local_60,*(undefined8 *)local_50,"2destroyed()",param_1,
                         "1waitForMessagesClosed()",0x80);
        QMetaObject::Connection::~Connection(local_60);
        local_50 = local_50 + 8;
      } while (local_50 != local_48);
    }
    local_40 = 1;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005b30b1;
      }
      QListData::dispose(local_58);
    }
  }
LAB_1005b30b1:
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
    QListData::dispose(local_38);
  }
  return;
}

