
undefined4 * FUN_100466650(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100466400();
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = *puVar1;
    FUN_100465a50(puVar1,param_2[4]);
    return puVar1;
  }
  puVar1 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar1 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&PTR_vtable_10111c540,0);
}

