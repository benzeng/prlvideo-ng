
undefined8 * FUN_10078a930(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_2 + 0x18) == 0) || (*(int *)(*(long *)(param_2 + 0x18) + 4) == 0)) ||
     (*(long *)(param_2 + 0x20) == 0)) {
    *param_1 = 0;
  }
  else {
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    FUN_10018c250(param_1,uVar1);
  }
  return param_1;
}

