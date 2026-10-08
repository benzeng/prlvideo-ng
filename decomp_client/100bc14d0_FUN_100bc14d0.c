
bool FUN_100bc14d0(void)

{
  uid_t uVar1;
  
  uVar1 = _geteuid();
  return uVar1 == 0;
}

