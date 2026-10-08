
long FUN_100cbae90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_128 [62];
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  lVar8 = FUN_100cbb2f0(lVar1);
  lVar12 = 0;
  if ((lVar8 != 0) && (lVar12 = lVar8, *(long *)(lVar1 + 0x18) != 0)) {
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    iVar5 = FUN_100c60800(uVar14);
    bVar4 = true;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        piVar9 = (int *)FUN_100c60820(uVar14,iVar5);
        iVar6 = *piVar9;
        if (iVar6 != 3) {
          if (iVar6 == 2) {
            lVar2 = *(long *)(piVar9 + 2);
            if (*(long *)(lVar2 + 0x20) == 0) {
              FUN_100c62ee0(0x2e,0x88,0x82,"cms_env.c");
              iVar6 = 0;
              goto LAB_100cbb210;
            }
            lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x18);
            iVar6 = FUN_100c0aae0(*(long *)(lVar2 + 0x20),*(int *)(lVar2 + 0x28) << 3,local_128);
            if (iVar6 == 0) {
              lVar11 = FUN_100bf3540(*(int *)(lVar3 + 0x28) + 8,"cms_env.c",0x274);
              if (lVar11 == 0) {
                uVar13 = 0x41;
                goto LAB_100cbb16f;
              }
              iVar6 = FUN_100c0ab00(local_128,0,lVar11,*(undefined8 *)(lVar3 + 0x20));
              if (iVar6 < 1) {
                FUN_100c62ee0(0x2e,0x88,0x9f,"cms_env.c");
                FUN_100bf3910(lVar11);
                goto LAB_100cbb177;
              }
              FUN_100c8b330(*(undefined8 *)(lVar2 + 0x18),lVar11,iVar6);
              iVar6 = 1;
            }
            else {
              uVar13 = 0x73;
LAB_100cbb16f:
              FUN_100c62ee0(0x2e,0x88,uVar13,"cms_env.c");
LAB_100cbb177:
              iVar6 = 0;
            }
            _OPENSSL_cleanse(local_128,0xf4);
            goto LAB_100cbb210;
          }
          if (iVar6 == 0) {
            lVar2 = *(long *)(piVar9 + 2);
            lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x18);
            lVar11 = FUN_100c71540(*(undefined8 *)(lVar2 + 0x28),0);
            if (lVar11 == 0) {
LAB_100cbb1fc:
              iVar6 = 0;
            }
            else {
              iVar7 = FUN_100c72210(lVar11);
              iVar6 = 0;
              if (0 < iVar7) {
                iVar6 = FUN_100c71a40(lVar11,0xffffffff,0x100,9,0,piVar9);
                if (iVar6 < 1) {
                  FUN_100c62ee0(0x2e,0x8d,0x6e,"cms_env.c");
                  iVar6 = 0;
                }
                else {
                  iVar7 = FUN_100c72290(lVar11,0,local_128,*(undefined8 *)(lVar3 + 0x20));
                  iVar6 = 0;
                  if (0 < iVar7) {
                    lVar10 = FUN_100bf3540(local_128[0],"cms_env.c",0x140);
                    if (lVar10 == 0) {
                      FUN_100c62ee0(0x2e,0x8d,0x41,"cms_env.c");
                    }
                    else {
                      iVar6 = FUN_100c72290(lVar11,lVar10,local_128,*(undefined8 *)(lVar3 + 0x20));
                      if (iVar6 < 1) {
                        FUN_100c71960(lVar11);
                        FUN_100bf3910(lVar10);
                        goto LAB_100cbb1fc;
                      }
                      FUN_100c8b330(*(undefined8 *)(lVar2 + 0x18),lVar10,local_128[0]);
                      iVar6 = 1;
                    }
                  }
                }
              }
              FUN_100c71960(lVar11);
            }
            goto LAB_100cbb210;
          }
          uVar14 = 0x9a;
          uVar13 = 0x314;
LAB_100cbb272:
          FUN_100c62ee0(0x2e,0x7d,uVar14,"cms_env.c",uVar13);
          bVar4 = false;
          break;
        }
        iVar6 = FUN_100cbbe10(param_1,piVar9,1);
LAB_100cbb210:
        if (iVar6 < 1) {
          uVar14 = 0x74;
          uVar13 = 0x31a;
          goto LAB_100cbb272;
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_100c60800(uVar14);
        bVar4 = true;
      } while (iVar5 < iVar6);
    }
    *(undefined8 *)(lVar1 + 0x18) = 0;
    if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
      _OPENSSL_cleanse(*(void **)(lVar1 + 0x20),*(size_t *)(lVar1 + 0x28));
      FUN_100bf3910(*(undefined8 *)(lVar1 + 0x20));
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    if (!bVar4) {
      FUN_100c586e0(lVar8);
      lVar12 = 0;
    }
  }
  return lVar12;
}

