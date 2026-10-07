
undefined8 FUN_1004e7940(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  if (*(int *)(*(long *)(param_2 + 8) + 4) != 1) {
    uVar1 = ___cxa_allocate_exception(0x10);
    local_30 = QString::fromAscii_helper("invalid bit_box type (not sareBBTypeQString)",0x2c);
    FUN_1004eb830(uVar1,&local_30);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar1,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  QString::fromUtf16((ushort *)&local_38,(int)*(long *)(param_2 + 8) + 0xc);
  QString::normalized(param_1,&local_38,1,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1004e79b4;
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004e79b4:
  *(ulong *)(param_2 + 8) =
       *(long *)(param_2 + 8) + 0xc + (ulong)*(uint *)(*(long *)(param_2 + 8) + 8);
  return param_1;
}

