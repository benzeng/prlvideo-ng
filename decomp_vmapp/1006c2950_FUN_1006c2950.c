
undefined8 FUN_1006c2950(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1007d8970("ps -A 2>&1 | grep prl_naptd >/dev/null");
  *param_1 = (uint)(iVar1 != 0);
  return 0;
}

