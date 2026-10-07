
void FUN_10078c8f0(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_10078d020(param_1 + 8);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((iVar1 != -7) && (iVar1 != 0)) {
    puVar2 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar2 = 3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar2,&PTR_vtable_1011a57b8,0);
  }
  return;
}

