
undefined8 FUN_10034bc10(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *local_38;
  
  uVar7 = 9;
  if (0x27 < *(uint *)(param_2 + 4)) {
    uVar2 = *(uint *)(param_2 + 8);
    for (puVar9 = *(uint **)(param_1 + 0xa850 +
                            (ulong)((uVar2 >> 0xc ^ uVar2) & 0xfff ^ uVar2 >> 0x18) * 8);
        puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 4)) {
      if (*puVar9 == uVar2) {
        if (*(long *)(puVar9 + 2) != 0) {
          return 7;
        }
        break;
      }
    }
    uVar2 = *(uint *)(param_2 + 0xc);
    puVar9 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                       (ulong)((uVar2 >> 0xc ^ uVar2) & 0xfff ^ uVar2 >> 0x18) * 8);
    uVar7 = 7;
    if (puVar9 != (uint *)0x0) {
      do {
        if (*puVar9 == uVar2) {
          lVar3 = *(long *)(puVar9 + 2);
          if (lVar3 == 0) {
            return 7;
          }
          puVar8 = operator_new(0x30);
          *puVar8 = 0;
          *(undefined8 *)(puVar8 + 2) = 0;
          puVar8[4] = 0;
          puVar8[5] = 0x8e;
          puVar8[6] = 0;
          *(undefined8 *)(puVar8 + 8) = 0;
          puVar8[10] = 0;
          local_38 = puVar8;
          iVar5 = FUN_100342670(puVar8,(uint *)(param_2 + 8),*(undefined8 *)(lVar3 + 8));
          if (iVar5 != 0) {
            if (*(long **)(puVar8 + 8) != (long *)0x0) {
              (**(code **)(**(long **)(puVar8 + 8) + 8))();
            }
            pvVar4 = *(void **)(puVar8 + 2);
            if (pvVar4 != (void *)0x0) {
              piVar1 = (int *)((long)pvVar4 + 0x80);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_10032d8f0(pvVar4);
                operator_delete(pvVar4);
              }
            }
            operator_delete(puVar8);
            return 4;
          }
          FUN_100350040(param_1 + 0xa840,*(undefined4 *)(param_2 + 8),&local_38);
          uVar6 = FUN_10034f3a0(param_1,lVar3,puVar8[5]);
          puVar8[4] = uVar6;
          return 0;
        }
        puVar9 = *(uint **)(puVar9 + 4);
      } while (puVar9 != (uint *)0x0);
    }
  }
  return uVar7;
}

