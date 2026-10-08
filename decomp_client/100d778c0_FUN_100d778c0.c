
void FUN_100d778c0(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  lVar4 = 0;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
    lVar4 = *param_1;
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  iVar2 = _PrlHandle_RegEventHandler(lVar4,param_3,param_4);
  if (-1 < iVar2) {
    return;
  }
  piVar3 = (int *)___cxa_allocate_exception(4);
  *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(piVar3,PTR_typeinfo_1021e1790,0);
}

