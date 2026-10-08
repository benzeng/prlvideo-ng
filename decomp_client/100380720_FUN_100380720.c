
undefined8 * FUN_100380720(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_shared_null_1021e1288;
  if (param_2 == (undefined8 *)0x0) {
    *param_1 = PTR_shared_null_1021e1288;
    iVar3 = *(int *)puVar2;
    if (1 < iVar3 + 1U) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
      iVar3 = *(int *)puVar2;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    if (iVar3 != -1) {
      if (iVar3 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if (*(int *)puVar2 != 0) {
          return param_1;
        }
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
  else {
    piVar1 = (int *)*param_2;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  return param_1;
}

