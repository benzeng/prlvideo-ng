
QByteArray * FUN_1004e7a90(QByteArray *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_28 [2];
  
  lVar1 = *(long *)(param_2 + 8);
  if (*(int *)(lVar1 + 4) == 0x46) {
    QByteArray::QByteArray(param_1,(char *)(lVar1 + 0xc),*(int *)(lVar1 + 8));
    *(ulong *)(param_2 + 8) =
         *(long *)(param_2 + 8) + 0xc + (ulong)*(uint *)(*(long *)(param_2 + 8) + 8);
    return param_1;
  }
  uVar2 = ___cxa_allocate_exception(0x10);
  local_28[0] = QString::fromAscii_helper("invalid bit_box type (not sareBBTypeQByteArray)",0x2f);
  FUN_1004eb830(uVar2,local_28);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar2,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
}

