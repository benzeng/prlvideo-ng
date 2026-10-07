
void FUN_1007605b0(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  
  while (param_2 != (void *)0x0) {
    pvVar1 = *(void **)((long)param_2 + 0x10);
    _free(param_2);
    param_2 = pvVar1;
  }
  return;
}

