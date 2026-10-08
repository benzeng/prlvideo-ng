
void FUN_1009d51f0(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_1022365e0;
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    FUN_1009d7890(pvVar1);
    operator_delete(pvVar1);
  }
  lVar2 = param_1[0xf];
  if ((lVar2 != 0) && (lVar3 = param_1[0x10], lVar3 != lVar2)) {
    param_1[0x10] = (~((lVar3 + -0x10) - lVar2) & 0xfffffffffffffff0U) + lVar3;
  }
  puVar5 = (undefined8 *)param_1[0xb];
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    _munmap(puVar5,param_1[10] * puVar5[1]);
    puVar5 = puVar4;
  }
  FUN_1009cef50(param_1 + 1);
  return;
}

