
void FUN_100138f10(QMouseEvent *param_1,long param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if ((*(byte *)(param_2 + 0x54) & 3) == 0) {
    QListView::mouseMoveEvent(param_1);
  }
  dVar1 = *(double *)(param_2 + 0x20);
  if (0.0 <= dVar1) {
    iVar3 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    iVar3 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar1);
  }
  dVar1 = *(double *)(param_2 + 0x28);
  if (0.0 <= dVar1) {
    iVar4 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    iVar4 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar1);
  }
  cVar2 = FUN_100138b00(param_1,CONCAT44(iVar4,iVar3));
  if (cVar2 != '\0') {
    return;
  }
  QListView::mouseMoveEvent(param_1);
  return;
}

