
void FUN_100182e50(QGraphicsSceneMouseEvent *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  QPoint *pQVar4;
  undefined8 local_48;
  undefined1 local_39;
  Data_conflict local_38 [2];
  
  QGraphicsScene::views();
  pQVar4 = (QPoint *)0x0;
  if (*(int *)(local_38[0].field7 + 0xc) != *(int *)(local_38[0].field7 + 8)) {
    pQVar4 = *(QPoint **)
              ((Data *)(local_38[0].field7 + 0x10) + (long)*(int *)(local_38[0].field7 + 8) * 8);
  }
  if (*(int *)local_38[0].field15 != -1) {
    if (*(int *)local_38[0].field15 != 0) {
      LOCK();
      *(int *)local_38[0].field15 = *(int *)local_38[0].field15 + -1;
      local_39 = *(int *)local_38[0].field15 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100182ea7;
    }
    QListData::dispose((Data *)local_38[0].field15);
  }
LAB_100182ea7:
  if ((pQVar4 != (QPoint *)0x0) && (lVar2 = QAbstractScrollArea::viewport(), lVar2 != 0)) {
    lVar2 = QAbstractScrollArea::viewport();
    lVar2 = *(long *)(lVar2 + 0x28);
    QGraphicsSceneMouseEvent::screenPos();
    local_48 = QWidget::mapFromGlobal(pQVar4);
    cVar1 = QRect::contains((QPoint *)(lVar2 + 0x14),SUB81(&local_48,0));
    if (cVar1 != '\0') {
      QGraphicsScene::mouseMoveEvent(param_1);
      uVar3 = QGraphicsSceneMouseEvent::buttons();
      if (((uVar3 & 1) != 0) && (lVar2 = FUN_100182960(param_1), lVar2 != 0)) {
        QGraphicsItem::data((int)local_38);
        cVar1 = QVariant::toBool();
        QVariant::~QVariant((QVariant *)local_38);
        if (cVar1 != '\0') {
          FUN_100182f90(param_1,lVar2);
        }
      }
    }
  }
  return;
}

