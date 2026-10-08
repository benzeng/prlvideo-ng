
void FUN_100363c50(long *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_10035db20(param_1[1],0x10,0);
  cVar1 = FUN_10035dcf0(param_1[1],2);
  if (cVar1 == '\0') {
    QWidget::activateWindow();
    QWidget::setFocus(param_2,7);
  }
                    /* WARNING: Could not recover jumptable at 0x000100363cba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_2,param_3,0);
  return;
}

