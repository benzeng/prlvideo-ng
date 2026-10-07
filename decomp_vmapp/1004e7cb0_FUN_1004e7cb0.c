
undefined4 FUN_1004e7cb0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(int *)(lVar2 + 4) != 3) {
    uVar3 = ___cxa_allocate_exception(0x10);
    local_28[0] = QString::fromAscii_helper("invalid bit_box type (not sareBBTypeQuint32)",0x2c);
    FUN_1004eb830(uVar3,local_28);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar3,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  if (*(int *)(lVar2 + 8) == 4) {
    uVar1 = *(undefined4 *)(lVar2 + 0xc);
    *(long *)(param_1 + 8) = lVar2 + 0x10;
    return uVar1;
  }
  uVar3 = ___cxa_allocate_exception(0x10);
  local_30 = QString::fromAscii_helper("invalid size for quint32",0x18);
  FUN_1004eb830(uVar3,&local_30);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar3,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
}

