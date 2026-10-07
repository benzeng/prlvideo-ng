
undefined8 FUN_1003c4160(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  undefined8 *puVar13;
  byte bVar14;
  
  lVar3 = param_1[5];
  uVar2 = *(uint *)(param_1[3] + 0x20);
  uVar6 = (ulong)(uVar2 >> 5);
  lVar12 = param_1[6];
  uVar5 = lVar12 - lVar3 >> 2;
  if (uVar6 < uVar5) {
    if ((*(uint *)(lVar3 + uVar6 * 4) >> (uVar2 & 0x1f) & 1) != 0) {
      return 0;
    }
  }
  else {
    uVar10 = (ulong)((uVar2 >> 5) + 1);
    if (uVar5 < uVar10) {
      FUN_10032f560();
      lVar3 = param_1[5];
    }
    else if ((uVar10 < uVar5) && (lVar8 = lVar3 + uVar10 * 4, lVar12 != lVar8)) {
      param_1[6] = (~((lVar12 + -4) - lVar8) & 0xfffffffffffffffcU) + lVar12;
    }
  }
  puVar1 = (uint *)(lVar3 + uVar6 * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  plVar7 = (long *)*param_1;
  lVar12 = param_1[1];
  if (lVar12 == *plVar7) {
    lVar12 = **(long **)(lVar12 + 0x10);
  }
  bVar14 = *(byte *)(param_1 + 4);
  if (lVar12 == 0) {
    lVar3 = param_1[3];
  }
  else {
    lVar3 = param_1[3];
    do {
      if (*(long *)(lVar12 + 0x38) != lVar3) break;
      uVar2 = *(uint *)(lVar12 + 0x48);
      bVar11 = 0;
      if (uVar2 != 0) {
        lVar8 = *(long *)(lVar12 + 0x40);
        bVar11 = 0;
        uVar9 = 0;
        do {
          if (((((*(byte *)(lVar8 + 0x39) & 1) == 0) && ((*(byte *)(lVar8 + 0x35) & 4) != 0)) &&
              ((*(byte *)((long)plVar7 + 0x39) & 1) == 0)) &&
             (((((char)plVar7[7] == *(char *)(lVar8 + 0x38) &&
                (*(int *)((long)plVar7 + 0x2c) == *(int *)(lVar8 + 0x2c))) &&
               ((((*(byte *)(lVar8 + 0x35) | *(byte *)((long)plVar7 + 0x35)) & 2) != 0 ||
                ((int)plVar7[5] == *(int *)(lVar8 + 0x28))))) &&
              ((*(byte *)(lVar8 + 0x30) & *(byte *)(plVar7 + 6) & bVar14) != 0)))) {
            if (*param_2 != 0) {
              return 1;
            }
            bVar11 = bVar11 | *(byte *)(lVar8 + 0x30);
            *param_2 = lVar8;
          }
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x40;
        } while (uVar9 < uVar2);
      }
      bVar14 = bVar14 & ~bVar11;
      if (bVar14 == 0) {
        return 0;
      }
      lVar12 = **(long **)(lVar12 + 0x10);
    } while (lVar12 != 0);
  }
  plVar7 = *(long **)(lVar3 + 0x38);
  if (plVar7 != (long *)0x0) {
    lVar12 = param_1[2];
    do {
      lVar3 = (**(code **)(*(long *)plVar7[1] + 0x20))();
      if (lVar3 == 0) {
        lVar3 = (**(code **)(*(long *)plVar7[1] + 0x10))();
        if (lVar3 != 0) {
          *(byte *)(param_1 + 4) = bVar14;
          param_1[2] = lVar3;
          lVar3 = *(long *)(*(long *)(lVar3 + 0x40) + 0x28);
          goto LAB_1003c4380;
        }
        lVar3 = (**(code **)(*(long *)plVar7[1] + 0x18))();
        if (lVar3 != 0) {
          if (lVar12 != 0) {
            *(byte *)(param_1 + 4) = bVar14;
            param_1[2] = lVar12;
            lVar3 = *(long *)(lVar12 + 0x28);
            goto LAB_1003c4380;
          }
          for (puVar13 = *(undefined8 **)(lVar3 + 0x38); puVar13 != (undefined8 *)0x0;
              puVar13 = (undefined8 *)*puVar13) {
            lVar3 = (**(code **)(*(long *)puVar13[1] + 0x10))();
            *(byte *)(param_1 + 4) = bVar14;
            param_1[2] = 0;
            lVar3 = *(long *)(lVar3 + 0x28);
            param_1[3] = lVar3;
            param_1[1] = *(long *)(lVar3 + 0x28);
            uVar4 = FUN_1003c4160(param_1,param_2);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
          }
        }
      }
      else {
        *(byte *)(param_1 + 4) = bVar14;
        param_1[2] = lVar12;
LAB_1003c4380:
        param_1[3] = lVar3;
        param_1[1] = *(long *)(lVar3 + 0x28);
        uVar4 = FUN_1003c4160(param_1,param_2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return 0;
}

