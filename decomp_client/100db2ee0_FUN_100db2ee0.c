
void FUN_100db2ee0(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = param_3;
  local_10 = param_2;
  iVar1 = _fcntl(*(int *)(param_1 + 8),0x2c,&local_18);
  if (iVar1 < 0) {
    iVar1 = FUN_100df9940(&DAT_10230fd88);
    if (iVar1 != 0) {
      piVar2 = ___error();
      FUN_100df99c0("","AbstractFile",0,"readahead failure %d",*piVar2);
    }
  }
  return;
}

