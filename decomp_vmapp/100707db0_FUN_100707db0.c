
void FUN_100707db0(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = param_3;
  local_10 = param_2;
  iVar1 = _fcntl(*(int *)(param_1 + 8),0x2c,&local_18);
  if (iVar1 < 0) {
    iVar1 = FUN_1008e38f0(&DAT_10116d918);
    if (iVar1 != 0) {
      piVar2 = ___error();
      FUN_1008e3970("","AbstractFile",0,"readahead failure %d",*piVar2);
    }
  }
  return;
}

