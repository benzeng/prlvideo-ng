
void FUN_1003890e0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_1021e17a8;
  param_1[-4] = PTR_vtable_1021e17a8 + 0x10;
  param_1[-2] = puVar1 + 0x178;
  *param_1 = puVar1 + 0x2b0;
  QPixmap::~QPixmap((QPixmap *)(param_1 + 2));
  QGraphicsWidget::~QGraphicsWidget((QGraphicsWidget *)(param_1 + -4));
  return;
}

