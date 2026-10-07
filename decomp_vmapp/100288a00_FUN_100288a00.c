
void FUN_100288a00(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  uint local_c;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x3a128) + 0xf0);
  *plVar1 = *plVar1 + 1;
  local_c = param_2 & 0x1fffffff;
  iVar2 = FUN_1007d74c0(DAT_1011c3ca0 + 0x1020,&local_c,4);
  if (iVar2 != 4) {
    FUN_1008e3970("","LocalDevices",0,"LSI: beware reply fifo: 0x%08X",local_c);
  }
  return;
}

