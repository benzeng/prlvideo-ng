
void FUN_100daabc0(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_getpwuid(param_2);
  if (puVar1 != (undefined8 *)0x0) {
    ___strlcpy_chk(param_1 + 0x129,*puVar1,0x20,0xffffffffffffffff);
  }
  ___snprintf_chk(param_1 + 0x8c,8,0,0xffffffffffffffff,"%0*lo",7,param_2);
  return;
}

