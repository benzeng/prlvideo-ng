
void FUN_1003b5280(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  while (pvVar1 = (void *)**(undefined8 **)(param_1 + 8), pvVar1 != (void *)0x0) {
    FUN_1003ab4f0(pvVar1);
    operator_delete(pvVar1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x8030);
  if (puVar3 == (undefined8 *)0x0) goto LAB_1003b52ea;
  puVar2 = *(undefined8 **)(param_1 + 0x8038);
  if (puVar2 != puVar3) {
    *(ulong *)(param_1 + 0x8038) =
         (~((long)puVar2 + (-8 - (long)puVar3)) & 0xfffffffffffffff8U) + (long)puVar2;
  }
  while( true ) {
    operator_delete(puVar3);
LAB_1003b52ea:
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    if (puVar3 == (undefined8 *)0x0) break;
    *(undefined8 *)(param_1 + 0x28) = *puVar3;
  }
  return;
}

