
int FUN_100ab04e0(void)

{
  int iVar1;
  int local_20 [2];
  size_t local_18;
  int local_c;
  
  local_18 = 4;
  local_20[0] = 6;
  local_20[1] = 0x19;
  _sysctl(local_20,2,&local_c,&local_18,(void *)0x0,0);
  if (local_c < 1) {
    local_20[1] = 3;
    _sysctl(local_20,2,&local_c,&local_18,(void *)0x0,0);
  }
  iVar1 = 1;
  if (0 < local_c) {
    iVar1 = local_c;
  }
  return iVar1;
}

