
void FUN_100466960(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_3 + 4);
  if (iVar1 == 1) {
    FUN_1004667a0(param_1,param_2,param_3);
    iVar1 = *(int *)(param_3 + 4);
  }
  if (iVar1 == 2) {
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
        iVar1 = *(int *)(param_3 + 4);
        goto LAB_1004669bc;
      }
    }
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 0xfffffffb;
LAB_100466a27:
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,&PTR_vtable_10111c540,0);
  }
LAB_1004669bc:
  if (iVar1 == 3) {
    if (0x1000 < *(uint *)(param_2 + 0x1c)) {
      puVar3 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar3 = 0xfffffffa;
      goto LAB_100466a27;
    }
    uVar2 = 0;
    if (*(int *)(param_2 + 8) < 0) {
      uVar2 = FUN_100465b40(param_3,param_2 + 0x28);
    }
    *(undefined4 *)(param_2 + 0x14) = uVar2;
    uVar2 = FUN_100465bd0(param_3);
    *(undefined4 *)(param_2 + 0x18) = uVar2;
  }
  return;
}

