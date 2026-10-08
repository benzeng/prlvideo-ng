
void FUN_100182bb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  local_48 = *(Data **)(param_1 + 0x10);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar2 = (long)*(int *)(local_48 + 8);
      lVar1 = *(long *)(param_1 + 0x10);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_48 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_48 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  local_50 = 0.0;
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    local_50 = 0.0;
    do {
      local_30 = 1;
      if ((*(long *)local_40 != param_2) &&
         (dVar4 = (double)QGraphicsItem::zValue(), local_50 <= dVar4)) {
        local_50 = (double)QGraphicsItem::zValue();
        local_50 = local_50 + DAT_100e150e8;
      }
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100182cd5;
    }
    QListData::dispose(local_48);
  }
LAB_100182cd5:
  QGraphicsItem::setZValue(local_50);
  return;
}

