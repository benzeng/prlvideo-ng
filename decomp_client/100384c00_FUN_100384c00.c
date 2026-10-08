
long FUN_100384c00(undefined8 param_1,double param_2,long param_3,long *param_4)

{
  double dVar1;
  double dVar2;
  
  (**(code **)(*param_4 + 0x88))();
  QGraphicsItem::pos();
  dVar1 = param_2;
  QGraphicsWidget::size();
  dVar2 = (dVar1 + param_2 + DAT_100e12b90) - *(double *)(param_3 + 8);
  *(double *)(param_3 + 8) = *(double *)(param_3 + 8) + dVar2;
  dVar2 = *(double *)(param_3 + 0x18) - dVar2;
  *(double *)(param_3 + 0x18) = dVar2;
  dVar1 = (double)QGraphicsLinearLayout::spacing();
  dVar2 = dVar2 - dVar1;
  dVar1 = dVar2;
  QGraphicsWidget::size();
  *(double *)(param_3 + 0x18) = dVar2 - dVar1;
  return param_3;
}

