
void FUN_100137610(QWidget *param_1)

{
  void *pvVar1;
  
  CGraphicsProxyWidget::CGraphicsProxyWidget();
  *(undefined ***)param_1 = &PTR_FUN_1021fa258;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fa438;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021fa570;
  pvVar1 = operator_new(0x40);
  FUN_100136040(pvVar1,0);
  QWidget::setWindowFlags(pvVar1,*(uint *)(*(long *)((long)pvVar1 + 0x28) + 0xc) | 0x20000000);
  QWidget::setAttribute(pvVar1,0x78,1);
  QGraphicsProxyWidget::setWidget(param_1);
  return;
}

