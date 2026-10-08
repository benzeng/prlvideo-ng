
int FUN_100139320(QListWidgetItem *param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  if ((param_2 != 0) && (iVar3 = QListWidget::row(param_1), iVar4 = iVar3, -1 < iVar3)) {
    do {
      cVar2 = FUN_100138c60(param_1,iVar3);
      if (cVar2 != '\0') {
        return iVar3;
      }
      iVar4 = iVar3 + -1;
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
    } while (bVar1);
  }
  return iVar4;
}

