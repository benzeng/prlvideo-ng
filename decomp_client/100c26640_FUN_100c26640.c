
void FUN_100c26640(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    if (((void *)*param_1 != (void *)0x0) &&
       (_OPENSSL_cleanse((void *)*param_1,(long)*(int *)((long)param_1 + 0xc) << 3),
       (*(byte *)((long)param_1 + 0x14) & 2) == 0)) {
      FUN_100bf3910(*param_1);
    }
    uVar1 = *(uint *)((long)param_1 + 0x14);
    _OPENSSL_cleanse(param_1,0x18);
    if ((uVar1 & 1) != 0) {
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

