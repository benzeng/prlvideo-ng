
void FUN_100301c50(long param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  uint local_2c;
  
  uVar8 = (ulong)param_3;
  if (param_2 == 0x8ca8) {
LAB_100301c8c:
    *(uint *)(param_1 + 0x15a0) = param_3;
  }
  else {
    if (param_2 == 0x8d40) {
      *(uint *)(param_1 + 0x15a4) = param_3;
      goto LAB_100301c8c;
    }
    if (param_2 == 0x8ca9) {
      *(uint *)(param_1 + 0x15a4) = param_3;
    }
  }
  lVar12 = *(long *)(param_1 + 0x30);
  uVar7 = uVar8;
  if (*(uint *)(lVar12 + 0x1038) < 0x20) {
    uVar4 = 0x20;
    do {
      uVar4 = uVar4 >> 1;
      uVar7 = (ulong)((uint)uVar7 ^ (uint)uVar7 >> (sbyte)uVar4);
    } while (*(uint *)(lVar12 + 0x1038) < uVar4);
  }
  for (puVar3 = *(uint **)(lVar12 + 0x838 + (uVar7 & 0xff) * 8); puVar3 != (uint *)0x0;
      puVar3 = *(uint **)(puVar3 + 2)) {
    if (*puVar3 == param_3) {
      local_2c = puVar3[1];
      if (local_2c == 0) goto LAB_100301cf5;
      goto LAB_100301f56;
    }
  }
  local_2c = 0;
LAB_100301cf5:
  lVar14 = *(long *)(param_1 + 0x28);
  uVar4 = *(uint *)(lVar14 + 0x18);
  uVar9 = uVar4;
  if (*(uint *)(lVar12 + 0x2058) < 0x20) {
    uVar5 = 0x20;
    do {
      uVar5 = uVar5 >> 1;
      uVar9 = uVar9 ^ uVar9 >> (sbyte)uVar5;
    } while (*(uint *)(lVar12 + 0x2058) < uVar5);
  }
  puVar3 = *(uint **)(lVar12 + 0x1858 + (ulong)(uVar9 & 0xff) * 8);
  lVar10 = 0;
  if (puVar3 != (uint *)0x0) {
    lVar10 = 0;
    do {
      if (*puVar3 == uVar4) {
        lVar10 = *(long *)(puVar3 + 2);
        break;
      }
      puVar3 = *(uint **)(puVar3 + 4);
    } while (puVar3 != (uint *)0x0);
  }
  if (param_3 != 0) {
    (*DAT_1011c5e48)(1,&local_2c);
    lVar14 = *(long *)(param_1 + 0x28);
    lVar12 = *(long *)(param_1 + 0x30);
    uVar4 = local_2c;
  }
  local_2c = uVar4;
  FUN_100305cb0(lVar12,uVar8,local_2c,*(undefined1 *)(param_1 + 0x38),*(undefined4 *)(lVar14 + 0x2c)
                ,*(undefined4 *)(lVar14 + 0x30));
  if (lVar10 == 0) {
    lVar12 = *(long *)(param_1 + 0x28);
    uVar4 = *(uint *)(lVar12 + 0x18);
    uVar9 = *(uint *)(*(long *)(param_1 + 0x30) + 0x2058);
    uVar5 = uVar4;
    if (uVar9 < 0x20) {
      uVar6 = 0x20;
      do {
        uVar6 = uVar6 >> 1;
        uVar5 = uVar5 ^ uVar5 >> (sbyte)uVar6;
      } while (uVar9 < uVar6);
    }
    for (puVar3 = *(uint **)(*(long *)(param_1 + 0x30) + 0x1858 + (ulong)(uVar5 & 0xff) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if (*puVar3 == uVar4) {
        puVar2 = *(undefined4 **)(puVar3 + 2);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)(lVar12 + 0x1c);
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0x1702;
          puVar2[5] = *(undefined4 *)(lVar12 + 0x20);
          *(undefined8 *)(puVar2 + 6) = 0;
          *(undefined8 *)(puVar2 + 8) = 0x170200000000;
          uVar4 = *(uint *)(lVar12 + 0x34);
          if (uVar4 != 0) {
            uVar1 = *(undefined4 *)(lVar12 + 0x28);
            if ((uVar4 & 0xfffffff0) == 0x8ce0) {
              puVar13 = (undefined4 *)0x0;
              puVar11 = puVar2 + (ulong)(uVar4 - 0x8ce0) * 5;
              if (puVar11 == (undefined4 *)0x0) goto LAB_100301f09;
            }
            else if (uVar4 == 0x8d20) {
              puVar11 = puVar2 + 0x55;
              puVar13 = (undefined4 *)0x0;
            }
            else if (uVar4 == 0x8d00) {
              puVar11 = puVar2 + 0x50;
              puVar13 = (undefined4 *)0x0;
            }
            else {
              if (uVar4 != 0x821a) goto LAB_100301f09;
              puVar11 = puVar2 + 0x50;
              puVar13 = puVar2 + 0x55;
            }
            *puVar11 = uVar1;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[4] = 0x1702;
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = uVar1;
              puVar13[1] = 0;
              puVar13[2] = 0;
              puVar13[3] = 0;
              puVar13[4] = 0x1702;
            }
          }
LAB_100301f09:
          uVar1 = *(undefined4 *)(lVar12 + 0x24);
          puVar2[0x50] = uVar1;
          puVar2[0x51] = 0;
          puVar2[0x52] = 0;
          puVar2[0x53] = 0;
          puVar2[0x54] = 0x1702;
          puVar2[0x55] = uVar1;
          *(undefined8 *)(puVar2 + 0x56) = 0;
          *(undefined8 *)(puVar2 + 0x58) = 0x170200000000;
        }
        break;
      }
    }
  }
