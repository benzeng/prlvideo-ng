
void FUN_10054ec70(long param_1,int param_2,undefined4 param_3,long param_4)

{
  QSize *pQVar1;
  QPoint *pQVar2;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10054e4d0(param_1);
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010054ecc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x28) + 0x78))(*(long **)(param_1 + 0x28),0x80000275);
      return;
    case 2:
      FUN_10054e7a0();
      return;
    case 3:
      QProgressBar::setValue((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8));
      return;
    case 4:
      FUN_10054e290(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 5:
      QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x80));
      return;
    case 6:
      pQVar1 = *(QSize **)(*(long *)(param_1 + 0x18) + 200);
      (**(code **)((long)*pQVar1 + 0x70))(pQVar1);
      QWidget::setFixedSize(pQVar1);
      pQVar2 = *(QPoint **)(*(long *)(param_1 + 0x18) + 200);
      QWidget::pos();
      QWidget::move(pQVar2);
    }
  }
  return;
}

