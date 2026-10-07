
void FUN_100358ac0(uint *param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  if (param_3 != 0) {
    uVar5 = 0x101;
    bVar10 = false;
    do {
      *param_1 = 0;
      iVar1 = *(int *)(param_2 + (ulong)uVar5 * 4);
      uVar7 = *(uint *)(param_2 + (ulong)(uVar5 + 0x19) * 4);
      uVar2 = *(uint *)(param_2 + (ulong)(uVar5 + 1) * 4);
      uVar3 = *(uint *)(param_2 + (ulong)(uVar5 + 2) * 4);
      uVar8 = *(uint *)(param_2 + (ulong)(uVar5 + 0x1b) * 4) & 0xf;
      if ((!bVar10) && ((bVar10 = true, iVar1 == 1 || (uVar8 != 2)))) {
        if (iVar1 < 0x16) {
          uVar6 = uVar2;
          if (iVar1 < 0x11) {
            if (0xe < iVar1) {
              if (iVar1 == 0xf) goto LAB_100358bb0;
              goto LAB_100358b93;
            }
            if (2 < iVar1) {
              uVar6 = uVar3;
              if (iVar1 == 3) goto LAB_100358ba1;
              if (iVar1 != 0xd) goto LAB_100358b93;
              goto LAB_100358bb0;
            }
            if (iVar1 == 1) {
              bVar10 = false;
              goto LAB_100358bb0;
            }
            if (iVar1 != 2) goto LAB_100358b93;
          }
          else {
            if (iVar1 == 0x11) goto LAB_100358ba1;
LAB_100358b93:
            uVar6 = uVar3;
            if ((uVar2 & 0xf) == 2) goto LAB_100358bb0;
          }
LAB_100358ba1:
          bVar10 = (uVar6 & 0xf) == 2;
        }
        else if ((1 < iVar1 - 0x16U) && ((1 < iVar1 - 0x19U || ((uVar7 & 0xf) != 2))))
        goto LAB_100358b93;
      }
LAB_100358bb0:
      if ((iVar1 == 1) || (uVar8 != 5)) {
        bVar9 = false;
        if (iVar1 < 0x16) {
          uVar7 = uVar2;
          if (iVar1 < 0x11) {
            if (0xe < iVar1) goto LAB_100358c40;
            if (iVar1 < 3) {
              bVar9 = false;
              if (iVar1 == 1) goto LAB_100358c57;
              if (iVar1 != 2) goto LAB_100358c40;
            }
            else {
              uVar7 = uVar3;
              if (iVar1 != 3) goto LAB_100358c40;
            }
          }
          else {
            if (iVar1 == 0x11) goto LAB_100358c54;
LAB_100358c40:
            bVar9 = true;
            uVar7 = uVar3;
            if ((uVar2 & 0xf) == 5) goto LAB_100358c57;
          }
LAB_100358c54:
          bVar9 = (uVar7 & 0xf) == 5;
        }
        else if (1 < iVar1 - 0x16U) {
          if ((1 < iVar1 - 0x19U) || ((uVar7 & 0xf) != 5)) goto LAB_100358c40;
          bVar9 = true;
        }
      }
      else {
        bVar9 = true;
      }
LAB_100358c57:
      iVar4 = *(int *)(param_2 + (ulong)(uVar5 + 3) * 4);
      uVar7 = *(uint *)(param_2 + (ulong)(uVar5 + 0x1a) * 4);
      uVar2 = *(uint *)(param_2 + (ulong)(uVar5 + 4) * 4);
      uVar3 = *(uint *)(param_2 + (ulong)(uVar5 + 5) * 4);
      if ((!bVar10) && ((bVar10 = true, uVar8 != 2 || (iVar4 == 1)))) {
        if (iVar4 < 0x16) {
          uVar6 = uVar2;
          if (iVar4 < 0x11) {
            if (0xe < iVar4) {
              if (iVar4 == 0xf) goto LAB_100358d20;
              goto LAB_100358cfb;
            }
            if (2 < iVar4) {
              uVar6 = uVar3;
              if (iVar4 == 3) goto LAB_100358d09;
              if (iVar4 != 0xd) goto LAB_100358cfb;
              goto LAB_100358d20;
            }
            if (iVar4 == 1) {
              bVar10 = false;
              goto LAB_100358d20;
            }
            if (iVar4 != 2) goto LAB_100358cfb;
          }
          else {
            if (iVar4 == 0x11) goto LAB_100358d09;
LAB_100358cfb:
            uVar6 = uVar3;
            if ((uVar2 & 0xf) == 2) goto LAB_100358d20;
          }
LAB_100358d09:
          bVar10 = (uVar6 & 0xf) == 2;
        }
        else if ((1 < iVar4 - 0x16U) && ((1 < iVar4 - 0x19U || ((uVar7 & 0xf) != 2))))
        goto LAB_100358cfb;
      }
LAB_100358d20:
      if (!bVar9) {
        if ((uVar8 == 5) && (iVar4 != 1)) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
          if (iVar4 < 0x16) {
            uVar7 = uVar2;
            if (iVar4 < 0x11) {
              if (0xe < iVar4) goto LAB_100358da8;
              if (iVar4 < 3) {
                bVar9 = false;
                if (iVar4 == 1) goto LAB_100358dc0;
                if (iVar4 != 2) goto LAB_100358da8;
              }
              else {
                uVar7 = uVar3;
                if (iVar4 != 3) goto LAB_100358da8;
              }
            }
            else {
              if (iVar4 == 0x11) goto LAB_100358dbc;
LAB_100358da8:
              bVar9 = true;
              uVar7 = uVar3;
              if ((uVar2 & 0xf) == 5) goto LAB_100358dc0;
            }
LAB_100358dbc:
            bVar9 = (uVar7 & 0xf) == 5;
          }
          else if (1 < iVar4 - 0x16U) {
            if ((1 < iVar4 - 0x19U) || ((uVar7 & 0xf) != 5)) goto LAB_100358da8;
            bVar9 = true;
          }
        }
      }
LAB_100358dc0:
      if (bVar10) {
        *param_1 = 1;
      }
      uVar7 = (uint)bVar10;
      if (bVar9) {
        uVar7 = uVar7 | 8;
        *param_1 = uVar7;
      }
      bVar10 = true;
      if (iVar1 != 0x11) {
        if (iVar1 == 0x17) {
          uVar7 = uVar7 | 6;
LAB_100358df9:
          *param_1 = uVar7;
        }
        else if (iVar1 == 0x16) {
          uVar7 = uVar7 | 2;
          goto LAB_100358df9;
        }
        bVar10 = iVar4 == 0x11;
      }
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

