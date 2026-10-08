
void FUN_1007c6450(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  local_40 = (Data *)*param_1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar2 = (long)*(int *)(local_40 + 8);
      lVar1 = *param_1;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_40 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_40 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
  if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
    do {
      local_28 = 1;
      QWidget::close();
      QObject::deleteLater();
      local_38 = local_38 + 8;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007c6542;
    }
    QListData::dispose(local_40);
  }
LAB_1007c6542:
  FUN_1007c6710(param_1);
  return;
}

