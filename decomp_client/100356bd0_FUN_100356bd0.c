
QWidget * FUN_100356bd0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  QWidget *pQVar3;
  QSize local_28;
  undefined8 local_20;
  
  uVar2 = FUN_100370280();
  pQVar3 = (QWidget *)FUN_1003704b0(uVar2,param_1,DAT_100e152b8);
  if (param_2 == 0) {
    local_20 = 0;
    local_28.field0_0x0 = 0xffffffff;
    local_28.field1_0x4 = 0xffffffff;
  }
  else {
    local_20 = QWidget::pos();
    lVar1 = *(long *)(param_2 + 0x28);
    local_28.field0_0x0 = (*(int *)(lVar1 + 0x1c) + 1) - *(int *)(lVar1 + 0x14);
    local_28.field1_0x4 = (*(int *)(lVar1 + 0x20) + 1) - *(int *)(lVar1 + 0x18);
  }
  WidgetUtils::showWindow(pQVar3,(QPoint *)&local_20,&local_28);
  return pQVar3;
}

