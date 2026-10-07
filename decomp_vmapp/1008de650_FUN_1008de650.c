
long FUN_1008de650(long param_1)

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
  lVar8 = FUN_1008deab0(lVar1);
  lVar12 = 0;
  if ((lVar8 != 0) && (lVar12 = lVar8, *(long *)(lVar1 + 0x18) != 0)) {
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    iVar5 = FUN_100885600(uVar14);
    bVar4 = true;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        piVar9 = (int *)FUN_100885620(uVar14,iVar5);
        iVar6 = *piVar9;
        if (iVar6 != 3) {
          if (iVar6 == 2) {
            lVar2 = *(long *)(piVar9 + 2);
            if (*(long *)(lVar2 + 0x20) == 0) {
              FUN_100887ce0(0x2e,0x88,0x82,"cms_env.c");
              iVar6 = 0;
              goto LAB_1008de9d0;
            }
            lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x18);
            iVar6 = FUN_10082f8d0(*(long *)(lVar2 + 0x20),*(int *)(lVar2 + 0x28) << 3,local_128);
            if (iVar6 == 0) {
              lVar11 = FUN_10081ddd0(*(int *)(lVar3 + 0x28) + 8,"cms_env.c",0x274);
              if (lVar11 == 0) {
                uVar13 = 0x41;
                goto LAB_1008de92f;
              }
              iVar6 = FUN_10082f8f0(local_128,0,lVar11,*(undefined8 *)(lVar3 + 0x20));
              if (iVar6 < 1) {
                FUN_100887ce0(0x2e,0x88,0x9f,"cms_env.c");
                FUN_10081e1a0(lVar11);
                goto LAB_1008de937;
              }
              FUN_1008afdb0(*(undefined8 *)(lVar2 + 0x18),lVar11,iVar6);
              iVar6 = 1;
            }
            else {
              uVar13 = 0x73;
LAB_1008de92f:
              FUN_100887ce0(0x2e,0x88,uVar13,"cms_env.c");
LAB_1008de937:
              iVar6 = 0;
            }
            _OPENSSL_cleanse(local_128,0xf4);
            goto LAB_1008de9d0;
          }
          if (iVar6 == 0) {
            lVar2 = *(long *)(piVar9 + 2);
            lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x18);
            lVar11 = FUN_100895fc0(*(undefined8 *)(lVar2 + 0x28),0);
            if (lVar11 == 0) {
LAB_1008de9bc:
              iVar6 = 0;
            }
            else {
              iVar7 = FUN_100896c90(lVar11);
              iVar6 = 0;
              if (0 < iVar7) {
                iVar6 = FUN_1008964c0(lVar11,0xffffffff,0x100,9,0,piVar9);
                if (iVar6 < 1) {
                  FUN_100887ce0(0x2e,0x8d,0x6e,"cms_env.c");
                  iVar6 = 0;
                }
                else {
                  iVar7 = FUN_100896d10(lVar11,0,local_128,*(undefined8 *)(lVar3 + 0x20));
                  iVar6 = 0;
                  if (0 < iVar7) {
                    lVar10 = FUN_10081ddd0(local_128[0],"cms_env.c",0x140);
                    if (lVar10 == 0) {
                      FUN_100887ce0(0x2e,0x8d,0x41,"cms_env.c");
                    }
                    else {
                      iVar6 = FUN_100896d10(lVar11,lVar10,local_128,*(undefined8 *)(lVar3 + 0x20));
                      if (iVar6 < 1) {
                        FUN_1008963e0(lVar11);
                        FUN_10081e1a0(lVar10);
                        goto LAB_1008de9bc;
                      }
                      FUN_1008afdb0(*(undefined8 *)(lVar2 + 0x18),lVar10,local_128[0]);
                      iVar6 = 1;
                    }
                  }
                }
              }
              FUN_1008963e0(lVar11);
            }
            goto LAB_1008de9d0;
          }
          uVar14 = 0x9a;
          uVar13 = 0x314;
LAB_1008dea32:
          FUN_100887ce0(0x2e,0x7d,uVar14,"cms_env.c",uVar13);
          bVar4 = false;
          break;
        }
        iVar6 = FUN_1008df5d0(param_1,piVar9,1);
LAB_1008de9d0:
        if (iVar6 < 1) {
          uVar14 = 0x74;
          uVar13 = 0x31a;
          goto LAB_1008dea32;
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_100885600(uVar14);
        bVar4 = true;
      } while (iVar5 < iVar6);
    }
    *(undefined8 *)(lVar1 + 0x18) = 0;
    if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
      _OPENSSL_cleanse(*(void **)(lVar1 + 0x20),*(size_t *)(lVar1 + 0x28));
      FUN_10081e1a0(*(undefined8 *)(lVar1 + 0x20));
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    if (!bVar4) {
      FUN_10087d4e0(lVar8);
      lVar12 = 0;
    }
  }
  return lVar12;
}

