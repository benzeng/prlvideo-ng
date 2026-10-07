
void * FUN_1008c2930(undefined8 param_1,int *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_2 != (int *)0x0) {
    pvVar1 = (void *)0x0;
    if (*param_2 != 0) {
      pvVar1 = (void *)FUN_10081ddd0(*param_2 + 1,"v3_ia5.c",0x57);
      if (pvVar1 == (void *)0x0) {
        FUN_100887ce0(0x22,0x95,0x41,"v3_ia5.c",0x58);
        pvVar1 = (void *)0x0;
      }
      else {
        _memcpy(pvVar1,*(void **)(param_2 + 2),(long)*param_2);
        *(undefined1 *)((long)pvVar1 + (long)*param_2) = 0;
      }
    }
  }
  return pvVar1;
}

