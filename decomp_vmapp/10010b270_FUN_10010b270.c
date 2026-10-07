
undefined8 FUN_10010b270(void)

{
  int iVar1;
  undefined8 in_RAX;
  bad_alloc *this;
  int *piVar2;
  
  iVar1 = FUN_10078cda0();
  if (iVar1 == 0) {
    return in_RAX;
  }
  if (iVar1 == -2) {
    this = (bad_alloc *)___cxa_allocate_exception(8);
    std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_100ba22c0,PTR__bad_alloc_100ba21b8);
  }
  piVar2 = (int *)___cxa_allocate_exception(4);
  *piVar2 = iVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(piVar2,&PTR_vtable_100bef300,0);
}

