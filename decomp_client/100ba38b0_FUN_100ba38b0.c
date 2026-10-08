
void FUN_100ba38b0(long param_1,void *param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  size_t sVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  sVar3 = (size_t)param_3;
  pvVar2 = _realloc(*(void **)(lVar1 + 0x20),*(long *)(lVar1 + 0x28) + sVar3);
  if (pvVar2 != (void *)0x0) {
    _memcpy((void *)((long)pvVar2 + *(long *)(lVar1 + 0x28)),param_2,sVar3);
    *(void **)(lVar1 + 0x20) = pvVar2;
    *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x28) + sVar3;
  }
  return;
}

