
bool FUN_1006c21c0(void)

{
  int iVar1;
  
  iVar1 = FUN_1007d8970("ps -A 2>&1 | grep prl_naptd >/dev/null");
  return iVar1 == 0;
}

