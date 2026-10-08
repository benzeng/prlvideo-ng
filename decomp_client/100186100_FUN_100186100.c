
void FUN_100186100(long param_1)

{
  long *plVar1;
  long lVar2;
  QGraphicsItemGroup *pQVar3;
  long lVar4;
  long lVar5;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  local_48 = *(Data **)(param_1 + 0x30);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar4 = (long)*(int *)(local_48 + 8);
      lVar2 = *(long *)(param_1 + 0x30);
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_48 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_48 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar4 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar5 * 8);
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
      plVar1 = *(long **)local_40;
      lVar2 = QGraphicsItem::scene();
      if (lVar2 == 0) {
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1);
        }
      }
      else {
        pQVar3 = (QGraphicsItemGroup *)QGraphicsItem::scene();
        QGraphicsScene::destroyItemGroup(pQVar3);
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
      if ((bool)local_21) goto LAB_100186220;
    }
    QListData::dispose(local_48);
  }
LAB_100186220:
  FUN_1001866c0((long *)(param_1 + 0x30));
  FUN_100186280(param_1);
  return;
}

