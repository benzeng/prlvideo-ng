
int FUN_1008636f0(int *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long local_40;
  
  if ((((param_1 == (int *)0x0) || (*(long *)(param_1 + 2) == 0)) || (*(long *)(param_1 + 6) == 0))
     || (((*(byte *)(param_1 + 8) & 2) == 0 && (*(long *)(param_1 + 4) == 0)))) {
    uVar7 = 0x43;
    uVar8 = 0x466;
  }
  else {
    plVar3 = (long *)FUN_1008a4610(&DAT_100bdca70);
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)*param_1;
      iVar2 = FUN_10084b410(*(undefined8 *)(param_1 + 6));
      uVar11 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
      iVar2 = FUN_10085bc50(*(undefined8 *)(param_1 + 2));
      uVar9 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar9 < uVar11) {
        uVar7 = 100;
        uVar8 = 0x478;
LAB_10086395b:
        FUN_100887ce0(0x10,0xc0,uVar7,"ec_asn1.c",uVar8);
        bVar1 = false;
        iVar2 = 0;
      }
      else {
        lVar4 = FUN_10081ddd0(uVar9,"ec_asn1.c",0x47c);
        if (lVar4 == 0) {
          uVar7 = 0x41;
          uVar8 = 0x47e;
          goto LAB_10086395b;
        }
        uVar10 = (ulong)(int)uVar9;
        iVar2 = FUN_10084bdf0(*(undefined8 *)(param_1 + 6),lVar4 + (uVar10 - (long)(int)uVar11));
        if (iVar2 == 0) {
          FUN_100887ce0(0x10,0xc0,3,"ec_asn1.c",0x483);
          iVar2 = 0;
          bVar1 = false;
LAB_100863aa9:
          FUN_10081e1a0(lVar4);
        }
        else {
          if (uVar9 != uVar11) {
            ___bzero(lVar4,uVar10 - (long)(int)uVar11);
          }
          iVar2 = FUN_1008afb30(plVar3[1],lVar4,uVar9);
          local_40 = lVar4;
          if (iVar2 == 0) {
            uVar7 = 0xd;
            uVar8 = 0x48c;
LAB_100863a96:
            FUN_100887ce0(0x10,0xc0,uVar7,"ec_asn1.c",uVar8);
            bVar1 = false;
            iVar2 = 0;
          }
          else {
            uVar9 = param_1[8];
            if ((uVar9 & 1) == 0) {
              lVar5 = FUN_100862750(*(undefined8 *)(param_1 + 2),plVar3[2]);
              plVar3[2] = lVar5;
              if (lVar5 == 0) {
                uVar7 = 0x10;
                uVar8 = 0x494;
                goto LAB_100863a96;
              }
              uVar9 = param_1[8];
            }
            if ((uVar9 & 2) == 0) {
              lVar5 = FUN_1008afdf0(3);
              plVar3[3] = lVar5;
              if (lVar5 == 0) {
                uVar7 = 0x41;
                uVar8 = 0x49c;
                goto LAB_100863a96;
              }
              uVar6 = FUN_10086a220(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),
                                    param_1[9],0,0,0);
              if ((uVar10 < uVar6) &&
                 (local_40 = FUN_10081df30(lVar4,uVar6 & 0xffffffff,"ec_asn1.c",0x4a4),
                 uVar10 = uVar6, local_40 == 0)) {
                FUN_100887ce0(0x10,0xc0,0x41,"ec_asn1.c",0x4a6);
                bVar1 = false;
                iVar2 = 0;
                local_40 = lVar4;
              }
              else {
                lVar4 = FUN_10086a220(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),
                                      param_1[9],local_40,uVar10,0);
                if (lVar4 == 0) {
                  FUN_100887ce0(0x10,0xc0,0x10,"ec_asn1.c",0x4af);
                }
                else {
                  lVar4 = plVar3[3];
                  *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffff0 | 8;
                  iVar2 = FUN_1008afb30(lVar4,local_40,uVar10 & 0xffffffff);
                  if (iVar2 != 0) goto LAB_100863a5a;
                  FUN_100887ce0(0x10,0xc0,0xd,"ec_asn1.c",0x4b6);
                }
                bVar1 = false;
                iVar2 = 0;
              }
            }
            else {
LAB_100863a5a:
              iVar2 = FUN_1008a52d0(plVar3,param_2,&DAT_100bdca70);
              if (iVar2 == 0) {
                uVar7 = 0x10;
                uVar8 = 0x4bc;
                goto LAB_100863a96;
              }
              bVar1 = true;
            }
          }
          lVar4 = local_40;
          if (local_40 != 0) goto LAB_100863aa9;
        }
      }
      FUN_1008a4c40(plVar3,&DAT_100bdca70);
      goto LAB_1008637d4;
    }
    uVar7 = 0x41;
    uVar8 = 0x46b;
  }
  FUN_100887ce0(0x10,0xc0,uVar7,"ec_asn1.c",uVar8);
  bVar1 = false;
  iVar2 = 0;
LAB_1008637d4:
  if (!bVar1) {
    iVar2 = 0;
  }
  return iVar2;
}

