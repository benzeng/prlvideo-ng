
undefined8 FUN_100716060(long param_1,char *param_2,int param_3)

{
  size_t sVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (0xfffe < param_3 - 1U)) {
    uVar3 = 0xfffffffd;
  }
  else {
    sVar1 = _strlen(param_2);
    pvVar2 = _malloc(sVar1 + 0x10);
    *(void **)(param_1 + 0x40) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      ___snprintf_chk(pvVar2,sVar1 + 0x10,0,0xffffffffffffffff,"%s:%d",param_2,param_3);
      return 0;
    }
    uVar3 = 0xfffffffe;
  }
  uVar3 = FUN_10071e690(uVar3,0);
  return uVar3;
}

