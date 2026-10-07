
long *** FUN_1005f5740(long param_1,ulong *param_2)

{
  long ****pppplVar1;
  logic_error *this;
  long ****pppplVar2;
  long ***local_20;
  
  pppplVar1 = *(long *****)(param_1 + 8);
  if (pppplVar1 == (long ****)0x0) {
    pppplVar2 = (long ****)(param_1 + 8);
    local_20 = (long ***)pppplVar2;
LAB_1005f57a6:
    if (pppplVar1 != (long ****)0x0) {
      return *pppplVar2 + 5;
    }
  }
  else {
    pppplVar2 = pppplVar1;
    do {
      while (pppplVar1 = pppplVar2, local_20 = (long ***)pppplVar1,
            (long ***)*param_2 < pppplVar1[4]) {
        pppplVar2 = (long ****)*pppplVar1;
        if ((long ****)*pppplVar1 == (long ****)0x0) goto LAB_1005f57bf;
      }
      if ((long ***)*param_2 <= pppplVar1[4]) {
        pppplVar2 = &local_20;
        goto LAB_1005f57a6;
      }
      pppplVar2 = (long ****)pppplVar1[1];
    } while ((long ****)pppplVar1[1] != (long ****)0x0);
  }
LAB_1005f57bf:
  this = (logic_error *)___cxa_allocate_exception(0x10);
  std::logic_error::logic_error(this,"map::at:  key not found");
  *(undefined **)this = PTR_vtable_100ba22f8 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_100ba22b0,PTR__out_of_range_100ba2190);
}

