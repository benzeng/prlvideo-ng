
void * FUN_100c58370(void *param_1,ulong param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if ((param_1 != (void *)0x0) && (param_2 < 0x7fffffff)) {
    pvVar1 = (void *)FUN_100bf3540(param_2 & 0xffffffff,"buf_str.c",100);
    if (pvVar1 == (void *)0x0) {
      FUN_100c62ee0(7,0x67,0x41,"buf_str.c",0x66);
      pvVar1 = (void *)0x0;
    }
    else {
      _memcpy(pvVar1,param_1,param_2);
    }
  }
  return pvVar1;
}

