
void * FUN_1008dfd00(long *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  
  if ((void *)*param_1 == (void *)0x0) {
LAB_1008dfd74:
    *param_1 = (long)param_2;
  }
  else {
    pvVar1 = (void *)*param_1;
    pvVar4 = (void *)0x0;
    do {
      pvVar3 = pvVar1;
      iVar2 = _memcmp(pvVar3,param_2,8);
      if (0 < iVar2) {
        *(void **)((long)param_2 + 0x10) = pvVar3;
        if (pvVar4 != (void *)0x0) {
          *(void **)((long)pvVar4 + 0x10) = param_2;
          return param_2;
        }
        goto LAB_1008dfd74;
      }
      if (iVar2 == 0) {
        return (void *)0x0;
      }
      pvVar1 = *(void **)((long)pvVar3 + 0x10);
      pvVar4 = pvVar3;
    } while (*(void **)((long)pvVar3 + 0x10) != (void *)0x0);
    *(undefined8 *)((long)param_2 + 0x10) = 0;
    *(void **)((long)pvVar3 + 0x10) = param_2;
  }
  return param_2;
}

