
undefined8 FUN_100465fb0(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_2 + 0x24) == 1) {
    FUN_100466100();
  }
  else {
    if (*(int *)(param_2 + 0x24) != 0) {
      puVar1 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar1 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar1,&PTR_vtable_10111c540,0);
    }
    FUN_100466020();
  }
  return 0;
}

