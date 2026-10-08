
undefined8 FUN_100c66af0(long *param_1,ulong param_2,int *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  undefined1 *puVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  uint uVar18;
  int iVar20;
  ulong uVar19;
  
  *param_3 = 0;
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x12) & 0x10) == 0) {
    if ((*(byte *)((long)param_1 + 0x71) & 1) == 0) {
      uVar5 = *(uint *)(lVar2 + 4);
      iVar6 = 0;
      if (uVar5 < 2) goto LAB_100c66cc0;
      if ((*(int *)((long)param_1 + 0x14) == 0) && ((int)param_1[0x10] != 0)) {
        if (0x20 < uVar5) {
          FUN_100bf2cd0("evp_enc.c",0x1fc,"b <= sizeof ctx->final");
        }
        uVar13 = (ulong)(uVar5 - 1);
        bVar1 = *(byte *)((long)param_1 + uVar13 + 0x88);
        if ((bVar1 != 0) && (uVar18 = (uint)bVar1, (int)uVar18 <= (int)uVar5)) {
          iVar6 = 0;
          do {
            if (*(byte *)((long)param_1 + uVar13 + 0x88) != uVar18) {
              uVar7 = 100;
              uVar16 = 0x209;
              goto LAB_100c66d07;
            }
            iVar6 = iVar6 + 1;
            uVar13 = (ulong)((int)uVar13 - 1);
          } while (iVar6 < (int)uVar18);
          iVar20 = *(int *)(*param_1 + 4);
          uVar5 = (uint)bVar1;
          iVar6 = iVar20 - uVar5;
          if (iVar6 != 0 && (int)uVar5 <= iVar20) {
            uVar18 = (iVar20 + -1) - uVar5;
            uVar19 = (ulong)uVar18;
            uVar17 = uVar19 + 1 & 0x1ffffffe0;
            uVar13 = 0;
            if ((uVar17 != 0) &&
               ((uVar19 + 0x88 + (long)param_1 < param_2 ||
                (uVar13 = 0, (long *)(param_2 + uVar19) < param_1 + 0x11)))) {
              plVar12 = (long *)(param_2 + 0x10);
              plVar9 = param_1 + 0x13;
              uVar14 = uVar19 + 1 & 0xffffffffffffffe0;
              do {
                lVar2 = plVar9[-1];
                lVar3 = *plVar9;
                lVar4 = plVar9[1];
                plVar12[-2] = plVar9[-2];
                plVar12[-1] = lVar2;
                *plVar12 = lVar3;
                plVar12[1] = lVar4;
                plVar12 = plVar12 + 4;
                plVar9 = plVar9 + 4;
                uVar14 = uVar14 - 0x20;
                uVar13 = uVar17;
              } while (uVar14 != 0);
            }
            if (uVar19 + 1 != uVar13) {
              iVar11 = (int)uVar13;
              if ((iVar20 - uVar5 & 3) != 0) {
                iVar8 = -(iVar20 - uVar5 & 3);
                do {
                  *(undefined1 *)(param_2 + uVar13) = *(undefined1 *)((long)param_1 + uVar13 + 0x88)
                  ;
                  uVar13 = uVar13 + 1;
                  iVar8 = iVar8 + 1;
                } while (iVar8 != 0);
              }
              if (2 < uVar18 - iVar11) {
                puVar15 = (undefined1 *)(param_2 + 3 + uVar13);
                puVar10 = (undefined1 *)(uVar13 + 0x8b + (long)param_1);
                iVar20 = ((iVar20 + 3) - uVar5) - ((int)uVar13 + 3);
                do {
                  puVar15[-3] = puVar10[-3];
                  puVar15[-2] = puVar10[-2];
                  puVar15[-1] = puVar10[-1];
                  *puVar15 = *puVar10;
                  puVar15 = puVar15 + 4;
                  puVar10 = puVar10 + 4;
                  iVar20 = iVar20 + -4;
                } while (iVar20 != 0);
              }
            }
          }
          goto LAB_100c66cc0;
        }
        uVar7 = 100;
        uVar16 = 0x204;
      }
      else {
        uVar7 = 0x6d;
        uVar16 = 0x1f9;
      }
    }
    else {
      if (*(int *)((long)param_1 + 0x14) == 0) {
        *param_3 = 0;
        return 1;
      }
      uVar7 = 0x8a;
      uVar16 = 0x1f1;
    }
LAB_100c66d07:
    FUN_100c62ee0(6,0x65,uVar7,"evp_enc.c",uVar16);
    return 0;
  }
  iVar6 = (**(code **)(lVar2 + 0x20))(param_1,param_2,0,0);
  if (iVar6 < 0) {
    return 0;
  }
LAB_100c66cc0:
  *param_3 = iVar6;
  return 1;
}

