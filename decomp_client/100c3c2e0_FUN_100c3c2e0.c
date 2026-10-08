
long FUN_100c3c2e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long local_88;
  long local_50;
  long local_38;
  
  uVar12 = 0;
  if (0 < param_1) {
    piVar5 = &DAT_10224c030;
    do {
      if (*piVar5 == param_1) {
        lVar6 = FUN_100c27a20();
        if (lVar6 == 0) {
          FUN_100c62ee0(0x10,0xaf,0x41,"ec_curve.c",0x9b1);
          FUN_100c36170(0);
        }
        else {
          piVar5 = *(int **)(&UNK_10224c038 + uVar12 * 0x20);
          iVar4 = piVar5[2];
          iVar2 = piVar5[1];
          lVar15 = (long)iVar2;
          local_38 = 0;
          lVar7 = FUN_100c26e20((long)piVar5 + lVar15 + 0x10,iVar4,0);
          if (lVar7 == 0) {
LAB_100c3c45a:
            FUN_100c62ee0(0x10,0xaf,3,"ec_curve.c",0x9be);
            local_50 = 0;
            lVar8 = 0;
LAB_100c3c483:
            FUN_100c36170(lVar8);
            FUN_100c27ab0(lVar6);
            lVar8 = 0;
            lVar9 = 0;
            local_88 = 0;
            lVar11 = 0;
            lVar6 = 0;
            lVar16 = 0;
            lVar15 = 0;
            if (lVar7 != 0) goto LAB_100c3c71e;
          }
          else {
            lVar16 = (long)iVar4;
            piVar1 = piVar5 + 4;
            local_38 = 0;
            lVar8 = FUN_100c26e20(lVar16 + lVar15 + (long)piVar1,iVar4,0);
            if ((lVar8 == 0) ||
               (local_50 = FUN_100c26e20(lVar15 + lVar16 * 2 + (long)piVar1,iVar4,0),
               local_38 = lVar8, local_50 == 0)) goto LAB_100c3c45a;
            if (*piVar5 != 0x196) {
              lVar8 = FUN_100c3a7b0(lVar7,lVar8,local_50,lVar6);
              if (lVar8 != 0) goto LAB_100c3c4f0;
              uVar13 = 0x9d4;
LAB_100c3c65b:
              FUN_100c62ee0(0x10,0xaf,0x10,"ec_curve.c",uVar13);
              lVar8 = 0;
              goto LAB_100c3c483;
            }
            lVar8 = FUN_100c3a6d0(lVar7,lVar8,local_50,lVar6);
            if (lVar8 == 0) {
              uVar13 = 0x9cb;
              goto LAB_100c3c65b;
            }
LAB_100c3c4f0:
            lVar10 = FUN_100c368e0(lVar8);
            if (lVar10 == 0) {
              FUN_100c62ee0(0x10,0xaf,0x10,"ec_curve.c",0x9db);
              goto LAB_100c3c483;
            }
            lVar9 = FUN_100c26e20(lVar16 * 3 + lVar15 + (long)piVar1,iVar4,0);
            if ((lVar9 == 0) ||
               (local_88 = FUN_100c26e20(lVar15 + lVar16 * 4 + (long)piVar1,iVar4,0), local_88 == 0)
               ) {
              FUN_100c62ee0(0x10,0xaf,3,"ec_curve.c",0x9e1);
              local_88 = 0;
              lVar11 = 0;
LAB_100c3c6f0:
              FUN_100c36170(lVar8);
              lVar8 = 0;
            }
            else {
              iVar3 = FUN_100c37510(lVar8,lVar10,lVar9,local_88,lVar6);
              if (iVar3 == 0) {
                FUN_100c62ee0(0x10,0xaf,0x10,"ec_curve.c",0x9e5);
                lVar11 = 0;
                goto LAB_100c3c6f0;
              }
              lVar11 = FUN_100c26e20(iVar4 * 5 + lVar15 + (long)piVar1,iVar4,0);
              if ((lVar11 == 0) || (iVar4 = FUN_100c26db0(lVar9,piVar5[3]), iVar4 == 0)) {
                uVar13 = 3;
                uVar14 = 0x9ea;
LAB_100c3c6eb:
                FUN_100c62ee0(0x10,0xaf,uVar13,"ec_curve.c",uVar14);
                goto LAB_100c3c6f0;
              }
              iVar4 = FUN_100c36a90(lVar8,lVar10,lVar11,lVar9);
              if (iVar4 == 0) {
                uVar13 = 0x10;
                uVar14 = 0x9ee;
                goto LAB_100c3c6eb;
              }
              if ((iVar2 != 0) && (lVar15 = FUN_100c36ca0(lVar8,piVar1), lVar15 == 0)) {
                uVar13 = 0x10;
                uVar14 = 0x9f3;
                goto LAB_100c3c6eb;
              }
            }
            FUN_100c36280(lVar10);
            FUN_100c27ab0(lVar6);
LAB_100c3c71e:
            FUN_100c266b0(lVar7);
            lVar6 = lVar9;
            lVar15 = lVar11;
            lVar16 = local_88;
          }
          if (local_38 != 0) {
            FUN_100c266b0();
          }
          if (local_50 != 0) {
            FUN_100c266b0();
          }
          if (lVar15 != 0) {
            FUN_100c266b0(lVar15);
          }
          if (lVar6 != 0) {
            FUN_100c266b0(lVar6);
          }
          if (lVar16 != 0) {
            FUN_100c266b0(lVar16);
          }
          if (lVar8 != 0) {
            FUN_100c36c40(lVar8,param_1);
            return lVar8;
          }
        }
        break;
      }
      uVar12 = uVar12 + 1;
      piVar5 = piVar5 + 8;
    } while (uVar12 < 0x43);
    FUN_100c62ee0(0x10,0xae,0x81,"ec_curve.c",0xa1f);
  }
  return 0;
}

