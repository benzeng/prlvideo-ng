
void FUN_10003a060(long param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int extraout_var;
  int extraout_var_00;
  double local_40;
  double local_38;
  
  iVar1 = *param_2;
  iVar3 = QApplication::desktop();
  QDesktopWidget::screenGeometry(iVar3);
  iVar3 = ((1 - param_2[1]) + extraout_var_00) - extraout_var;
  local_40 = (double)iVar1;
  local_38 = (double)iVar3;
  cVar2 = FUN_10037b880(*(undefined8 *)(param_1 + 0x18),&local_40);
  if (cVar2 != '\0') {
    FUN_100091bd0(param_1,CONCAT44(iVar3,iVar1));
  }
  *(bool *)(param_1 + 0x5a) = cVar2 != '\0';
  return;
}

