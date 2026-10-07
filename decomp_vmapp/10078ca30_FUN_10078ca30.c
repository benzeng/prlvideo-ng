
undefined8 FUN_10078ca30(long param_1,int param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x28) == -7) {
    return 0;
  }
  lVar1 = param_1 + 8;
  do {
    iVar2 = FUN_10078d0d0(lVar1);
    if (iVar2 == param_2) {
      uVar3 = FUN_10078d0c0(lVar1);
      if (param_3 <= uVar3) {
        return 1;
      }
      puVar4 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar4 = 4;
      goto LAB_10078ca7f;
    }
    iVar2 = FUN_10078d020(lVar1);
    *(int *)(param_1 + 0x28) = iVar2;
    if (iVar2 == -7) {
      return 0;
    }
  } while (iVar2 == 0);
  puVar4 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar4 = 3;
LAB_10078ca7f:
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar4,&PTR_vtable_1011a57b8,0);
}

