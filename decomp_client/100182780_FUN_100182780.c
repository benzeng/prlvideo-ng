
void FUN_100182780(QGraphicsItem *param_1)

{
  QGraphicsItem *pQVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  pQVar1 = param_1 + 0x10;
  local_48 = *(Data **)(param_1 + 0x10);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar3 = (long)*(int *)(local_48 + 8);
      lVar6 = *(long *)pQVar1;
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_48 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_48 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar3 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar4 * 8);
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
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      QGraphicsScene::removeItem(param_1);
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
      if ((bool)local_21) goto LAB_10018286a;
    }
    QListData::dispose(local_48);
  }
LAB_10018286a:
  lVar6 = *(long *)pQVar1;
  iVar2 = *(int *)(lVar6 + 8);
  if (iVar2 != *(int *)(lVar6 + 0xc)) {
    plVar5 = (long *)(lVar6 + 0x10 + (long)iVar2 * 8);
    lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
      }
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  FUN_100186550(pQVar1);
  return;
}

