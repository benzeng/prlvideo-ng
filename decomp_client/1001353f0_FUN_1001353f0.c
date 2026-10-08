
undefined8 FUN_1001353f0(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  Data *local_28;
  undefined1 local_19;
  
  uVar5 = 0;
  if (param_2 == 0) {
    return 0;
  }
  WidgetUtils::getAllWidgetActionsRecursive((QWidget *)&local_28,SUB81(param_2,0));
  local_48 = local_28;
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 == 0) {
      QListData::detach((int)&local_48);
      lVar2 = (long)*(int *)(local_48 + 8);
      if ((local_28 + (long)*(int *)(local_28 + 8) * 8 != local_48 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_48 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar2 * 8 + 0x10,local_28 + (long)*(int *)(local_28 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      uVar5 = *(undefined8 *)local_40;
      cVar1 = QAction::isChecked();
      iVar4 = 1;
      if (cVar1 != '\0') goto LAB_1001354d2;
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  iVar4 = 2;
LAB_1001354d2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001354f8;
    }
    QListData::dispose(local_48);
  }
LAB_1001354f8:
  if (iVar4 == 2) {
    uVar5 = 0;
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
    QListData::dispose(local_28);
  }
  return uVar5;
}

