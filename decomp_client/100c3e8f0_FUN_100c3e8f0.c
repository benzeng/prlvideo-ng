
int FUN_100c3e8f0(int *param_1,undefined8 param_2)

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
    plVar3 = (long *)FUN_100c7fb90(&DAT_10224cdb0);
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)*param_1;
      iVar2 = FUN_100c26610(*(undefined8 *)(param_1 + 6));
      uVar11 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
      iVar2 = FUN_100c36e50(*(undefined8 *)(param_1 + 2));
      uVar9 = (int)(iVar2 + 7 + ((uint)(iVar2 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar9 < uVar11) {
        uVar7 = 100;
        uVar8 = 0x478;
LAB_100c3eb5b:
        FUN_100c62ee0(0x10,0xc0,uVar7,"ec_asn1.c",uVar8);
        bVar1 = false;
        iVar2 = 0;
      }
      else {
        lVar4 = FUN_100bf3540(uVar9,"ec_asn1.c",0x47c);
        if (lVar4 == 0) {
          uVar7 = 0x41;
          uVar8 = 0x47e;
          goto LAB_100c3eb5b;
        }
        uVar10 = (ulong)(int)uVar9;
        iVar2 = FUN_100c26ff0(*(undefined8 *)(param_1 + 6),lVar4 + (uVar10 - (long)(int)uVar11));
        if (iVar2 == 0) {
          FUN_100c62ee0(0x10,0xc0,3,"ec_asn1.c",0x483);
          iVar2 = 0;
          bVar1 = false;
LAB_100c3eca9:
          FUN_100bf3910(lVar4);
        }
        else {
          if (uVar9 != uVar11) {
            ___bzero(lVar4,uVar10 - (long)(int)uVar11);
          }
          iVar2 = FUN_100c8b0b0(plVar3[1],lVar4,uVar9);
          local_40 = lVar4;
          if (iVar2 == 0) {
            uVar7 = 0xd;
            uVar8 = 0x48c;
LAB_100c3ec96:
            FUN_100c62ee0(0x10,0xc0,uVar7,"ec_asn1.c",uVar8);
            bVar1 = false;
            iVar2 = 0;
          }
          else {
            uVar9 = param_1[8];
            if ((uVar9 & 1) == 0) {
              lVar5 = FUN_100c3d950(*(undefined8 *)(param_1 + 2),plVar3[2]);
              plVar3[2] = lVar5;
              if (lVar5 == 0) {
                uVar7 = 0x10;
                uVar8 = 0x494;
                goto LAB_100c3ec96;
              }
              uVar9 = param_1[8];
            }
            if ((uVar9 & 2) == 0) {
              lVar5 = FUN_100c8b370(3);
              plVar3[3] = lVar5;
              if (lVar5 == 0) {
                uVar7 = 0x41;
                uVar8 = 0x49c;
                goto LAB_100c3ec96;
              }
              uVar6 = FUN_100c45420(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),
                                    param_1[9],0,0,0);
              if ((uVar10 < uVar6) &&
                 (local_40 = FUN_100bf36a0(lVar4,uVar6 & 0xffffffff,"ec_asn1.c",0x4a4),
                 uVar10 = uVar6, local_40 == 0)) {
                FUN_100c62ee0(0x10,0xc0,0x41,"ec_asn1.c",0x4a6);
                bVar1 = false;
                iVar2 = 0;
                local_40 = lVar4;
              }
              else {
                lVar4 = FUN_100c45420(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),
                                      param_1[9],local_40,uVar10,0);
                if (lVar4 == 0) {
                  FUN_100c62ee0(0x10,0xc0,0x10,"ec_asn1.c",0x4af);
                }
                else {
                  lVar4 = plVar3[3];
                  *(ulong *)(lVar4 + 0x10) = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffff0 | 8;
                  iVar2 = FUN_100c8b0b0(lVar4,local_40,uVar10 & 0xffffffff);
                  if (iVar2 != 0) goto LAB_100c3ec5a;
                  FUN_100c62ee0(0x10,0xc0,0xd,"ec_asn1.c",0x4b6);
                }
                bVar1 = false;
                iVar2 = 0;
              }
            }
            else {
LAB_100c3ec5a:
              iVar2 = FUN_100c80850(plVar3,param_2,&DAT_10224cdb0);
              if (iVar2 == 0) {
                uVar7 = 0x10;
                uVar8 = 0x4bc;
                goto LAB_100c3ec96;
              }
              bVar1 = true;
            }
          }
          lVar4 = local_40;
          if (local_40 != 0) goto LAB_100c3eca9;
        }
      }
      FUN_100c801c0(plVar3,&DAT_10224cdb0);
      goto LAB_100c3e9d4;
    }
    uVar7 = 0x41;
    uVar8 = 0x46b;
  }
  FUN_100c62ee0(0x10,0xc0,uVar7,"ec_asn1.c",uVar8);
  bVar1 = false;
  iVar2 = 0;
LAB_100c3e9d4:
  if (!bVar1) {
    iVar2 = 0;
  }
  return iVar2;
}

