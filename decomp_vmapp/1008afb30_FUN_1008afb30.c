
undefined8 FUN_1008afb30(int *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (param_3 < 0) {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    sVar1 = _strlen(param_2);
    param_3 = (int)sVar1;
  }
  pvVar3 = *(void **)(param_1 + 2);
  if (*param_1 < param_3) {
    if (pvVar3 == (void *)0x0) goto LAB_1008afb9e;
    pvVar2 = (void *)FUN_10081df30(pvVar3,param_3 + 1,"asn1_lib.c",0x17a);
    pvVar4 = pvVar3;
  }
  else {
    if (pvVar3 != (void *)0x0) goto LAB_1008afbc0;
LAB_1008afb9e:
    pvVar2 = (void *)FUN_10081ddd0(param_3 + 1,"asn1_lib.c",0x178);
    pvVar4 = (void *)0x0;
  }
  *(void **)(param_1 + 2) = pvVar2;
  pvVar3 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    FUN_100887ce0(0xd,0xba,0x41,"asn1_lib.c",0x17d);
    *(void **)(param_1 + 2) = pvVar4;
    return 0;
  }
LAB_1008afbc0:
  *param_1 = param_3;
  if (param_2 != (char *)0x0) {
    _memcpy(pvVar3,param_2,(long)param_3);
    *(undefined1 *)(*(long *)(param_1 + 2) + (long)param_3) = 0;
  }
  return 1;
}

