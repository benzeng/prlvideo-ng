
undefined8 FUN_10078cac0(long param_1,int param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x28) != -7) {
    lVar1 = param_1 + 8;
    while( true ) {
      iVar2 = FUN_10078d0d0(lVar1);
      if (iVar2 == param_2) {
        uVar4 = FUN_10078d0a0(lVar1);
        FUN_10078d0c0(lVar1);
        std::string::assign(param_3,uVar4);
        return 1;
      }
      iVar2 = FUN_10078d020();
      *(int *)(param_1 + 0x28) = iVar2;
      if (iVar2 == -7) break;
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)___cxa_allocate_exception(4);
        *puVar3 = 3;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar3,&PTR_vtable_1011a57b8,0);
      }
    }
  }
  return 0;
}

