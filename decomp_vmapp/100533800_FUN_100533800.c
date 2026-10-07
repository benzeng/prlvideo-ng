
undefined8 FUN_100533800(byte *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar3;
  undefined1 uVar4;
  statvfs local_60;
  
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uVar4 = 0;
  iVar1 = _open((char *)param_1,0x100000);
  lVar3 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != -1) {
    iVar2 = _fstatvfs(iVar1,&local_60);
    iVar1 = _close(iVar1);
    lVar3 = CONCAT44(extraout_var_00,iVar1);
    if (iVar2 == -1) {
      uVar4 = 0;
    }
    else {
      lVar3 = local_60.f_bfree * local_60.f_bsize;
      *param_2 = lVar3;
      uVar4 = 1;
    }
  }
  return CONCAT71((int7)((ulong)lVar3 >> 8),uVar4);
}

