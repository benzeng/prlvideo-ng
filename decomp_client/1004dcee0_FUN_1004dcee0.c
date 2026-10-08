
undefined8 FUN_1004dcee0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x228))();
  QListWidget::currentRow();
  iVar1 = (**(code **)(*param_1 + 0x228))(param_1);
  lVar2 = QListWidget::item(iVar1);
  if (lVar2 != 0) {
    lVar2 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10);
    if (lVar2 != 0) {
      uVar3 = FUN_1004dc960(param_1,*(undefined4 *)(lVar2 + 0x3c),*(undefined4 *)(lVar2 + 0x40));
      return uVar3;
    }
  }
  return 0;
}

