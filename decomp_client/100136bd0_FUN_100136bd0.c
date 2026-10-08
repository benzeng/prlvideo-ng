
void FUN_100136bd0(QPoint *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(long *)(param_1 + 0x28);
  iVar2 = *(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14);
  iVar3 = *(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18);
  local_20 = CONCAT44(iVar3,iVar2);
  local_28 = 0;
  local_30 = 0;
  local_28 = QWidget::mapToGlobal(param_1);
  local_20 = CONCAT44(iVar3 + (int)((ulong)local_28 >> 0x20),iVar2 + (int)local_28);
  local_38 = QCursor::pos();
  QRect::contains((QPoint *)&local_28,SUB81(&local_38,0));
  return;
}

