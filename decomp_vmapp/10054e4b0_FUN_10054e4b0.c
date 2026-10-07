
int FUN_10054e4b0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(*(long *)(param_1 + 0x28) + 2);
  if (cVar1 == '\x03') {
    iVar2 = FUN_100744610(param_2,param_3,param_4,param_5);
  }
  else {
    if (cVar1 != '\x02') {
      iVar2 = 1;
      goto LAB_10054e50b;
    }
    iVar2 = FUN_100743930(param_2,param_3,param_4,param_5,0);
  }
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = *(char *)(*(long *)(param_1 + 0x28) + 2);
LAB_10054e50b:
  FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::uncompress_buffer(type=%d) failed (%d)",
                cVar1,iVar2);
  return iVar2;
}

