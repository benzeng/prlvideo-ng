
void FUN_1000b5040(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100befa18;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_1000b4fd0(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

