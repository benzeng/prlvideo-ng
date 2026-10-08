
undefined8 * FUN_100aab4f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_100be3fc0(param_3);
  plVar3 = operator_new(0x20);
  *(undefined4 *)(plVar3 + 1) = 1;
  plVar3[2] = lVar2;
  *plVar3 = (long)&PTR_FUN_102281880;
  plVar3[3] = (long)FUN_100c7cd70;
  if (lVar2 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_100aaaea0(param_1,lVar2);
  }
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return param_1;
}

