
undefined8 *
FUN_1003f6460(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *in_RAX;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *local_28;
  
  local_28 = in_RAX;
  FUN_1003f6300(&local_28);
  if ((local_28 == (long *)0x0) || (local_28[2] == 0)) {
    puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 1;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_101119bd0;
      puVar4 = puVar3;
    }
    *param_1 = puVar4;
    if (local_28 == (long *)0x0) {
      return param_1;
    }
  }
  else {
    FUN_1003f7df0(param_1,local_28[2],param_4);
  }
  LOCK();
  plVar1 = local_28 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*local_28 + 0x10))(local_28);
  }
  return param_1;
}

