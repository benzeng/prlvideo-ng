
ulong FUN_1003dfce0(undefined8 param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = FUN_1003dfd30(param_1,0xffffffff);
  if (-1 < (int)uVar1) {
    uVar1 = _read((int)param_1,param_2,param_3);
    if ((int)uVar1 < 0) {
      piVar2 = ___error();
      uVar1 = (ulong)(uint)-*piVar2;
    }
  }
  return uVar1;
}

