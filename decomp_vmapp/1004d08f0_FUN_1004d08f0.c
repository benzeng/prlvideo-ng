
undefined8
FUN_1004d08f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *local_38;
  
  puVar3 = operator_new(8);
  *puVar3 = &PTR_FUN_100bc3578;
  local_38 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (local_38 == (long *)0x0) {
    (*(code *)PTR_FUN_100bc3580)(puVar3);
    local_38 = (long *)0x0;
  }
  else {
    *(undefined4 *)(local_38 + 1) = 1;
    local_38[2] = (long)puVar3;
    *local_38 = (long)&PTR_FUN_10111cca8;
  }
  FUN_1004d0450(param_1,param_2,param_3,param_4,param_5,param_6,&local_38);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return param_1;
}

