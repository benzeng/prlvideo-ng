
undefined8 FUN_1008df150(int *param_1,char *param_2,size_t param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_1 == 3) {
    lVar1 = *(long *)(param_1 + 2);
    *(char **)(lVar1 + 0x20) = param_2;
    if ((param_2 != (char *)0x0) && ((long)param_3 < 0)) {
      param_3 = _strlen(param_2);
    }
    *(size_t *)(lVar1 + 0x28) = param_3;
    uVar2 = 1;
  }
  else {
    FUN_100887ce0(0x2e,0xa8,0xb1,"cms_pwri.c",0x47);
    uVar2 = 0;
  }
  return uVar2;
}

