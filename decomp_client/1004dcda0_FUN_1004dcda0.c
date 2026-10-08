
undefined8 FUN_1004dcda0(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  (**(code **)(*param_1 + 0x228))();
  QListWidget::currentRow();
  iVar3 = (**(code **)(*param_1 + 0x228))(param_1);
  lVar4 = QListWidget::item(iVar3);
  if (lVar4 != 0) {
    lVar4 = ___dynamic_cast(lVar4,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10);
    if (lVar4 != 0) {
      uVar5 = FUN_1003b0ad0(param_1[8]);
      (**(code **)(*param_1 + 0x228))(param_1);
      QListWidget::currentRow();
      iVar3 = (**(code **)(*param_1 + 0x228))(param_1);
      uVar6 = QListWidget::item(iVar3);
      puVar2 = PTR_typeinfo_1021e16d0;
      lVar4 = ___dynamic_cast(uVar6,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10);
      uVar1 = *(undefined4 *)(lVar4 + 0x3c);
      (**(code **)(*param_1 + 0x228))(param_1);
      QListWidget::currentRow();
      iVar3 = (**(code **)(*param_1 + 0x228))(param_1);
      uVar6 = QListWidget::item(iVar3);
      lVar4 = ___dynamic_cast(uVar6,puVar2,&PTR_vtable_1022740f0,0x10);
      uVar5 = FUN_1003e5be0(uVar5,uVar1,*(undefined4 *)(lVar4 + 0x40));
      return uVar5;
    }
  }
  return 0;
}

