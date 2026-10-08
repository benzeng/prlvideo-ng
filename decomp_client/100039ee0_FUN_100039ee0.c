
void FUN_100039ee0(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int extraout_var;
  int extraout_var_00;
  double local_38;
  double local_30;
  
  *(undefined1 *)(param_1 + 0x5a) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *param_2;
  iVar4 = QApplication::desktop();
  QDesktopWidget::screenGeometry(iVar4);
  local_30 = (double)(((1 - param_2[1]) + extraout_var_00) - extraout_var);
  local_38 = (double)iVar1;
  cVar3 = FUN_10037b880(uVar2,&local_38);
  if (cVar3 != '\0') {
    FUN_100091580(param_1);
  }
  *(bool *)(param_1 + 0x59) = cVar3 != '\0';
  return;
}

