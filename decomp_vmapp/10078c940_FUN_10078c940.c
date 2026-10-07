
undefined8 FUN_10078c940(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x28) == -7) {
LAB_10078c9a0:
    uVar2 = 0;
  }
  else {
    while( true ) {
      iVar1 = FUN_10078d0d0(param_1 + 8);
      uVar2 = 1;
      if (iVar1 == param_2) break;
      iVar1 = FUN_10078d020(param_1 + 8);
      *(int *)(param_1 + 0x28) = iVar1;
      if (iVar1 == -7) goto LAB_10078c9a0;
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)___cxa_allocate_exception(4);
        *puVar3 = 3;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar3,&PTR_vtable_1011a57b8,0);
      }
    }
  }
  return uVar2;
}

