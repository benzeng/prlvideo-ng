
undefined8 * FUN_1004dac60(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_40 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  iVar4 = 0;
  while( true ) {
    (**(code **)(*param_2 + 0x228))(param_2);
    iVar1 = QListWidget::count();
    if (iVar1 <= iVar4) break;
    iVar1 = (**(code **)(*param_2 + 0x228))(param_2);
    lVar2 = QListWidget::item(iVar1);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10);
    }
    local_40[0] = uVar3;
    FUN_1004dd560(param_1,local_40);
    iVar4 = iVar4 + 1;
  }
  return param_1;
}

