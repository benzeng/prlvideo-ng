
undefined8 * FUN_1004ff5c0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = operator_new(0x28);
  *(undefined2 *)(plVar2 + 1) = *(undefined2 *)(param_2 + 0x1a);
  *plVar2 = (long)&PTR_FUN_100bc3f28;
  piVar1 = *(int **)(param_2 + 0x20);
  plVar2[2] = (long)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QMutex::QMutex((QMutex *)(plVar2 + 3),0);
  plVar2[4] = (long)PTR_shared_null_100ba2180;
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar3 == (undefined8 *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = plVar2;
    *puVar3 = &PTR_FUN_10111cca8;
  }
  *param_1 = puVar3;
  return param_1;
}

