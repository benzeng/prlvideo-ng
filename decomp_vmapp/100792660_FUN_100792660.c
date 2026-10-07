
undefined8 * FUN_100792660(undefined8 *param_1,int *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (*param_2 == 8) {
    pvVar1 = _valloc((ulong)(uint)param_2[1]);
    puVar2 = operator_new(0x20);
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = pvVar1;
    *puVar2 = &PTR_FUN_1011a5820;
    puVar2[3] = FUN_100792730;
  }
  else {
    pvVar1 = operator_new__((ulong)(uint)param_2[1],(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = operator_new(0x18);
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = pvVar1;
    *puVar2 = &PTR_FUN_100bef320;
  }
  *param_1 = puVar2;
  return param_1;
}

