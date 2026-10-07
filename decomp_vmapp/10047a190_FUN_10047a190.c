
void FUN_10047a190(void)

{
  bad_alloc *this;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_10078cd90();
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == -2) {
    this = (bad_alloc *)___cxa_allocate_exception(8);
    std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this,PTR_typeinfo_100ba22c0,PTR__bad_alloc_100ba21b8);
  }
  puVar2 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar2 = 1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_10111c630,0);
}

