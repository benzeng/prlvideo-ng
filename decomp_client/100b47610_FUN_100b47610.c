
bool FUN_100b47610(void)

{
  int iVar1;
  
  iVar1 = FUN_100ddbbf0("ps -A 2>&1 | grep prl_naptd >/dev/null");
  return iVar1 == 0;
}

