
undefined4 FUN_1004dc700(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x228))();
  QListWidget::currentRow();
  iVar1 = (**(code **)(*param_1 + 0x228))(param_1);
  lVar2 = QListWidget::item(iVar1);
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined4 *)(lVar2 + 0x3c);
    }
  }
  return uVar3;
}

