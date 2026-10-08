
void FUN_100d77f40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = 0;
  uVar1 = *param_2;
  *param_1 = 0;
  iVar2 = _PrlVm_CreateCVSrc(uVar1,param_1);
  if (-1 < iVar2) {
    return;
  }
  piVar3 = (int *)___cxa_allocate_exception(4);
  *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(piVar3,PTR_typeinfo_1021e1790,0);
}

