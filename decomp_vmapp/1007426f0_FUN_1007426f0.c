
bool FUN_1007426f0(void)

{
  uid_t uVar1;
  
  uVar1 = _geteuid();
  return uVar1 == 0;
}

