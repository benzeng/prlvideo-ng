
void FUN_1007356c0(QDeclarativeItem *param_1,QDeclarativeItem *param_2)

{
  void *pvVar1;
  
  QDeclarativeItem::QDeclarativeItem(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1022275a0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102227668;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1022277a0;
  pvVar1 = operator_new(0x60);
  FUN_100734cd0(pvVar1,param_1);
  *(void **)(param_1 + 0x30) = pvVar1;
  QGraphicsItem::setFlag(param_1 + 0x10,0x400,0);
  return;
}

