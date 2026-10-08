
undefined8 FUN_100db6f60(int *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = _fcntl(*param_1,0x33,1);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 != -1);
}

