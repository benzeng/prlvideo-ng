
undefined1 FUN_100138b00(QListWidgetItem *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 auVar6 [16];
  undefined1 local_68 [16];
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  local_58 = *(Data **)(param_1 + 0x30);
  local_38 = param_2;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(param_1 + 0x30);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      auVar6 = QListWidget::visualItemRect(param_1);
      local_68 = auVar6;
      cVar2 = QRect::contains((QPoint *)local_68,SUB81(&local_38,0));
      uVar5 = 1;
      if (cVar2 != '\0') goto LAB_100138bf1;
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  uVar5 = 0;
LAB_100138bf1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar5;
      }
      local_29 = 0;
    }
    QListData::dispose(local_58);
  }
  return uVar5;
}

