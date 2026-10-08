
void FUN_100138ff0(QPoint *param_1,long param_2)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  int iVar7;
  QVariant local_38;
  undefined8 local_28;
  
  dVar1 = *(double *)(param_2 + 0x20);
  if (0.0 <= dVar1) {
    iVar4 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    iVar4 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar1);
  }
  dVar1 = *(double *)(param_2 + 0x28);
  if (0.0 <= dVar1) {
    iVar7 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    iVar7 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar1);
  }
  local_28 = CONCAT44(iVar7,iVar4);
  plVar6 = (long *)QListWidget::itemAt(param_1);
  if (plVar6 != (long *)0x0) {
    uVar5 = QListWidget::row((QListWidgetItem *)param_1);
    cVar2 = FUN_100138c60(param_1,uVar5);
    if (cVar2 == '\0') {
      QAbstractItemView::mousePressEvent((QMouseEvent *)param_1);
    }
    else {
      (**(code **)(*plVar6 + 0x20))(&local_38,plVar6,0x102);
      uVar3 = QVariant::toBool();
      QVariant::~QVariant(&local_38);
      uVar5 = QListWidget::row((QListWidgetItem *)param_1);
      FUN_100138e10(param_1,uVar5,uVar3);
    }
  }
  return;
}

