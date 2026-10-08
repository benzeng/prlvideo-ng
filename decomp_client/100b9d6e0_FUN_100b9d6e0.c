
void * FUN_100b9d6e0(char *param_1)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  
  sVar2 = _strlen(param_1);
  puVar1 = PTR_DAT_1022cfce0;
  sVar3 = _strlen(PTR_DAT_1022cfce0);
  sVar3 = sVar2 + 2 + sVar3;
  pvVar4 = _malloc(sVar3);
  if (pvVar4 != (void *)0x0) {
    ___snprintf_chk(pvVar4,sVar3,0,0xffffffffffffffff,PTR_s__s__s_1022cfce8,puVar1,param_1);
  }
  return pvVar4;
}

