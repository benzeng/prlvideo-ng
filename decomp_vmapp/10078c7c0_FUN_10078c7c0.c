
void FUN_10078c7c0(long *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 local_20 [4];
  undefined4 local_1c;
  
  *param_1 = 0;
  uVar4 = 0;
  if (*param_2 != 0) {
    uVar4 = *(undefined8 *)(*param_2 + 0x10);
  }
  cVar1 = FUN_100790630(uVar4,0,local_20,param_1,&local_1c);
  if (cVar1 == '\0') {
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,&PTR_vtable_1011a57b8,0);
  }
  uVar4 = 0;
  if (*param_1 != 0) {
    uVar4 = *(undefined8 *)(*param_1 + 0x10);
  }
  iVar2 = FUN_10078cf30(param_1 + 1,uVar4,local_1c,0x20);
  *(int *)(param_1 + 5) = iVar2;
  if ((iVar2 != -7) && (iVar2 != 0)) {
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,&PTR_vtable_1011a57b8,0);
  }
  if (**(uint **)(*param_1 + 0x10) < 2) {
    return;
  }
  puVar3 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar3 = 2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,&PTR_vtable_1011a57b8,0);
}

