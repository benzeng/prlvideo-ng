
long FUN_1004dc960(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x220))(param_1);
    iVar1 = QStackedWidget::count();
    if (0 < iVar1) {
      do {
        iVar1 = (**(code **)(*param_1 + 0x220))(param_1);
        lVar2 = QStackedWidget::widget(iVar1);
        if ((((lVar2 != 0) &&
             (lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1728,&PTR_vtable_102213140,0),
             lVar2 != 0)) && (iVar1 = FUN_10044e5b0(lVar2), iVar1 == param_2)) &&
           (iVar1 = FUN_10044e5a0(lVar2), iVar1 == param_3)) {
          return lVar2;
        }
        iVar3 = iVar3 + 1;
        (**(code **)(*param_1 + 0x220))(param_1);
        iVar1 = QStackedWidget::count();
      } while (iVar3 < iVar1);
    }
  }
  return 0;
}

