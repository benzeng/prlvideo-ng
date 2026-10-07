
void FUN_100401970(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_1007da300("devices.hdd.pcache.enable",1);
  if (iVar1 != 0) {
    pvVar2 = operator_new(0x80);
    FUN_100405cc0(pvVar2,*(undefined8 *)(param_1 + 0x38));
    *(void **)(param_1 + 0x160) = pvVar2;
    iVar1 = FUN_100405950(pvVar2);
    if (iVar1 == 0) {
      FUN_1008e3970("","HddUtils",0,"hdd: PC enabled");
      return;
    }
    pvVar2 = *(void **)(param_1 + 0x160);
    if (pvVar2 != (void *)0x0) {
      FUN_100405d70(pvVar2);
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return;
}

