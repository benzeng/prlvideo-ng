
void FUN_1004667a0(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((*(uint *)(param_2 + 0x1c) < *(uint *)(param_2 + 0x14)) ||
     (0x1000 < *(uint *)(param_2 + 0x14))) {
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 0xfffffffa;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar3 = 0xfffffffc;
    }
    else {
      iVar2 = FUN_100465ab0(param_3,param_2 + 0x28,iVar1);
      if (iVar2 == iVar1) {
        if (((*(int *)(param_2 + 4) != 0) &&
            (*(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar1,
            (*(uint *)(param_3 + 4) & 0xfffffffe) == 2)) && (*(int *)(param_2 + 8) < 0)) {
          *(undefined4 *)(param_2 + 4) = 0x80000000;
        }
        return;
      }
      puVar3 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar3 = 0xfffffffd;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_10111c540,0);
}

