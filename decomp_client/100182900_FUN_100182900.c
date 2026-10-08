
undefined8 FUN_100182900(void)

{
  undefined8 uVar1;
  Data *local_20;
  
  QGraphicsScene::views();
  uVar1 = 0;
  if (*(int *)(local_20 + 0xc) != *(int *)(local_20 + 8)) {
    uVar1 = *(undefined8 *)(local_20 + (long)*(int *)(local_20 + 8) * 8 + 0x10);
  }
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
    }
    QListData::dispose(local_20);
  }
  return uVar1;
}

