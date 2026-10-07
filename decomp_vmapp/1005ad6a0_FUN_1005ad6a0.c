
bool FUN_1005ad6a0(int *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  
  *param_1 = param_2;
  uVar2 = param_2 + 0x3fU >> 3 & 0x1ffffff8;
  param_1[1] = uVar2;
  pvVar1 = _valloc((ulong)uVar2);
  *(void **)(param_1 + 2) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    FUN_1008e3970("","vdisk",0,"No memory (%u bytes) for group bitmap",uVar2);
  }
  else {
    ___bzero(pvVar1,(ulong)uVar2);
  }
  return pvVar1 != (void *)0x0;
}

