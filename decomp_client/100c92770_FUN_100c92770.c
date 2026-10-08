
int FUN_100c92770(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  FUN_100ca5120(param_1,0xffffffff,0);
  FUN_100ca5120(param_2,0xffffffff,0);
  iVar3 = _memcmp(param_1 + 0x13,param_2 + 0x13,0x14);
  if (iVar3 == 0) {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x60) == 0) {
      lVar2 = *param_2;
      iVar3 = 0;
      if (*(int *)(lVar2 + 0x60) == 0) {
        iVar3 = (int)*(size_t *)(lVar1 + 0x58) - *(int *)(lVar2 + 0x58);
        if (iVar3 == 0) {
          iVar3 = _memcmp(*(void **)(lVar1 + 0x50),*(void **)(lVar2 + 0x50),
                          *(size_t *)(lVar1 + 0x58));
          return iVar3;
        }
      }
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}

