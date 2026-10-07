
void FUN_100466900(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(uint *)(param_2 + 0x1c) < 0x1001) {
    uVar1 = 0;
    if (*(int *)(param_2 + 8) < 0) {
      uVar1 = FUN_100465b40(param_3,param_2 + 0x28);
    }
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    uVar1 = FUN_100465bd0(param_3);
    *(undefined4 *)(param_2 + 0x18) = uVar1;
    return;
  }
  puVar2 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar2 = 0xfffffffa;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_10111c540,0);
}

