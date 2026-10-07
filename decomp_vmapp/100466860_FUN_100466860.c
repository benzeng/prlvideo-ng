
void FUN_100466860(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(code **)(param_1 + 0x18) == (code *)0x0) {
    *(undefined4 *)(param_2 + 0x20) = 0xfffffffb;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x18))
                      (param_3 + 8,param_3 + 0x18,*(undefined8 *)(param_1 + 0x20));
    *(int *)(param_2 + 0x20) = iVar1;
    if (-1 < iVar1) {
      uVar2 = FUN_100465a90(param_3);
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      return;
    }
  }
  puVar3 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar3 = 0xfffffffb;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_10111c540,0);
}

