
undefined8 FUN_1007265a0(long *param_1,void *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  
  if ((int)param_1[3] != 0) {
    return 0xffffffff;
  }
  pvVar3 = (void *)*param_1;
  iVar2 = 0;
  if (pvVar3 != (void *)0x0) {
    iVar2 = 0;
    if (param_1[2] != 0) {
      iVar2 = ((int)param_1[2] + (int)pvVar3) - (int)param_1[1];
    }
  }
  if (iVar2 <= param_3 + 1) {
    sVar5 = (long)(((ulong)(uint)(param_3 - iVar2) << 0x20) + 0x100000000000) >> 0x20;
    if ((param_1[2] == 0) && (pvVar3 == (void *)0x0)) {
      pvVar3 = _malloc(sVar5);
      *param_1 = (long)pvVar3;
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)(param_1 + 3) = 1;
        return 0xffffffff;
      }
      param_1[2] = sVar5;
      param_1[1] = (long)pvVar3;
    }
    else {
      lVar1 = param_1[1];
      pvVar4 = _realloc(pvVar3,param_1[2] + sVar5);
      if (pvVar4 == (void *)0x0) {
        *(undefined4 *)(param_1 + 3) = 1;
        return 0xffffffff;
      }
      param_1[2] = param_1[2] + sVar5;
      if (pvVar4 != (void *)*param_1) {
        *param_1 = (long)pvVar4;
        param_1[1] = (long)pvVar4 + (lVar1 - (long)pvVar3);
      }
    }
  }
  param_1 = param_1 + 1;
  sVar5 = (size_t)param_3;
  _memcpy((void *)*param_1,param_2,sVar5);
  lVar1 = *param_1;
  *param_1 = lVar1 + sVar5;
  *(undefined1 *)(lVar1 + sVar5) = 0;
  return 0;
}

