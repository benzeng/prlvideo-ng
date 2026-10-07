
ulong FUN_10071edd0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  ulong uVar6;
  
  sVar3 = _strlen(param_1);
  puVar1 = PTR_DAT_10116e310;
  sVar4 = _strlen(PTR_DAT_10116e310);
  sVar4 = sVar3 + 2 + sVar4;
  pvVar5 = _malloc(sVar4);
  if (pvVar5 != (void *)0x0) {
    ___snprintf_chk(pvVar5,sVar4,0,0xffffffffffffffff,PTR_s__s__s_10116e318,puVar1,param_1);
    uVar2 = FUN_10071ec60(pvVar5,param_2,param_3);
    _free(pvVar5);
    return (ulong)uVar2;
  }
  uVar6 = FUN_10071e690(0xfffffffe,0);
  return uVar6;
}

