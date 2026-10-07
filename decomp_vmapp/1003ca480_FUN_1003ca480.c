
undefined8 FUN_1003ca480(uint *param_1,ulong *param_2,uint *param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  if (param_2 == (ulong *)0x0) {
    uVar7 = *(ulong *)(param_1 + 1);
    uVar13 = 0;
    uVar9 = 0;
  }
  else {
    uVar13 = *param_2;
    uVar7 = param_2[1];
    uVar9 = uVar13 >> 0x20;
  }
  uVar2 = 1;
  uVar12 = (uint)uVar13;
  uVar3 = (uint)uVar7;
  if (uVar12 != uVar3) {
    uVar8 = (uint)uVar9;
    uVar10 = (uint)(uVar7 >> 0x20);
    if (uVar8 != uVar10) {
      if (*(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8) < 0x1000000) {
        uVar2 = 0;
      }
      else {
        uVar6 = *(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8) >> 0x18;
        if (uVar6 == 1) {
          if (uVar8 < uVar10) {
            bVar1 = (byte)*param_3;
            do {
              if (uVar12 < uVar3) {
                lVar11 = (ulong)(param_1[3] * (int)uVar9) + *(long *)(param_1 + 4);
                uVar7 = uVar13 & 0xffffffff;
                do {
                  if (4 < (param_5 & 0xffff) - 2) {
                    return 0;
                  }
                  bVar4 = *(byte *)(lVar11 + uVar7);
                  switch(param_5 & 0xffff) {
                  case 2:
                    bVar4 = bVar4 ^ bVar1;
                    break;
                  case 3:
                    bVar4 = bVar4 ^ ~bVar1;
                    break;
                  case 4:
                    bVar4 = ~bVar4;
                    break;
                  case 5:
                    bVar4 = bVar4 & bVar1;
                    break;
                  case 6:
                    bVar4 = bVar4 | bVar1;
                  }
                  *(byte *)(lVar11 + uVar7) = bVar4;
                  uVar7 = uVar7 + 1;
                } while ((uint)uVar7 < uVar3);
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulong)uVar8;
            } while (uVar8 < uVar10);
          }
        }
        else if (uVar6 == 4) {
          if (uVar8 < uVar10) {
            uVar8 = *param_3;
            lVar11 = *(long *)(param_1 + 4);
            do {
              if (uVar12 < uVar3) {
                puVar5 = (uint *)((ulong)(param_1[3] * (int)uVar9) + (ulong)(uVar12 * 4) + lVar11);
                uVar7 = uVar13 & 0xffffffff;
                do {
                  if (4 < (param_5 & 0xffff) - 2) {
                    return 0;
                  }
                  uVar6 = *puVar5;
                  switch(param_5 & 0xffff) {
                  case 2:
                    uVar6 = uVar6 ^ uVar8;
                    break;
                  case 3:
                    uVar6 = uVar6 ^ ~uVar8;
                    break;
                  case 4:
                    uVar6 = ~uVar6;
                    break;
                  case 5:
                    uVar6 = uVar6 & uVar8;
                    break;
                  case 6:
                    uVar6 = uVar6 | uVar8;
                  }
                  *puVar5 = uVar6;
                  puVar5 = puVar5 + 1;
                  uVar6 = (int)uVar7 + 1;
                  uVar7 = (ulong)uVar6;
                } while (uVar6 < uVar3);
              }
              uVar6 = (int)uVar9 + 1;
              uVar9 = (ulong)uVar6;
            } while (uVar6 < uVar10);
          }
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

