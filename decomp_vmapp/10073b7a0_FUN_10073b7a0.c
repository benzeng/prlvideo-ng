
int FUN_10073b7a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  bool bVar17;
  
  FUN_1007353b0(param_3);
  plVar3 = (long *)FUN_100735470(param_3);
  plVar4 = (long *)FUN_100735470(param_3);
  bVar17 = false;
  if (plVar4 == (long *)0x0) {
    iVar7 = -2;
  }
  else {
    lVar5 = FUN_10072d5c0(plVar3,param_1);
    if (lVar5 == 0) {
      bVar17 = true;
      iVar7 = -2;
    }
    else {
      lVar5 = FUN_10072d5c0(plVar4,param_2);
      bVar17 = lVar5 == 0;
      if (bVar17) {
        iVar7 = -2;
      }
      else {
        iVar2 = (int)plVar4[1];
        if (iVar2 == 0) {
          if (((int)plVar3[1] != 1) || (iVar7 = 1, *(long *)*plVar3 != 1)) {
            iVar7 = 0;
          }
        }
        else {
          if (((int)plVar3[1] < 1) || ((*(byte *)*plVar3 & 1) == 0)) {
            iVar7 = 0;
            if ((iVar2 < 1) || (pbVar12 = (byte *)*plVar4, (*pbVar12 & 1) == 0)) goto LAB_10073ba97;
          }
          else {
            pbVar12 = (byte *)*plVar4;
          }
          plVar16 = plVar3 + 1;
          uVar6 = 0;
          while( true ) {
            iVar9 = (int)uVar6;
            iVar7 = (int)(((uint)(iVar9 >> 0x1f) >> 0x1a) + iVar9) >> 6;
            if ((iVar7 < iVar2) &&
               ((*(ulong *)(pbVar12 + (long)iVar7 * 8) >> (uVar6 & 0x3f) & 1) != 0)) break;
            uVar6 = (ulong)(iVar9 + 1);
          }
          iVar7 = FUN_100737060(plVar4,plVar4,uVar6);
          bVar17 = iVar7 == 0;
          if (bVar17) {
            iVar7 = -2;
          }
          else {
            iVar7 = 1;
            if ((uVar6 & 1) != 0) {
              uVar6 = 0;
              if ((int)*plVar16 != 0) {
                uVar6 = *(ulong *)*plVar3 & 7;
              }
              iVar7 = *(int *)((long)&PTR___mh_execute_header_100b4abe0 + uVar6 * 4);
            }
            if (((int)plVar4[2] != 0) && (*(undefined4 *)(plVar4 + 2) = 0, (int)plVar3[2] != 0)) {
              iVar7 = -iVar7;
            }
            iVar2 = (int)*plVar16;
            while (plVar1 = plVar3, iVar2 != 0) {
              uVar6 = 0;
              while( true ) {
                iVar13 = (int)uVar6;
                iVar9 = (int)(((uint)(iVar13 >> 0x1f) >> 0x1a) + iVar13) >> 6;
                if ((iVar9 < iVar2) &&
                   ((*(ulong *)(*plVar1 + (long)iVar9 * 8) >> (uVar6 & 0x3f) & 1) != 0)) break;
                uVar6 = (ulong)(iVar13 + 1);
              }
              iVar2 = FUN_100737060(plVar1,plVar1,uVar6);
              if (iVar2 == 0) {
                bVar17 = true;
                goto LAB_10073ba97;
              }
              if ((uVar6 & 1) != 0) {
                uVar6 = 0;
                if ((int)plVar4[1] != 0) {
                  uVar6 = *(ulong *)*plVar4;
                }
                iVar7 = iVar7 * *(int *)((long)&PTR___mh_execute_header_100b4abe0 + (uVar6 & 7) * 4)
                ;
              }
              if ((int)plVar1[2] == 0) {
                uVar14 = 0;
                if ((int)*plVar16 != 0) {
                  uVar14 = (uint)*(undefined8 *)*plVar1;
                }
              }
              else {
                uVar14 = 0;
                if ((int)*plVar16 != 0) {
                  uVar14 = (uint)*(undefined8 *)*plVar1;
                }
                uVar14 = ~uVar14;
              }
              uVar10 = 0;
              if ((int)plVar4[1] != 0) {
                uVar10 = (uint)*(undefined8 *)*plVar4;
              }
              iVar2 = -iVar7;
              if ((uVar14 & uVar10 & 2) == 0) {
                iVar2 = iVar7;
              }
              iVar9 = FUN_1007366c0(0,plVar4,plVar4,plVar1,param_3);
              bVar17 = true;
              iVar7 = iVar2;
              if (iVar9 == 0) goto LAB_10073ba97;
              bVar17 = false;
              if ((int)plVar4[2] != 0) {
                pcVar8 = FUN_100737670;
                if ((int)plVar1[2] == 0) {
                  pcVar8 = FUN_100737900;
                }
                iVar2 = (*pcVar8)(plVar4,plVar4,plVar1);
                bVar17 = iVar2 == 0;
                if (bVar17) goto LAB_10073ba97;
              }
              plVar16 = plVar4 + 1;
              *(undefined4 *)(plVar1 + 2) = 0;
              plVar3 = plVar4;
              plVar4 = plVar1;
              iVar2 = (int)*plVar16;
            }
            if ((int)plVar4[1] == 1) {
              if (*(long *)*plVar4 != 1) {
                iVar7 = 0;
              }
            }
            else {
              iVar7 = 0;
            }
          }
        }
      }
    }
  }
LAB_10073ba97:
  if (*(int *)(param_3 + 0x34) == 0) {
    uVar14 = *(int *)(param_3 + 0x28) - 1;
    *(uint *)(param_3 + 0x28) = uVar14;
    uVar14 = *(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar14 * 4);
    uVar10 = *(uint *)(param_3 + 0x30);
    if (uVar14 <= uVar10 && uVar10 - uVar14 != 0) {
      iVar2 = *(int *)(param_3 + 0x18);
      uVar11 = uVar10 - uVar14;
      *(uint *)(param_3 + 0x18) = iVar2 - (uVar10 - uVar14);
      if (uVar11 != 0) {
        uVar15 = iVar2 + 0xfU & 0xf;
        if ((uVar11 & 1) != 0) {
          if (uVar15 == 0) {
            *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 0x180);
            uVar15 = 0xf;
          }
          else {
            uVar15 = uVar15 - 1;
          }
          uVar11 = uVar11 - 1;
        }
        if (uVar10 - 1 != uVar14) {
          do {
            if (uVar15 == 0) {
              *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 0x180);
              iVar2 = 0xf;
            }
            else {
              iVar2 = uVar15 - 1;
            }
            uVar11 = uVar11 - 2;
            if (iVar2 == 0) {
              *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 0x180);
              uVar15 = 0xf;
            }
            else {
              uVar15 = iVar2 - 1;
            }
          } while (uVar11 != 0);
        }
      }
    }
    *(uint *)(param_3 + 0x30) = uVar14;
    *(undefined4 *)(param_3 + 0x38) = 0;
  }
  else {
    *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + -1;
  }
  iVar2 = -2;
  if (!bVar17) {
    iVar2 = iVar7;
  }
  return iVar2;
}

