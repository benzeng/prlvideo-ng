
void * FUN_1007857f0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long local_38;
  void *local_30;
  ulong local_28;
  
  pvVar3 = (void *)0x0;
  if (param_2 != 0) {
    local_38 = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (*(int *)((long)puVar1 + 0x14) != 0) {
      puVar6 = puVar1;
      if (*(uint *)(puVar1 + 4) != 0) {
        uVar4 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)puVar1 + 0x24);
        for (puVar2 = *(undefined8 **)
                       (puVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar1 + 4)) * 8);
            (puVar6 = puVar1, puVar2 != puVar1 &&
            ((*(uint *)(puVar2 + 1) != uVar4 || (puVar6 = puVar2, puVar2[2] != param_2))));
            puVar2 = (undefined8 *)*puVar2) {
        }
      }
      plVar5 = &local_38;
      if (puVar6 != puVar1) {
        plVar5 = puVar6 + 3;
      }
      if ((void *)*plVar5 != (void *)0x0) {
        return (void *)*plVar5;
      }
    }
    local_28 = param_2;
    pvVar3 = operator_new(0x18);
    FUN_100787700(pvVar3,param_2,param_1);
    local_30 = pvVar3;
    FUN_100785e90(param_1 + 0x18,&local_28,&local_30);
  }
  return pvVar3;
}

