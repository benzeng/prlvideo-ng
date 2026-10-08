
undefined8 FUN_100b47da0(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100ddbbf0("ps -A 2>&1 | grep prl_naptd >/dev/null");
  *param_1 = (uint)(iVar1 != 0);
  return 0;
}

