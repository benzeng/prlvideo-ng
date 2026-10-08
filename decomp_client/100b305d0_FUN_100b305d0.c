
undefined8 FUN_100b305d0(long param_1,long *param_2,uint *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  
  lVar4 = *(long *)(param_1 + 0x18);
  uVar3 = 0x80000516;
  if (lVar4 != 0) {
    if (*(long *)(param_1 + 0x38) != *(long *)(param_1 + 0x40)) {
      uVar7 = (int)*(long *)(param_1 + 0x40) + (0x20 - (int)*(long *)(param_1 + 0x38));
      if ((param_2 == (long *)0x0) || (*param_3 == 0)) {
        *param_3 = uVar7;
        uVar3 = 0;
      }
      else {
        uVar3 = 0x80000018;
        if (uVar7 <= *param_3) {
          *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x24);
          *param_2 = lVar4;
          FUN_100deb2a0(param_1 + 0x28,param_2 + 1);
          lVar4 = *(long *)(param_1 + 0x38);
          lVar5 = *(long *)(param_1 + 0x40);
          uVar3 = 0;
          *(int *)((long)param_2 + 0x1c) = (int)((ulong)(lVar5 - lVar4) >> 3);
          if (lVar5 != lVar4) {
            uVar6 = 0;
            uVar8 = 1;
            do {
              uVar1 = *(ulong *)(lVar4 + uVar6 * 8);
              if (uVar1 < 2) {
                param_2[uVar6 + 4] = uVar1;
              }
              else {
                uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x148))
                                  (*(long **)(param_1 + 8),param_2 + uVar6 + 4);
                if ((int)uVar3 < 0) {
                  return uVar3;
                }
                plVar2 = *(long **)(param_1 + 8);
                uVar3 = (**(code **)(*(long *)((long)plVar2 + *(long *)(*plVar2 + -0x18)) + 0x90))
                                  ((long)plVar2 + *(long *)(*plVar2 + -0x18),
                                   *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar6 * 8),
                                   *(undefined4 *)(param_1 + 0x20),param_2[uVar6 + 4]);
                if ((int)uVar3 < 0) {
                  return uVar3;
                }
                lVar4 = *(long *)(param_1 + 0x38);
                lVar5 = *(long *)(param_1 + 0x40);
              }
              uVar3 = 0;
              bVar9 = uVar8 < (ulong)(lVar5 - lVar4 >> 3);
              uVar6 = uVar8;
              uVar8 = (ulong)((int)uVar8 + 1);
            } while (bVar9);
          }
        }
      }
    }
  }
  return uVar3;
}

