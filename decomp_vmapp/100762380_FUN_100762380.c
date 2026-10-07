
undefined8 FUN_100762380(int param_1,long *param_2,ulong *param_3)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar2;
  undefined1 uVar3;
  long local_38;
  uint local_2c;
  
  local_2c = 0;
  local_38 = 0;
  uVar3 = 0;
  iVar1 = _ioctl(param_1,0x40086419,&local_38);
  lVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != -1) {
    uVar3 = 0;
    iVar1 = _ioctl(param_1,0x40046418,&local_2c);
    lVar2 = CONCAT44(extraout_var_00,iVar1);
    if (iVar1 != -1) {
      *param_3 = (ulong)local_2c;
      lVar2 = (ulong)local_2c * local_38;
      *param_2 = lVar2;
      uVar3 = 1;
    }
  }
  return CONCAT71((int7)((ulong)lVar2 >> 8),uVar3);
}

