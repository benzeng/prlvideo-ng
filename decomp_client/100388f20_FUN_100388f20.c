
void FUN_100388f20(QGraphicsWidget *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_1021e17a8;
  *(undefined **)param_1 = PTR_vtable_1021e17a8 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar1 + 0x178;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x2b0;
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x30));
  QGraphicsWidget::~QGraphicsWidget(param_1);
  return;
}

