
undefined8 FUN_1004222d0(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = _open(param_2,0xa01,0x180);
  *param_1 = iVar1;
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 != -1);
}

