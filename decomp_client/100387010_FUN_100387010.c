
void FUN_100387010(long param_1,undefined8 param_2,QPixmap *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  double dVar4;
  undefined1 local_80 [24];
  double local_68;
  undefined1 local_60 [24];
  double local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  plVar1 = *(long **)(param_1 + 0x90);
  plVar2 = (long *)plVar1[7];
  QPixmap::operator=((QPixmap *)(plVar2 + 6),param_3);
  (**(code **)(*plVar2 + 0xa8))(plVar2);
  cVar3 = QPixmap::isNull();
  dVar4 = 0.0;
  if (cVar3 == '\0') {
    dVar4 = DAT_100e19928;
  }
  QGraphicsLinearLayout::setSpacing(dVar4);
  (**(code **)(*plVar1 + 0xa8))(plVar1);
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100383870(*(undefined8 *)(param_1 + 0x90),param_2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003870cd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003870cd:
  QGraphicsWidget::adjustSize();
  (**(code **)(**(long **)(param_1 + 0x90) + 0x88))(local_60);
  QGraphicsLayoutItem::setMinimumHeight(local_48);
  (**(code **)(**(long **)(param_1 + 0x90) + 0x88))(local_80);
  QGraphicsLayoutItem::setMaximumHeight(local_68);
  return;
}

