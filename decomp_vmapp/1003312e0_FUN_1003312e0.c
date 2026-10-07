
void * FUN_1003312e0(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  
  local_28 = param_2;
  pvVar2 = operator_new(0x10088);
  FUN_1003593d0(pvVar2);
  iVar1 = FUN_1003593e0(pvVar2,*(undefined8 *)(param_1 + 0x10),param_3);
  if (iVar1 == 0) {
    puVar3 = (undefined8 *)FUN_100332280(param_1 + 0x20,&local_28);
    *puVar3 = pvVar2;
  }
  else {
    FUN_100359c30(pvVar2);
    operator_delete(pvVar2);
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

