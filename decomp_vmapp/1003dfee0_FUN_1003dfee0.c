
int FUN_1003dfee0(undefined8 param_1,sockaddr *param_2,socklen_t *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_1003dfd30(param_1,0xffffffff);
  if (-1 < iVar1) {
    iVar1 = _accept((int)param_1,param_2,param_3);
    if (iVar1 < 0) {
      piVar2 = ___error();
      iVar1 = -*piVar2;
    }
  }
  return iVar1;
}

