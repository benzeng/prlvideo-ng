
void FUN_1005f88a0(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = param_1 + 0xa8;
  cVar2 = FUN_1007ea210(param_1 + 0x62);
  if ((cVar2 != '\0') || (lVar3 = FUN_1005f87c0(param_1,lVar3,param_1 + 0x62), lVar3 != 0)) {
    for (lVar1 = *(long *)(lVar3 + 0x38); lVar1 != lVar3 + 0x30; lVar1 = *(long *)(lVar1 + 8)) {
      FUN_1005f8840(param_1,lVar1 + 0x10);
    }
  }
  return;
}

