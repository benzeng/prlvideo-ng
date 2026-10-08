
void FUN_1000a3d00(void)

{
  bad_alloc *this;
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_100a67f70();
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == -2) {
    this = (bad_alloc *)___cxa_allocate_exception(8);
    std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_1021e1780,PTR__bad_alloc_1021e1610);
  }
  piVar2 = (int *)___cxa_allocate_exception(4);
  *piVar2 = iVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(piVar2,&PTR_vtable_10226c9d0,0);
}

