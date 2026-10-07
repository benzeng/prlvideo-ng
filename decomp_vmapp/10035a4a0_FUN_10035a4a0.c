
void FUN_10035a4a0(undefined8 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  void *pvVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  
  FUN_1002adb30(*param_1,param_1[1]);
  if (param_3 == 0) {
    return;
  }
  uVar5 = 0;
LAB_10035a4e0:
  uVar1 = *(uint *)(param_2 + uVar5 * 4);
  for (puVar4 = (uint *)param_1[(ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) + 0x100d];
      puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
    if (*puVar4 == uVar1) {
      puVar4 = *(uint **)(puVar4 + 2);
      if (puVar4 != (uint *)0x0) {
        (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],*(undefined8 *)(puVar4 + 2));
        uVar1 = *puVar4;
        puVar4 = (uint *)(param_1 + (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) + 0x100d
                         );
        goto LAB_10035a560;
      }
      break;
    }
  }
  goto LAB_10035a5b0;
  while (puVar4 = puVar2 + 4, *puVar2 != uVar1) {
LAB_10035a560:
    puVar6 = puVar4;
    puVar2 = *(uint **)puVar6;
    if (puVar2 == (uint *)0x0) goto LAB_10035a5b0;
  }
  *(undefined8 *)puVar6 = *(undefined8 *)(puVar2 + 4);
  pvVar3 = *(void **)(puVar2 + 2);
  *(undefined8 *)(puVar2 + 4) = param_1[0x100b];
  param_1[0x100b] = puVar2;
  if (pvVar3 != (void *)0x0) {
    FUN_10032d680(pvVar3);
    operator_delete(pvVar3);
  }
LAB_10035a5b0:
  uVar5 = uVar5 + 1;
  if (param_3 <= uVar5) {
    return;
  }
  goto LAB_10035a4e0;
}

