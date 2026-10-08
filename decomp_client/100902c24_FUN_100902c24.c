
int * FUN_100902c24(int param_1,int param_2)

{
  xmlHashTablePtr pxVar1;
  int *local_28;
  
  local_28 = (int *)(*(code *)_xmlMalloc)(0x78);
  if (local_28 == (int *)0x0) {
    FUN_10090273c("allocating catalog");
    local_28 = (int *)0x0;
  }
  else {
    _memset(local_28,0,0x78);
    *local_28 = param_1;
    local_28[0x16] = 0;
    local_28[0x17] = 10;
    local_28[0x1a] = param_2;
    if (*local_28 == 2) {
      pxVar1 = _xmlHashCreate(10);
      *(xmlHashTablePtr *)(local_28 + 0x18) = pxVar1;
    }
  }
  return local_28;
}

