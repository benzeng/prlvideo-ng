
undefined8 FUN_100181e90(undefined8 *param_1)

{
  QPointF *pQVar1;
  undefined8 uVar2;
  
  pQVar1 = (QPointF *)*param_1;
  if (pQVar1 == (QPointF *)0x0) {
    uVar2 = 0;
  }
  else if ((((double)param_1[1] != DAT_100e150e0) || ((double)param_1[2] != DAT_100e150e0)) ||
          (NAN((double)param_1[2]) || NAN(DAT_100e150e0))) {
    QGraphicsItem::pos();
    QGraphicsItem::pos();
    QGraphicsItem::setPos(pQVar1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

