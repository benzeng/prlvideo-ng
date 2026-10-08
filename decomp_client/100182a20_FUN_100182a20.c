
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100182a20(QRectF *param_1)

{
  long lVar1;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  Data *local_30;
  undefined1 local_21;
  
  QGraphicsScene::views();
  lVar1 = 0;
  if (*(int *)(local_30 + 0xc) != *(int *)(local_30 + 8)) {
    lVar1 = *(long *)(local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100182a73;
    }
    QListData::dispose(local_30);
  }
LAB_100182a73:
  if (lVar1 != 0) {
    QGraphicsScene::itemsBoundingRect();
    local_58 = local_78 + _DAT_100e15070 + _DAT_100e15090;
    dStack_50 = dStack_70 + _UNK_100e15078 + _UNK_100e15098;
    local_48 = local_68 + _DAT_100e15080 + _DAT_100e15080 + _DAT_100e150a0 + _DAT_100e150a0;
    dStack_40 = dStack_60 + _UNK_100e15088 + _UNK_100e15088 + _UNK_100e150a8 + _UNK_100e150a8;
    QGraphicsScene::setSceneRect(param_1);
    QGraphicsView::fitInView(lVar1,&local_58,1);
  }
  return;
}

