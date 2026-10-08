
void FUN_100182d30(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  QPoint *pQVar7;
  ulong uVar8;
  int iVar9;
  Data *local_40;
  
  QGraphicsScene::views();
  lVar6 = 0;
  if (*(int *)(local_40 + 0xc) != *(int *)(local_40 + 8)) {
    lVar6 = *(long *)(local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100182d89;
    }
    QListData::dispose(local_40);
  }
LAB_100182d89:
  if (lVar6 == 0) {
    return;
  }
  lVar6 = QAbstractScrollArea::viewport();
  if (lVar6 == 0) {
    return;
  }
  lVar6 = QAbstractScrollArea::viewport();
  lVar6 = *(long *)(lVar6 + 0x28);
  iVar5 = *(int *)(lVar6 + 0x14);
  iVar1 = *(int *)(lVar6 + 0x18);
  iVar2 = *(int *)(lVar6 + 0x1c);
  iVar3 = *(int *)(lVar6 + 0x20);
  pQVar7 = (QPoint *)QAbstractScrollArea::viewport();
  uVar8 = QWidget::mapToGlobal(pQVar7);
  iVar9 = (int)(uVar8 >> 0x20);
  if (*param_2 < (int)uVar8) {
    iVar5 = param_2[1];
  }
  else {
    uVar4 = ((int)uVar8 - iVar5) + iVar2;
    uVar8 = (ulong)uVar4;
    if (*param_2 <= (int)uVar4) goto LAB_100182e13;
    iVar5 = param_2[1];
  }
  QCursor::setPos((int)uVar8,iVar5);
LAB_100182e13:
  if ((param_2[1] < iVar9) || (iVar9 = (iVar9 - iVar1) + iVar3, iVar9 < param_2[1])) {
    iVar5 = QCursor::pos();
    QCursor::setPos(iVar5,iVar9);
  }
  return;
}

