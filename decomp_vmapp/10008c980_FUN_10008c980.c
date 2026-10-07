
void FUN_10008c980(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_1005469d0(*(undefined8 *)(param_1 + 0x60));
  if (cVar2 != '\0') {
    return;
  }
  uVar1 = ___cxa_allocate_exception(1);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar1,&PTR_vtable_10110d2c0,0);
}

