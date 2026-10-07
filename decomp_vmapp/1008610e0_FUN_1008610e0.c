
long FUN_1008610e0(int param_1)

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
    piVar5 = &DAT_100bdbcf0;
    do {
      if (*piVar5 == param_1) {
        lVar6 = FUN_10084c820();
        if (lVar6 == 0) {
          FUN_100887ce0(0x10,0xaf,0x41,"ec_curve.c",0x9b1);
          FUN_10085af70(0);
        }
        else {
          piVar5 = *(int **)(&UNK_100bdbcf8 + uVar12 * 0x20);
          iVar4 = piVar5[2];
          iVar2 = piVar5[1];
          lVar15 = (long)iVar2;
          local_38 = 0;
          lVar7 = FUN_10084bc20((long)piVar5 + lVar15 + 0x10,iVar4,0);
          if (lVar7 == 0) {
LAB_10086125a:
            FUN_100887ce0(0x10,0xaf,3,"ec_curve.c",0x9be);
            local_50 = 0;
            lVar8 = 0;
LAB_100861283:
            FUN_10085af70(lVar8);
            FUN_10084c8b0(lVar6);
            lVar8 = 0;
            lVar9 = 0;
            local_88 = 0;
            lVar11 = 0;
            lVar6 = 0;
            lVar16 = 0;
            lVar15 = 0;
            if (lVar7 != 0) goto LAB_10086151e;
          }
          else {
            lVar16 = (long)iVar4;
            piVar1 = piVar5 + 4;
            local_38 = 0;
            lVar8 = FUN_10084bc20(lVar16 + lVar15 + (long)piVar1,iVar4,0);
            if ((lVar8 == 0) ||
               (local_50 = FUN_10084bc20(lVar15 + lVar16 * 2 + (long)piVar1,iVar4,0),
               local_38 = lVar8, local_50 == 0)) goto LAB_10086125a;
            if (*piVar5 != 0x196) {
              lVar8 = FUN_10085f5b0(lVar7,lVar8,local_50,lVar6);
              if (lVar8 != 0) goto LAB_1008612f0;
              uVar13 = 0x9d4;
LAB_10086145b:
              FUN_100887ce0(0x10,0xaf,0x10,"ec_curve.c",uVar13);
              lVar8 = 0;
              goto LAB_100861283;
            }
            lVar8 = FUN_10085f4d0(lVar7,lVar8,local_50,lVar6);
            if (lVar8 == 0) {
              uVar13 = 0x9cb;
              goto LAB_10086145b;
            }
LAB_1008612f0:
            lVar10 = FUN_10085b6e0(lVar8);
            if (lVar10 == 0) {
              FUN_100887ce0(0x10,0xaf,0x10,"ec_curve.c",0x9db);
              goto LAB_100861283;
            }
            lVar9 = FUN_10084bc20(lVar16 * 3 + lVar15 + (long)piVar1,iVar4,0);
            if ((lVar9 == 0) ||
               (local_88 = FUN_10084bc20(lVar15 + lVar16 * 4 + (long)piVar1,iVar4,0), local_88 == 0)
               ) {
              FUN_100887ce0(0x10,0xaf,3,"ec_curve.c",0x9e1);
              local_88 = 0;
              lVar11 = 0;
LAB_1008614f0:
              FUN_10085af70(lVar8);
              lVar8 = 0;
            }
            else {
              iVar3 = FUN_10085c310(lVar8,lVar10,lVar9,local_88,lVar6);
              if (iVar3 == 0) {
                FUN_100887ce0(0x10,0xaf,0x10,"ec_curve.c",0x9e5);
                lVar11 = 0;
                goto LAB_1008614f0;
              }
              lVar11 = FUN_10084bc20(iVar4 * 5 + lVar15 + (long)piVar1,iVar4,0);
              if ((lVar11 == 0) || (iVar4 = FUN_10084bbb0(lVar9,piVar5[3]), iVar4 == 0)) {
                uVar13 = 3;
                uVar14 = 0x9ea;
LAB_1008614eb:
                FUN_100887ce0(0x10,0xaf,uVar13,"ec_curve.c",uVar14);
                goto LAB_1008614f0;
              }
              iVar4 = FUN_10085b890(lVar8,lVar10,lVar11,lVar9);
              if (iVar4 == 0) {
                uVar13 = 0x10;
                uVar14 = 0x9ee;
                goto LAB_1008614eb;
              }
              if ((iVar2 != 0) && (lVar15 = FUN_10085baa0(lVar8,piVar1), lVar15 == 0)) {
                uVar13 = 0x10;
                uVar14 = 0x9f3;
                goto LAB_1008614eb;
              }
            }
            FUN_10085b080(lVar10);
            FUN_10084c8b0(lVar6);
LAB_10086151e:
            FUN_10084b4b0(lVar7);
            lVar6 = lVar9;
            lVar15 = lVar11;
            lVar16 = local_88;
          }
          if (local_38 != 0) {
            FUN_10084b4b0();
          }
          if (local_50 != 0) {
            FUN_10084b4b0();
          }
          if (lVar15 != 0) {
            FUN_10084b4b0(lVar15);
          }
          if (lVar6 != 0) {
            FUN_10084b4b0(lVar6);
          }
          if (lVar16 != 0) {
            FUN_10084b4b0(lVar16);
          }
          if (lVar8 != 0) {
            FUN_10085ba40(lVar8,param_1);
            return lVar8;
          }
        }
        break;
      }
      uVar12 = uVar12 + 1;
      piVar5 = piVar5 + 8;
    } while (uVar12 < 0x43);
    FUN_100887ce0(0x10,0xae,0x81,"ec_curve.c",0xa1f);
  }
  return 0;
}

