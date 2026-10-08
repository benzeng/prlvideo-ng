
void FUN_100d77ce0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = _PrlCVSrc_GetOpenMode(*param_1);
  if (-1 < iVar1) {
    return;
  }
  piVar2 = (int *)___cxa_allocate_exception(4);
  *piVar2 = iVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(piVar2,PTR_typeinfo_1021e1790,0);
}

