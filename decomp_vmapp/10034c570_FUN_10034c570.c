
undefined8 FUN_10034c570(byte *param_1,long param_2)

{
  void *pvVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  bool bVar7;
  
  uVar6 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar6 = 0;
    if (*(byte **)(param_1 + 0x27c0) != (byte *)0x0) {
      pbVar3 = *(byte **)(param_1 + 0x27c0);
      pbVar4 = param_1 + 0x27c0;
      do {
        while (pbVar5 = pbVar3, *(uint *)(param_2 + 8) <= *(uint *)(pbVar5 + 0x20)) {
          pbVar3 = *(byte **)pbVar5;
          pbVar4 = pbVar5;
          if (*(byte **)pbVar5 == (byte *)0x0) goto LAB_10034c5d0;
        }
        pbVar2 = pbVar5 + 8;
        pbVar5 = pbVar4;
        pbVar3 = *(byte **)pbVar2;
      } while (*(byte **)pbVar2 != (byte *)0x0);
LAB_10034c5d0:
      if ((pbVar5 != param_1 + 0x27c0) && (*(uint *)(pbVar5 + 0x20) <= *(uint *)(param_2 + 8))) {
        pvVar1 = *(void **)(pbVar5 + 0x28);
        if ((*(void **)(param_1 + 0x48) == pvVar1) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
          param_1[0x48] = 0;
          param_1[0x49] = 0;
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
          param_1[0x4c] = 0;
          param_1[0x4d] = 0;
          param_1[0x4e] = 0;
          param_1[0x4f] = 0;
          *param_1 = *param_1 | 4;
        }
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
        pbVar3 = pbVar5;
        pbVar4 = *(byte **)(pbVar5 + 8);
        if (*(byte **)(pbVar5 + 8) == (byte *)0x0) {
          do {
            pbVar2 = *(byte **)(pbVar3 + 0x10);
            bVar7 = *(byte **)pbVar2 != pbVar3;
            pbVar3 = pbVar2;
          } while (bVar7);
        }
        else {
          do {
            pbVar2 = pbVar4;
            pbVar4 = *(byte **)pbVar2;
          } while (*(byte **)pbVar2 != (byte *)0x0);
        }
        if (*(byte **)(param_1 + 0x27b8) == pbVar5) {
          *(byte **)(param_1 + 0x27b8) = pbVar2;
        }
        *(long *)(param_1 + 0x27c8) = *(long *)(param_1 + 0x27c8) + -1;
        FUN_1000e86c0(*(undefined8 *)(param_1 + 0x27c0),pbVar5);
        operator_delete(pbVar5);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}

