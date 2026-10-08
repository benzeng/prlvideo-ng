
void FUN_1007a81d0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  QPainter local_60 [8];
  QPixmap local_58 [32];
  double local_38;
  double local_30;
  
  cVar5 = (**(code **)(**(long **)(param_1 + 0x38) + 0x80))();
  if (cVar5 != '\0') {
    FUN_1007a7c20(local_58);
    QPainter::QPainter(local_60,(QPaintDevice *)(param_1 + 0x10));
    iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x1c);
    iVar2 = *(int *)(*(long *)(param_1 + 0x28) + 0x14);
    iVar6 = QPixmap::width();
    iVar3 = *(int *)(*(long *)(param_1 + 0x28) + 0x18);
    iVar4 = *(int *)(*(long *)(param_1 + 0x28) + 0x20);
    iVar7 = QPixmap::height();
    local_38 = (double)((((iVar1 + 1) - iVar2) - iVar6) / 2);
    local_30 = (double)((((iVar4 + 1) - iVar3) - iVar7) / 2);
    QPainter::drawPixmap((QPointF *)local_60,(QPixmap *)&local_38);
    QPainter::~QPainter(local_60);
    QPixmap::~QPixmap(local_58);
  }
  return;
}

