
void FUN_100578b10(long param_1,int param_2,undefined4 param_3,long param_4)

{
  QWidget *pQVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1005782c0();
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x000100578b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x28) + 0x78))(*(long **)(param_1 + 0x28),0x80000275);
      return;
    case 2:
      FUN_1005785c0();
      return;
    case 3:
      FUN_100578100(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 4:
      QProgressBar::setValue((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68));
      return;
    case 5:
      QProgressBar::setValue((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68));
      return;
    case 6:
      FUN_100578410(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 7:
      pQVar1 = *(QWidget **)(*(long *)(param_1 + 0x18) + 0x28);
      if (**(int **)(param_4 + 8) == 0) {
        QStackedWidget::setCurrentWidget(pQVar1);
        return;
      }
      QStackedWidget::setCurrentWidget(pQVar1);
      return;
    }
  }
  return;
}

