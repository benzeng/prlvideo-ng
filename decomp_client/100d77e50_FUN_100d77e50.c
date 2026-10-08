
void FUN_100d77e50(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  int iVar1;
  int *piVar2;
  uint local_2c;
  undefined8 local_28;
  
  iVar1 = _PrlCVSrc_GetBuffer(*param_1,&local_28,&local_2c);
  if (-1 < iVar1) {
    *param_2 = local_28;
    *param_3 = (ulong)local_2c;
    return;
  }
  piVar2 = (int *)___cxa_allocate_exception(4);
  *piVar2 = iVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(piVar2,PTR_typeinfo_1021e1790,0);
}

