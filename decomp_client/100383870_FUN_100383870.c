
void FUN_100383870(long *param_1,undefined8 param_2,long *param_3)

{
  QString *pQVar1;
  QGraphicsLayoutItem *pQVar2;
  long lVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  
  pQVar1 = (QString *)param_1[8];
  QString::simplified();
  CGraphicsTextLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1003838d0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003838d0:
  pQVar1 = (QString *)param_1[9];
  QString::simplified();
  CGraphicsTextLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10038391e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10038391e:
  QGraphicsItem::setVisible((bool)((char)param_1[9] + '\x10'));
  pQVar2 = (QGraphicsLayoutItem *)param_1[6];
  if (*(int *)(*param_3 + 4) == 0) {
    QGraphicsLinearLayout::removeItem(pQVar2);
  }
  else {
    lVar3 = (**(code **)(*(long *)pQVar2 + 0x48))(pQVar2,2);
    if (lVar3 == 0) {
      QGraphicsLinearLayout::insertItem((int)param_1[6],(QGraphicsLayoutItem *)0x2);
    }
  }
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}

