
void FUN_100371460(long *param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  int iVar17;
  long *plVar18;
  int iVar19;
  void *pvVar20;
  long lVar21;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar8 = *param_1;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 8) != 0)) {
    lVar12 = *(long *)(lVar8 + 600);
    iVar19 = (int)((ulong)(*(long *)(lVar8 + 0x260) - lVar12) >> 2) * -0x49249249;
    if (iVar19 != 0) {
      pvVar1 = (void *)((long)param_1 + 0x12cc);
      plVar2 = param_1 + 0x27a;
      lVar21 = 0;
      do {
        lVar14 = lVar21 * 0x1c;
        uVar4 = *(uint *)(lVar12 + 0xc + lVar14);
        if (0xc < uVar4) goto LAB_100371a00;
        puVar13 = (uint *)(lVar12 + lVar14);
        switch(uVar4) {
        case 0:
          local_3c = DAT_100b3d73c;
          if (*(char *)(param_1[0x29e] + 2) == '\0') {
            local_3c = DAT_100b3d740;
          }
          local_40 = local_3c / (float)(*(int *)(param_2 + 0x1a0) - *(int *)(param_2 + 0x198));
          local_3c = local_3c / (float)(*(int *)(param_2 + 0x1a4) - *(int *)(param_2 + 0x19c));
          if (*(char *)(DAT_1011c8478 + 0x69) == '\0') {
            fVar3 = *(float *)(lVar12 + 0x14 + lVar14);
            if ((fVar3 == local_40) && (!NAN(fVar3) && !NAN(local_40))) {
              fVar3 = *(float *)(lVar12 + 0x18 + lVar14);
              if ((fVar3 == local_3c) && (!NAN(fVar3) && !NAN(local_3c))) break;
            }
          }
          *(float *)(lVar12 + 0x14 + lVar14) = local_40;
          *(float *)(lVar12 + 0x18 + lVar14) = local_3c;
          (*DAT_1011c6d78)(*(undefined4 *)(lVar12 + 4 + lVar14),1,&local_40);
          break;
        case 1:
          local_44 = DAT_100b3d73c;
          if (*(char *)(param_1[0x29e] + 2) == '\0') {
            local_44 = DAT_100b3d740;
          }
          local_48 = local_44 / (float)(*(int *)(param_2 + 0x1a0) - *(int *)(param_2 + 0x198));
          local_44 = local_44 / (float)(*(int *)(param_2 + 0x1a4) - *(int *)(param_2 + 0x19c));
          if ((*(float *)(param_1 + 0x29f) == local_48) &&
             (!NAN(*(float *)(param_1 + 0x29f)) && !NAN(local_48))) {
            if ((*(float *)((long)param_1 + 0x14fc) == local_44) &&
               (!NAN(*(float *)((long)param_1 + 0x14fc)) && !NAN(local_44))) break;
          }
          *(float *)(param_1 + 0x29f) = local_48;
          *(float *)((long)param_1 + 0x14fc) = local_44;
          (*DAT_1011c5708)(0x8a11,(int)param_1[0x259]);
          (*DAT_1011c57d8)(0x8a11,8,&local_48,0x88e0);
          (*DAT_1011c74b0)(0x8a11,*puVar13,(int)param_1[0x259]);
          break;
        case 2:
          FUN_100371d60(param_1,*(undefined4 *)(lVar12 + 4 + lVar14),param_2);
          break;
        case 3:
          FUN_100372a20(param_1,*(undefined4 *)(lVar12 + 4 + lVar14),param_2);
          break;
        case 4:
          (*DAT_1011c6e18)(*(undefined4 *)(lVar12 + 4 + lVar14),*(undefined4 *)(lVar12 + 8 + lVar14)
                           ,param_2 + 0x9a70 + (ulong)(*puVar13 << 2) * 4);
          break;
        case 5:
          uVar6 = *(undefined4 *)(lVar12 + 4 + lVar14);
          uVar7 = *(undefined4 *)(lVar12 + 8 + lVar14);
          lVar12 = param_2 + 0xaa80 + (ulong)(*puVar13 << 2) * 4;
          goto LAB_1003719d6;
        case 6:
          uVar6 = *(undefined4 *)(lVar12 + 4 + lVar14);
          uVar7 = *(undefined4 *)(lVar12 + 8 + lVar14);
          lVar12 = param_2 + 0xab80 + (ulong)*puVar13 * 4;
          goto LAB_1003719f7;
        case 7:
          FUN_100371a70(param_1,*(undefined4 *)(lVar12 + 8 + lVar14),param_2 + 0x9a70,
                        *(undefined8 *)(*param_1 + 0x3f0));
          break;
        case 8:
          uVar5 = *puVar13;
          lVar9 = *(long *)(*param_1 + 0x3f0);
          uVar15 = (ulong)(uint)(*(int *)(lVar12 + 8 + lVar14) << 4);
          pvVar20 = (void *)(param_2 + 0xaa80);
          if (*(long *)(lVar9 + 0x38) != *(long *)(lVar9 + 0x40)) {
            _memcpy(pvVar1,(void *)(param_2 + 0xaa80),uVar15);
            puVar11 = *(uint **)(lVar9 + 0x40);
            for (puVar13 = *(uint **)(lVar9 + 0x38); pvVar20 = pvVar1, puVar13 != puVar11;
                puVar13 = puVar13 + 5) {
              uVar4 = *puVar13;
              uVar10 = *(undefined8 *)(puVar13 + 1);
              *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x10 + 0x12d4) =
                   *(undefined8 *)(puVar13 + 3);
              *(undefined8 *)((long)pvVar1 + (ulong)uVar4 * 0x10) = uVar10;
            }
          }
          (*DAT_1011c5708)(0x8a11,*(undefined4 *)((long)param_1 + 0x13cc));
          (*DAT_1011c57d8)(0x8a11,uVar15,pvVar20,0x88e0);
          uVar6 = *(undefined4 *)((long)param_1 + 0x13cc);
          goto LAB_10037198f;
        case 9:
          uVar5 = *puVar13;
          uVar4 = *(uint *)(lVar12 + 8 + lVar14);
          lVar12 = *(long *)(*param_1 + 0x3f0);
          if ((ulong)uVar4 != 0) {
            lVar14 = 0;
            if ((uVar4 & 3) != 0) {
              lVar14 = 0;
              plVar18 = plVar2;
              do {
                *(undefined4 *)plVar18 = *(undefined4 *)(param_2 + 0xab80 + lVar14 * 4);
                lVar14 = lVar14 + 1;
                plVar18 = plVar18 + 2;
              } while ((uVar4 & 3) != (uint)lVar14);
            }
            if (2 < uVar4 - 1) {
              puVar16 = (undefined4 *)(param_2 + 0xab8c + lVar14 * 4);
              iVar17 = (uVar4 + 3) - ((int)lVar14 + 3);
              plVar18 = param_1 + lVar14 * 2 + 0x280;
              do {
                *(undefined4 *)(plVar18 + -6) = puVar16[-3];
                *(undefined4 *)(plVar18 + -4) = puVar16[-2];
                *(undefined4 *)(plVar18 + -2) = puVar16[-1];
                *(undefined4 *)plVar18 = *puVar16;
                puVar16 = puVar16 + 4;
                plVar18 = plVar18 + 8;
                iVar17 = iVar17 + -4;
              } while (iVar17 != 0);
            }
          }
          puVar11 = *(uint **)(lVar12 + 0x58);
          for (puVar13 = *(uint **)(lVar12 + 0x50); puVar13 != puVar11; puVar13 = puVar13 + 2) {
            *(uint *)(plVar2 + (ulong)*puVar13 * 2) = puVar13[1];
          }
          (*DAT_1011c5708)(0x8a11,(int)param_1[0x29a]);
          (*DAT_1011c57d8)(0x8a11,(ulong)uVar4 << 4,plVar2,0x88e0);
          uVar6 = (undefined4)param_1[0x29a];
LAB_10037198f:
          (*DAT_1011c74b0)(0x8a11,uVar5,uVar6);
          break;
        case 10:
          FUN_100372df0(param_1,puVar13,param_2 + 0xabc0,*(undefined8 *)(*param_1 + 0x3f8));
          break;
        case 0xb:
          uVar6 = *(undefined4 *)(lVar12 + 4 + lVar14);
          uVar7 = *(undefined4 *)(lVar12 + 8 + lVar14);
          lVar12 = param_2 + 0xb9c0 + (ulong)(*puVar13 << 2) * 4;
LAB_1003719d6:
          (*DAT_1011c6e38)(uVar6,uVar7,lVar12);
          break;
        case 0xc:
          uVar6 = *(undefined4 *)(lVar12 + 4 + lVar14);
          uVar7 = *(undefined4 *)(lVar12 + 8 + lVar14);
          lVar12 = param_2 + 0xbac0 + (ulong)*puVar13 * 4;
LAB_1003719f7:
          (*DAT_1011c6d48)(uVar6,uVar7,lVar12);
        }
LAB_100371a00:
        if ((int)lVar21 == iVar19 + -1) break;
        lVar21 = lVar21 + 1;
        lVar12 = *(long *)(lVar8 + 600);
      } while( true );
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

