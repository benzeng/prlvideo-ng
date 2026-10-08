
void FUN_100d77eb0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  uint local_24;
  undefined8 local_20;
  
  FUN_100d77d20();
  iVar1 = _PrlCVSrc_GetBuffer(*param_1,&local_20,&local_24);
  if (-1 < iVar1) {
    param_1[1] = local_20;
    param_1[2] = (ulong)local_24;
    return;
  }
  piVar2 = (int *)___cxa_allocate_exception(4);
  *piVar2 = iVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(piVar2,PTR_typeinfo_1021e1790,0);
}

