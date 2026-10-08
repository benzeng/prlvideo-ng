
undefined8 FUN_1004dcce0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x228))();
  lVar2 = QListWidget::item(iVar1);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10);
  }
  return uVar3;
}

