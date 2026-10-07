
undefined8 FUN_10034d0b0(byte *param_1,long param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  bool bVar9;
  
  uVar8 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar8 = 0;
    if (*(byte **)(param_1 + 0xa830) != (byte *)0x0) {
      pbVar5 = *(byte **)(param_1 + 0xa830);
      pbVar6 = param_1 + 0xa830;
      do {
        while (pbVar7 = pbVar5, *(uint *)(param_2 + 8) <= *(uint *)(pbVar7 + 0x20)) {
          pbVar5 = *(byte **)pbVar7;
          pbVar6 = pbVar7;
          if (*(byte **)pbVar7 == (byte *)0x0) goto LAB_10034d120;
        }
        pbVar4 = pbVar7 + 8;
        pbVar7 = pbVar6;
        pbVar5 = *(byte **)pbVar4;
      } while (*(byte **)pbVar4 != (byte *)0x0);
LAB_10034d120:
      if ((pbVar7 != param_1 + 0xa830) && (*(uint *)(pbVar7 + 0x20) <= *(uint *)(param_2 + 8))) {
        pvVar2 = *(void **)(pbVar7 + 0x28);
        if ((*(void **)(param_1 + 0x50) == pvVar2) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
          param_1[0x50] = 0;
          param_1[0x51] = 0;
          param_1[0x52] = 0;
          param_1[0x53] = 0;
          param_1[0x54] = 0;
          param_1[0x55] = 0;
          param_1[0x56] = 0;
          param_1[0x57] = 0;
          *param_1 = *param_1 | 0x10;
        }
        if (pvVar2 != (void *)0x0) {
          if (*(long **)((long)pvVar2 + 0x20) != (long *)0x0) {
            (**(code **)(**(long **)((long)pvVar2 + 0x20) + 8))();
          }
          pvVar3 = *(void **)((long)pvVar2 + 8);
          if (pvVar3 != (void *)0x0) {
            piVar1 = (int *)((long)pvVar3 + 0x80);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_10032d8f0(pvVar3);
              operator_delete(pvVar3);
            }
          }
          operator_delete(pvVar2);
        }
        pbVar5 = pbVar7;
        pbVar6 = *(byte **)(pbVar7 + 8);
        if (*(byte **)(pbVar7 + 8) == (byte *)0x0) {
          do {
            pbVar4 = *(byte **)(pbVar5 + 0x10);
            bVar9 = *(byte **)pbVar4 != pbVar5;
            pbVar5 = pbVar4;
          } while (bVar9);
        }
        else {
          do {
            pbVar4 = pbVar6;
            pbVar6 = *(byte **)pbVar4;
          } while (*(byte **)pbVar4 != (byte *)0x0);
        }
        if (*(byte **)(param_1 + 0xa828) == pbVar7) {
          *(byte **)(param_1 + 0xa828) = pbVar4;
        }
        *(long *)(param_1 + 0xa838) = *(long *)(param_1 + 0xa838) + -1;
        FUN_1000e86c0(*(undefined8 *)(param_1 + 0xa830),pbVar7);
        operator_delete(pbVar7);
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}

