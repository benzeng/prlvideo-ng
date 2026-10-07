
void FUN_1003e9950(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_1003e06d0(param_1,param_2,0x930,param_3);
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_100bbef60;
  *(int *)(param_1 + 5) = (int)param_2;
  uVar2 = FUN_100707430(0xffffffff,0x60);
  plVar1 = param_1 + 0x25;
  param_1[0x27] = uVar2;
  puVar3 = operator_new(0x720);
  puVar3[0xe3] = PTR_shared_null_100ba20d0;
  *puVar3 = &PTR_FUN_100bbf210;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  *plVar1 = (long)puVar3;
  if ((long *)param_1[6] != (long *)0x0) {
    if ((param_1[0x27] != 0) && (*plVar1 != 0)) {
      return;
    }
    (**(code **)(*(long *)param_1[6] + 0x10))();
  }
  param_1[6] = 0;
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 0x10))();
  }
  param_1[0x27] = 0;
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 8))();
  }
  *plVar1 = 0;
  puVar3 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar3 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
}

