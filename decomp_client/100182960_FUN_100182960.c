
long * FUN_100182960(void)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  Data *local_28;
  
  QGraphicsScene::selectedItems();
  plVar3 = (long *)0x0;
  if (*(int *)(local_28 + 0xc) != *(int *)(local_28 + 8)) {
    plVar1 = *(long **)(local_28 + (long)*(int *)(local_28 + 8) * 8 + 0x10);
    plVar3 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
      plVar3 = (long *)0x0;
      if (iVar2 == 0x10001) {
        plVar3 = plVar1;
      }
    }
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return plVar3;
      }
    }
    QListData::dispose(local_28);
  }
  return plVar3;
}

