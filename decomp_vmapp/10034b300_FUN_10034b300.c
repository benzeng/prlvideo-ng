
undefined8 FUN_10034b300(byte *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  void *pvVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  bool bVar11;
  
  if (*(uint *)(param_2 + 4) < 0xc) {
    return 9;
  }
  uVar1 = *(uint *)(param_2 + 8);
  for (puVar6 = *(uint **)(param_1 +
                          (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8 + 0x2810);
      puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 4)) {
    if (*puVar6 == uVar1) {
      plVar2 = *(long **)(puVar6 + 2);
      if (plVar2 != (long *)0x0) {
        if (*(long **)(param_1 + 0x618) == plVar2) {
          if (*(long **)(param_1 + 0x618) != (long *)0x0) {
            param_1[0x618] = 0;
            param_1[0x619] = 0;
            param_1[0x61a] = 0;
            param_1[0x61b] = 0;
            param_1[0x61c] = 0;
            param_1[0x61d] = 0;
            param_1[0x61e] = 0;
            param_1[0x61f] = 0;
LAB_10034b3dc:
            *param_1 = *param_1 | 0x40;
          }
        }
        else if (*(long **)(param_1 + 0x620) == plVar2) {
          if (*(long **)(param_1 + 0x620) != (long *)0x0) {
            param_1[0x620] = 0;
            param_1[0x621] = 0;
            param_1[0x622] = 0;
            param_1[0x623] = 0;
            param_1[0x624] = 0;
            param_1[0x625] = 0;
            param_1[0x626] = 0;
            param_1[0x627] = 0;
            *param_1 = *param_1 | 0x80;
          }
        }
        else if (*(long **)(param_1 + 0x628) == plVar2) {
          if (*(long **)(param_1 + 0x628) != (long *)0x0) {
            param_1[0x628] = 0;
            param_1[0x629] = 0;
            param_1[0x62a] = 0;
            param_1[0x62b] = 0;
            param_1[0x62c] = 0;
            param_1[0x62d] = 0;
            param_1[0x62e] = 0;
            param_1[0x62f] = 0;
            param_1[1] = param_1[1] | 1;
          }
        }
        else if (*(long **)(param_1 + 0x630) == plVar2) {
          if (*(long **)(param_1 + 0x630) != (long *)0x0) {
            param_1[0x630] = 0;
            param_1[0x631] = 0;
            param_1[0x632] = 0;
            param_1[0x633] = 0;
            param_1[0x634] = 0;
            param_1[0x635] = 0;
            param_1[0x636] = 0;
            param_1[0x637] = 0;
            param_1[2] = param_1[2] | 2;
          }
        }
        else if (*(long **)(param_1 + 0x638) == plVar2) {
          if (*(long **)(param_1 + 0x638) != (long *)0x0) {
            param_1[0x638] = 0;
            param_1[0x639] = 0;
            param_1[0x63a] = 0;
            param_1[0x63b] = 0;
            param_1[0x63c] = 0;
            param_1[0x63d] = 0;
            param_1[0x63e] = 0;
            param_1[0x63f] = 0;
            param_1[2] = param_1[2] | 4;
          }
        }
        else if ((*(long **)(param_1 + 0x640) != (long *)0x0) &&
                (*(long **)(param_1 + 0x640) == plVar2)) {
          param_1[0x640] = 0;
          param_1[0x641] = 0;
          param_1[0x642] = 0;
          param_1[0x643] = 0;
          param_1[0x644] = 0;
          param_1[0x645] = 0;
          param_1[0x646] = 0;
          param_1[0x647] = 0;
          goto LAB_10034b3dc;
        }
        (**(code **)(*plVar2 + 8))();
        uVar1 = *(uint *)(param_2 + 8);
        puVar6 = (uint *)(param_1 +
                         (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8 + 0x2810);
        goto LAB_10034b470;
      }
      break;
    }
  }
  goto LAB_10034b49c;
  while (puVar6 = puVar3 + 4, *puVar3 != uVar1) {
LAB_10034b470:
    puVar10 = puVar6;
    puVar3 = *(uint **)puVar10;
    if (puVar3 == (uint *)0x0) goto LAB_10034b49c;
  }
  *(undefined8 *)puVar10 = *(undefined8 *)(puVar3 + 4);
  *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_1 + 0x2800);
  *(uint **)(param_1 + 0x2800) = puVar3;
LAB_10034b49c:
  if (*(byte **)(param_1 + 0x12858) != (byte *)0x0) {
    pbVar7 = *(byte **)(param_1 + 0x12858);
    pbVar8 = param_1 + 0x12858;
    do {
      while (pbVar9 = pbVar7, *(uint *)(pbVar9 + 0x20) < *(uint *)(param_2 + 8)) {
        pbVar5 = pbVar9 + 8;
        pbVar9 = pbVar8;
        pbVar7 = *(byte **)pbVar5;
        if (*(byte **)pbVar5 == (byte *)0x0) goto LAB_10034b4e0;
      }
      pbVar7 = *(byte **)pbVar9;
      pbVar8 = pbVar9;
    } while (*(byte **)pbVar9 != (byte *)0x0);
LAB_10034b4e0:
    if ((pbVar9 != param_1 + 0x12858) && (*(uint *)(pbVar9 + 0x20) <= *(uint *)(param_2 + 8))) {
      pvVar4 = *(void **)(pbVar9 + 0x28);
      if ((*(void **)(param_1 + 0x2750) == pvVar4) && (*(void **)(param_1 + 0x2750) != (void *)0x0))
      {
        param_1[0x2750] = 0;
        param_1[0x2751] = 0;
        param_1[0x2752] = 0;
        param_1[0x2753] = 0;
        param_1[0x2754] = 0;
        param_1[0x2755] = 0;
        param_1[0x2756] = 0;
        param_1[0x2757] = 0;
        param_1[1] = param_1[1] | 0x20;
      }
      if (pvVar4 != (void *)0x0) {
        if (*(long *)((long)pvVar4 + 8) != 0) {
          operator_delete__((void *)(*(long *)((long)pvVar4 + 8) + -8));
        }
        operator_delete(pvVar4);
      }
      pbVar7 = pbVar9;
      pbVar8 = *(byte **)(pbVar9 + 8);
      if (*(byte **)(pbVar9 + 8) == (byte *)0x0) {
        do {
          pbVar5 = *(byte **)(pbVar7 + 0x10);
          bVar11 = *(byte **)pbVar5 != pbVar7;
          pbVar7 = pbVar5;
        } while (bVar11);
      }
      else {
        do {
          pbVar5 = pbVar8;
          pbVar8 = *(byte **)pbVar5;
        } while (*(byte **)pbVar5 != (byte *)0x0);
      }
      if (*(byte **)(param_1 + 0x12850) == pbVar9) {
        *(byte **)(param_1 + 0x12850) = pbVar5;
      }
      *(long *)(param_1 + 0x12860) = *(long *)(param_1 + 0x12860) + -1;
      FUN_1000e86c0(*(undefined8 *)(param_1 + 0x12858),pbVar9);
      operator_delete(pbVar9);
    }
  }
  return 0;
}

