
void FUN_10072db40(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x20))();
  }
  pvVar1 = operator_new(0x30);
  FUN_10072e7c0(pvVar1,param_1);
  *(void **)(param_1 + 0xa0) = pvVar1;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x90) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
  }
  FUN_10072e810(pvVar1,uVar2);
  FUN_10072f3d0(*(undefined8 *)(param_1 + 0xa0),param_1);
  FUN_10072f470(*(undefined8 *)(param_1 + 0xa0));
  return;
}

