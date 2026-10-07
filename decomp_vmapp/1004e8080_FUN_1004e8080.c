
undefined8 FUN_1004e8080(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(int *)(lVar1 + 4) != 6) {
    uVar2 = ___cxa_allocate_exception(0x10);
    local_28[0] = QString::fromAscii_helper("invalid bit_box type (not sareBBTypeQint64)",0x2b);
    FUN_1004eb830(uVar2,local_28);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  if (*(int *)(lVar1 + 8) == 8) {
    uVar2 = *(undefined8 *)(lVar1 + 0xc);
    *(long *)(param_1 + 8) = lVar1 + 0x14;
    return uVar2;
  }
  uVar2 = ___cxa_allocate_exception(0x10);
  local_30 = QString::fromAscii_helper("invalid size for qint64",0x17);
  FUN_1004eb830(uVar2,&local_30);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
}

