
void FUN_100c27550(long param_1,long *param_2,long *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  ulong *puVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar9 = 0xffffffffffffffff - (param_1 + -1 >> 0x3f);
  uVar7 = (uint)uVar9 & (*(uint *)(param_3 + 1) ^ *(uint *)(param_2 + 1));
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) ^ uVar7;
  *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) ^ uVar7;
  switch(param_4 - 1) {
  case 0:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_100c277e6;
  case 1:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_100c277cd;
  case 2:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_100c277b4;
  case 3:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_100c2779b;
  case 4:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_100c27782;
  case 5:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_100c27769;
  case 6:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_100c27750;
  case 7:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    goto LAB_100c27737;
  case 8:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    break;
  default:
    if (10 < (int)param_4) {
      uVar8 = (ulong)(param_4 - 0xb);
      lVar1 = *param_2;
      lVar2 = *param_3;
      lVar12 = 10;
      if ((uVar8 + 1 & 0x1fffffffe) != 0) {
        pauVar3 = (undefined1 (*) [16])(lVar2 + 0x50);
        pauVar10 = (undefined1 (*) [16])(lVar1 + 0x50);
        lVar12 = 10;
        if (((undefined1 (*) [16])(lVar2 + (uVar8 + 10) * 8) < pauVar10) ||
           ((undefined1 (*) [16])(lVar1 + (uVar8 + 10) * 8) < pauVar3)) {
          lVar12 = (uVar8 + 1 & 0x1fffffffe) + 10;
          auVar13._8_4_ = (uint)uVar9;
          auVar13._0_8_ = uVar9;
          auVar13._12_4_ = (int)(uVar9 >> 0x20);
          uVar11 = uVar8 + 1 & 0xfffffffffffffffe;
          do {
            auVar14 = (*pauVar3 ^ *pauVar10) & auVar13;
            *pauVar10 = *pauVar10 ^ auVar14;
            *pauVar3 = *pauVar3 ^ auVar14;
            pauVar10 = pauVar10 + 1;
            pauVar3 = pauVar3 + 1;
            uVar11 = uVar11 - 2;
          } while (uVar11 != 0);
        }
      }
      if (uVar8 + 0xb != lVar12) {
        if ((param_4 & 1) != 0) {
          uVar8 = *(ulong *)(lVar1 + lVar12 * 8);
          uVar11 = (*(ulong *)(lVar2 + lVar12 * 8) ^ uVar8) & uVar9;
          *(ulong *)(lVar1 + lVar12 * 8) = uVar8 ^ uVar11;
          puVar4 = (ulong *)(lVar2 + lVar12 * 8);
          *puVar4 = *puVar4 ^ uVar11;
          lVar12 = lVar12 + 1;
        }
        if (param_4 - 1 != 0) {
          puVar4 = (ulong *)(lVar1 + 8 + lVar12 * 8);
          puVar6 = (ulong *)(lVar2 + 8 + lVar12 * 8);
          iVar5 = (param_4 + 1) - ((int)lVar12 + 1);
          do {
            uVar8 = (puVar6[-1] ^ puVar4[-1]) & uVar9;
            puVar4[-1] = puVar4[-1] ^ uVar8;
            puVar6[-1] = puVar6[-1] ^ uVar8;
            uVar8 = (*puVar6 ^ *puVar4) & uVar9;
            *puVar4 = *puVar4 ^ uVar8;
            *puVar6 = *puVar6 ^ uVar8;
            puVar4 = puVar4 + 2;
            puVar6 = puVar6 + 2;
            iVar5 = iVar5 + -2;
          } while (iVar5 != 0);
        }
      }
    }
  case 9:
    puVar4 = (ulong *)*param_2;
    puVar6 = (ulong *)*param_3;
    uVar8 = (puVar6[9] ^ puVar4[9]) & uVar9;
    puVar4[9] = puVar4[9] ^ uVar8;
    puVar6[9] = puVar6[9] ^ uVar8;
  }
  uVar8 = (puVar6[8] ^ puVar4[8]) & uVar9;
  puVar4[8] = puVar4[8] ^ uVar8;
  puVar6[8] = puVar6[8] ^ uVar8;
LAB_100c27737:
  uVar8 = (puVar6[7] ^ puVar4[7]) & uVar9;
  puVar4[7] = puVar4[7] ^ uVar8;
  puVar6[7] = puVar6[7] ^ uVar8;
LAB_100c27750:
  uVar8 = (puVar6[6] ^ puVar4[6]) & uVar9;
  puVar4[6] = puVar4[6] ^ uVar8;
  puVar6[6] = puVar6[6] ^ uVar8;
LAB_100c27769:
  uVar8 = (puVar6[5] ^ puVar4[5]) & uVar9;
  puVar4[5] = puVar4[5] ^ uVar8;
  puVar6[5] = puVar6[5] ^ uVar8;
LAB_100c27782:
  uVar8 = (puVar6[4] ^ puVar4[4]) & uVar9;
  puVar4[4] = puVar4[4] ^ uVar8;
  puVar6[4] = puVar6[4] ^ uVar8;
LAB_100c2779b:
  uVar8 = (puVar6[3] ^ puVar4[3]) & uVar9;
  puVar4[3] = puVar4[3] ^ uVar8;
  puVar6[3] = puVar6[3] ^ uVar8;
LAB_100c277b4:
  uVar8 = (puVar6[2] ^ puVar4[2]) & uVar9;
  puVar4[2] = puVar4[2] ^ uVar8;
  puVar6[2] = puVar6[2] ^ uVar8;
LAB_100c277cd:
  uVar8 = (puVar6[1] ^ puVar4[1]) & uVar9;
  puVar4[1] = puVar4[1] ^ uVar8;
  puVar6[1] = puVar6[1] ^ uVar8;
LAB_100c277e6:
  uVar9 = (*puVar6 ^ *puVar4) & uVar9;
  *puVar4 = *puVar4 ^ uVar9;
  *puVar6 = *puVar6 ^ uVar9;
  return;
}