LAB_100301f56:
  uVar4 = local_2c;
  if (param_2 != 0x8ca8) {
    if (param_2 != 0x8d40) {
      if (param_2 == 0x8ca9) {
        *(uint *)(param_1 + 0x15ac) = local_2c;
      }
      goto LAB_100301f7a;
    }
    *(uint *)(param_1 + 0x15ac) = local_2c;
  }
  *(uint *)(param_1 + 0x15a8) = local_2c;
LAB_100301f7a:
  (*DAT_1011c5738)(param_2,local_2c);
  if ((uVar4 != 0) && (uVar4 == *(uint *)(*(long *)(param_1 + 0x28) + 0x18))) {
    lVar12 = *(long *)(param_1 + 0x30);
    uVar4 = *(uint *)(param_1 + 0x15a8);
    uVar9 = *(uint *)(lVar12 + 0x2058);
    uVar8 = (ulong)uVar4;
    if (uVar9 < 0x20) {
      uVar5 = 0x20;
      uVar8 = (ulong)uVar4;
      do {
        uVar5 = uVar5 >> 1;
        uVar8 = (ulong)((uint)uVar8 ^ (uint)uVar8 >> (sbyte)uVar5);
      } while (uVar9 < uVar5);
    }
    puVar3 = *(uint **)(lVar12 + 0x1858 + (uVar8 & 0xff) * 8);
    lVar14 = 0;
    if (puVar3 != (uint *)0x0) {
      lVar14 = 0;
      do {
        if (*puVar3 == uVar4) {
          lVar14 = *(long *)(puVar3 + 2);
          break;
        }
        puVar3 = *(uint **)(puVar3 + 4);
      } while (puVar3 != (uint *)0x0);
    }
    uVar4 = *(uint *)(param_1 + 0x15ac);
    uVar5 = uVar4;
    if (uVar9 < 0x20) {
      uVar6 = 0x20;
      do {
        uVar6 = uVar6 >> 1;
        uVar5 = uVar5 ^ uVar5 >> (sbyte)uVar6;
      } while (uVar9 < uVar6);
    }
    puVar3 = *(uint **)(lVar12 + 0x1858 + (ulong)(uVar5 & 0xff) * 8);
    lVar12 = 0;
    if (puVar3 != (uint *)0x0) {
      lVar12 = 0;
      do {
        if (*puVar3 == uVar4) {
          lVar12 = *(long *)(puVar3 + 2);
          break;
        }
        puVar3 = *(uint **)(puVar3 + 4);
      } while (puVar3 != (uint *)0x0);
    }
    if (lVar14 != 0) {
      FUN_1003020b0(param_1,*(undefined4 *)(lVar14 + 0x248),0);
    }
    if (lVar12 != 0) {
      FUN_1003021b0(param_1,*(undefined4 *)(lVar12 + 0x198),0);
    }
  }
  return;
}

