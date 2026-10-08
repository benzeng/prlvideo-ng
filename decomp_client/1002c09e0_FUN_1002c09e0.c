
undefined8 FUN_1002c09e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  QApplication::topLevelWidgets();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar2 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_58 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar2 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar3 * 8);
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
    if (*(int *)local_60 == 0) {
LAB_1002c0aa5:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1002c0aa5;
    }
    if (local_40 == 0) goto LAB_1002c0b7d;
  }
  if (local_50 != local_48) {
    do {
      plVar1 = *(long **)local_50;
      FUN_100060bb0();
      lVar3 = FUN_100060320(plVar1);
      lVar2 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        lVar2 = *(long *)(param_1 + 0x20);
      }
      if ((((lVar3 == lVar2) &&
           (lVar2 = (**(code **)(*plVar1 + 8))(plVar1,"CControlCenterWindow"), lVar2 == 0)) &&
          (lVar2 = (**(code **)(*plVar1 + 8))(plVar1,"CVmConsoleWindow"), lVar2 == 0)) &&
         (lVar2 = (**(code **)(*plVar1 + 8))(plVar1,"CVmConsoleWidget"), lVar2 == 0)) {
        QWidget::close();
      }
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_1002c0b7d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return 0;
}

