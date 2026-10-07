
undefined8 FUN_1008d0700(long param_1,byte *param_2,long *param_3,byte *param_4)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  size_t sVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte bVar17;
  undefined8 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  byte *local_68;
  
  plVar6 = (long *)FUN_10087ccc0();
  uVar15 = 0;
  if (plVar6 != (long *)0x0) {
    sVar7 = _strlen((char *)param_4);
    iVar4 = FUN_10087cd60(plVar6,(long)((sVar7 << 0x20) + 0x100000000) >> 0x20);
    if (iVar4 == 0) {
LAB_1008d0b9b:
      uVar15 = 0;
      FUN_10087cd20(plVar6);
    }
    else {
      bVar2 = 0;
      uVar21 = 0;
LAB_1008d0796:
      while( true ) {
        pbVar20 = param_4;
        bVar17 = *pbVar20;
        lVar8 = *(long *)(param_1 + 8);
        uVar1 = *(ushort *)(lVar8 + (ulong)bVar17 * 2);
        iVar4 = (int)uVar21;
        if ((uVar1 & 0x40) == 0) break;
        param_4 = pbVar20 + 1;
        bVar11 = pbVar20[1];
        uVar12 = (ulong)bVar11;
        if ((bVar11 == bVar17) || (uVar1 = *(ushort *)(lVar8 + uVar12 * 2), (uVar1 & 8) != 0)) {
          lVar10 = 2;
        }
        else {
          uVar21 = (ulong)iVar4;
          do {
            bVar11 = (byte)uVar12;
            if ((uVar1 & 0x20) != 0) {
              param_4 = pbVar20 + 2;
              bVar11 = pbVar20[2];
              if ((*(byte *)(lVar8 + (ulong)bVar11 * 2) & 8) != 0) {
                lVar10 = 3;
                break;
              }
            }
            pbVar20 = param_4;
            *(byte *)(plVar6[1] + uVar21) = bVar11;
            param_4 = pbVar20 + 1;
            bVar11 = pbVar20[1];
            uVar12 = (ulong)bVar11;
            uVar21 = uVar21 + 1;
            if (bVar11 == bVar17) {
              lVar10 = 2;
              break;
            }
            lVar8 = *(long *)(param_1 + 8);
            uVar1 = *(ushort *)(lVar8 + uVar12 * 2);
            lVar10 = 2;
          } while ((uVar1 & 8) == 0);
        }
        if (bVar11 == bVar17) {
          param_4 = pbVar20 + lVar10;
        }
      }
      if ((uVar1 & 0x400) != 0) {
        uVar12 = (ulong)pbVar20[1];
        pbVar13 = pbVar20 + 1;
        bVar11 = pbVar20[1];
        if ((*(byte *)(lVar8 + uVar12 * 2) & 8) == 0) {
          uVar21 = (ulong)iVar4;
          pbVar19 = pbVar20;
          do {
            pbVar20 = pbVar13;
            bVar11 = (byte)uVar12;
            if ((uint)uVar12 == (uint)bVar17) {
              pbVar13 = pbVar20;
              pbVar20 = pbVar19;
              bVar11 = bVar17;
              if ((uint)pbVar19[2] != (uint)bVar17) break;
              pbVar20 = pbVar19 + 2;
            }
            *(byte *)(plVar6[1] + uVar21) = bVar11;
            pbVar13 = pbVar20 + 1;
            bVar11 = pbVar20[1];
            uVar12 = (ulong)bVar11;
            uVar21 = uVar21 + 1;
            pbVar19 = pbVar20;
          } while ((*(byte *)(*(long *)(param_1 + 8) + uVar12 * 2) & 8) == 0);
        }
        param_4 = pbVar20 + 2;
        if (bVar11 != bVar17) {
          param_4 = pbVar13;
        }
        goto LAB_1008d0796;
      }
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 8) != 0) goto LAB_1008d0b0a;
        param_4 = pbVar20 + 1;
        if (bVar17 == 0x24) {
          bVar17 = 0;
          if (pbVar20[1] == 0x28) {
            bVar17 = 0x29;
          }
          if (pbVar20[1] == 0x7b) {
            bVar17 = 0x7d;
          }
          pbVar13 = param_4;
          if (bVar17 != 0) {
            param_4 = pbVar20 + 2;
            pbVar13 = pbVar20 + 2;
          }
          do {
            pbVar19 = param_4;
            bVar11 = *pbVar19;
            param_4 = pbVar19 + 1;
          } while ((*(ushort *)(lVar8 + (ulong)bVar11 * 2) & 0x107) != 0);
          if (bVar11 == 0x3a) {
            if (pbVar19[1] != 0x3a) {
              bVar11 = 0x3a;
              goto LAB_1008d0a39;
            }
            bVar2 = 0x3a;
            *pbVar19 = 0;
            pbVar14 = pbVar19 + 2;
            pbVar16 = pbVar19 + 1;
            do {
              bVar11 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              local_68 = pbVar19;
            } while ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar11 * 2) & 0x107) != 0);
          }
          else {
LAB_1008d0a39:
            local_68 = (byte *)0x0;
            pbVar14 = pbVar13;
            pbVar16 = pbVar19;
            pbVar13 = param_2;
          }
          *pbVar16 = 0;
          param_4 = pbVar16;
          if (bVar17 == 0) {
LAB_1008d0a65:
            pcVar9 = (char *)FUN_1008cf6d0(param_1,pbVar13,pbVar14);
            if (local_68 != (byte *)0x0) {
              *local_68 = bVar2;
            }
            *pbVar16 = bVar11;
            if (pcVar9 == (char *)0x0) {
              uVar15 = 0x68;
              uVar18 = 0x248;
            }
            else {
              sVar7 = _strlen(pcVar9);
              iVar5 = FUN_10087ce60(plVar6,pbVar20 + *plVar6 + (sVar7 - (long)param_4));
              if (iVar5 != 0) {
                cVar3 = *pcVar9;
                if (cVar3 != '\0') {
                  uVar21 = (ulong)iVar4;
                  do {
                    pcVar9 = pcVar9 + 1;
                    *(char *)(plVar6[1] + uVar21) = cVar3;
                    uVar21 = uVar21 + 1;
                    cVar3 = *pcVar9;
                  } while (cVar3 != '\0');
                }
                *pbVar16 = bVar11;
                goto LAB_1008d0796;
              }
              uVar15 = 0x41;
              uVar18 = 0x24d;
            }
          }
          else {
            if (bVar11 == bVar17) {
              param_4 = pbVar16 + 1;
              goto LAB_1008d0a65;
            }
            uVar15 = 0x66;
            uVar18 = 0x234;
          }
          FUN_100887ce0(0xe,0x65,uVar15,"conf_def.c",uVar18);
          goto LAB_1008d0b9b;
        }
        uVar21 = (ulong)(iVar4 + 1);
        *(byte *)(plVar6[1] + (long)iVar4) = bVar17;
        goto LAB_1008d0796;
      }
      bVar17 = pbVar20[1];
      if ((*(byte *)(lVar8 + (ulong)bVar17 * 2) & 8) == 0) {
        if (bVar17 == 0x62) {
          bVar11 = 8;
        }
        else {
          bVar11 = 0xd;
          if (bVar17 != 0x72) {
            if (bVar17 == 0x6e) {
              bVar11 = 10;
            }
            else {
              bVar11 = 9;
              if (bVar17 != 0x74) {
                bVar11 = bVar17;
              }
            }
          }
        }
        uVar21 = (ulong)(iVar4 + 1);
        *(byte *)(plVar6[1] + (long)iVar4) = bVar11;
        param_4 = pbVar20 + 2;
        goto LAB_1008d0796;
      }
LAB_1008d0b0a:
      *(undefined1 *)(plVar6[1] + (long)iVar4) = 0;
      if (*param_3 != 0) {
        FUN_10081e1a0();
      }
      *param_3 = plVar6[1];
      FUN_10081e1a0(plVar6);
      uVar15 = 1;
    }
  }
  return uVar15;
}

