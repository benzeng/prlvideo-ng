
long * FUN_100182b00(QPointF *param_1,QTransform *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  Data *local_38;
  
  QGraphicsScene::views();
  lVar4 = 0;
  if (*(int *)(local_38 + 0xc) != *(int *)(local_38 + 8)) {
    lVar4 = *(long *)(local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100182b57;
    }
    QListData::dispose(local_38);
  }
LAB_100182b57:
  plVar3 = (long *)0x0;
  if (lVar4 != 0) {
    QGraphicsView::transform();
    plVar2 = (long *)QGraphicsScene::itemAt(param_1,param_2);
    plVar3 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
      plVar3 = (long *)0x0;
      if (iVar1 == 0x10001) {
        plVar3 = plVar2;
      }
    }
  }
  return plVar3;
}

