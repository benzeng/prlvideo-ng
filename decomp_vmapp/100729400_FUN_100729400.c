
int FUN_100729400(long param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong local_48;
  long *local_40;
  long *local_38;
  
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == 0) {
    return 1;
  }
  puVar6 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
  if (puVar6 == (undefined8 *)0x0) {
    return 2;
  }
  *(undefined4 *)(puVar6 + 7) = 0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  plVar7 = (long *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
  if (plVar7 == (long *)0x0) {
    FUN_100729fd0(puVar6);
    return 2;
  }
  *(undefined4 *)((long)plVar7 + 0x14) = 1;
  *(undefined4 *)(plVar7 + 2) = 0;
  plVar7[1] = 0;
  *plVar7 = 0;
  lVar8 = FUN_10072d5c0(plVar7,lVar8 + 0x10);
  iVar3 = 1;
  if (lVar8 == 0) {
LAB_100729aa6:
    FUN_100729fd0(puVar6);
    if (plVar7 == (long *)0x0) {
      return iVar3;
    }
  }
  else {
    iVar3 = 1;
    if ((int)plVar7[1] != 0) {
      ___bzero(param_3,param_2 << 4);
      ___bzero(param_4,param_2 * 8);
      iVar3 = 0;
      if (param_2 != 0) {
        local_48 = 0;
        do {
          local_38 = (long *)0x0;
          local_40 = (long *)0x0;
          iVar3 = FUN_100729b00(param_1,puVar6,&local_38,&local_40);
          plVar2 = local_38;
          if (iVar3 != 0) break;
          iVar11 = (int)local_38[1];
          iVar15 = iVar11 + -1;
          iVar4 = 0;
          iVar3 = 0;
          if ((long)iVar11 != 0) {
            iVar3 = FUN_10072d8e0(*(undefined8 *)(*local_38 + -8 + (long)iVar11 * 8));
            iVar3 = iVar3 + iVar15 * 0x40;
          }
          uVar12 = (int)(iVar3 + 7 + ((uint)(iVar3 + 7 >> 0x1f) >> 0x1d)) >> 3;
          iVar3 = (int)local_40[1];
          if ((long)iVar3 != 0) {
            iVar4 = FUN_10072d8e0(*(undefined8 *)(*local_40 + -8 + (long)iVar3 * 8));
            iVar4 = iVar4 + (iVar3 + -1) * 0x40;
          }
          iVar3 = 1;
          if (((8 < uVar12) ||
              (uVar5 = (int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3, 8 < uVar5)) ||
             (iVar11 == 0)) break;
          lVar8 = *plVar2;
          iVar3 = FUN_10072d8e0(*(undefined8 *)(lVar8 + (long)iVar15 * 8));
          plVar1 = local_40;
          if ((uint)(iVar3 + 0xe + iVar15 * 0x40) < 0xf) {
            iVar3 = 1;
            break;
          }
          iVar3 = iVar3 + 7 + iVar15 * 0x40;
          iVar4 = (int)(((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3) >> 3;
          uVar13 = local_48 << 4 | 8;
          lVar9 = uVar13 - (long)(int)uVar12;
          iVar11 = iVar4 + -1;
          iVar3 = iVar4 + -1 + ((uint)(iVar11 >> 0x1f) >> 0x1d);
          *(char *)(param_3 + lVar9) =
               (char)(*(ulong *)(lVar8 + (long)(iVar3 >> 3) * 8) >>
                     ((((char)iVar4 + -1) - ((byte)iVar3 & 0x18)) * '\b' & 0x3f));
          if (iVar11 != 0) {
            puVar10 = (undefined1 *)(lVar9 + param_3);
            if ((iVar4 - 1U & 1) != 0) {
              iVar11 = iVar4 + -2;
              iVar3 = iVar4 + -2 + ((uint)(iVar11 >> 0x1f) >> 0x1d);
              puVar10[1] = (char)(*(ulong *)(*plVar2 + (long)(iVar3 >> 3) * 8) >>
                                 (((char)iVar11 - ((byte)iVar3 & 0x18)) * '\b' & 0x3f));
              puVar10 = puVar10 + 1;
            }
            if (iVar4 != 2) {
              iVar11 = iVar11 + -1;
              do {
                iVar3 = ((uint)(iVar11 >> 0x1f) >> 0x1d) + iVar11;
                puVar10[1] = (char)(*(ulong *)(*plVar2 + (long)(iVar3 >> 3) * 8) >>
                                   (((char)iVar11 - ((byte)iVar3 & 0x18)) * '\b' & 0x3f));
                iVar3 = iVar11 + -1 + ((uint)(iVar11 + -1 >> 0x1f) >> 0x1d);
                puVar10[2] = (char)(*(ulong *)(*plVar2 + (long)(iVar3 >> 3) * 8) >>
                                   ((((char)iVar11 + -1) - ((byte)iVar3 & 0x18)) * '\b' & 0x3f));
                iVar11 = iVar11 + -2;
                puVar10 = puVar10 + 2;
              } while (iVar11 != -1);
            }
          }
          iVar3 = (int)local_40[1];
          if ((long)iVar3 == 0) {
LAB_100729a96:
            iVar3 = 1;
            break;
          }
          iVar11 = (iVar3 + -1) * 0x40;
          lVar8 = *local_40;
          iVar3 = FUN_10072d8e0(*(undefined8 *)(lVar8 + -8 + (long)iVar3 * 8));
          plVar2 = local_40;
          if ((uint)(iVar3 + 0xe + iVar11) < 0xf) goto LAB_100729a96;
          lVar9 = 8 - (long)(int)uVar5;
          iVar11 = iVar3 + 7 + iVar11;
          iVar4 = (int)(((uint)(iVar11 >> 0x1f) >> 0x1d) + iVar11) >> 3;
          lVar14 = uVar13 + lVar9;
          iVar3 = iVar4 + -1;
          iVar11 = iVar4 + -1 + ((uint)(iVar3 >> 0x1f) >> 0x1d);
          *(char *)(param_3 + lVar14) =
               (char)(*(ulong *)(lVar8 + (long)(iVar11 >> 3) * 8) >>
                     ((((char)iVar4 + -1) - ((byte)iVar11 & 0x18)) * '\b' & 0x3f));
          if (iVar3 != 0) {
            puVar10 = (undefined1 *)(lVar14 + param_3);
            if ((iVar4 - 1U & 1) != 0) {
              iVar3 = iVar4 + -2;
              iVar11 = iVar4 + -2 + ((uint)(iVar3 >> 0x1f) >> 0x1d);
              puVar10[1] = (char)(*(ulong *)(*plVar1 + (long)(iVar11 >> 3) * 8) >>
                                 (((char)iVar3 - ((byte)iVar11 & 0x18)) * '\b' & 0x3f));
              puVar10 = puVar10 + 1;
            }
            if (iVar4 != 2) {
              iVar3 = iVar3 + -1;
              do {
                iVar11 = ((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3;
                puVar10[1] = (char)(*(ulong *)(*plVar1 + (long)(iVar11 >> 3) * 8) >>
                                   (((char)iVar3 - ((byte)iVar11 & 0x18)) * '\b' & 0x3f));
                iVar11 = iVar3 + -1 + ((uint)(iVar3 + -1 >> 0x1f) >> 0x1d);
                puVar10[2] = (char)(*(ulong *)(*plVar1 + (long)(iVar11 >> 3) * 8) >>
                                   ((((char)iVar3 + -1) - ((byte)iVar11 & 0x18)) * '\b' & 0x3f));
                iVar3 = iVar3 + -2;
                puVar10 = puVar10 + 2;
              } while (iVar3 != -1);
            }
          }
          iVar3 = (int)local_40[1];
          if ((long)iVar3 == 0) goto LAB_100729a96;
          iVar4 = (iVar3 + -1) * 0x40;
          lVar8 = *local_40;
          iVar11 = FUN_10072d8e0(*(undefined8 *)(lVar8 + -8 + (long)iVar3 * 8));
          plVar1 = local_38;
          iVar3 = 1;
          if ((uint)(iVar11 + 0xe + iVar4) < 0xf) break;
          iVar4 = iVar11 + 7 + iVar4;
          iVar4 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + iVar4) >> 3;
          lVar9 = lVar9 + local_48 * 8;
          iVar3 = iVar4 + -1;
          iVar11 = iVar4 + -1 + ((uint)(iVar3 >> 0x1f) >> 0x1d);
          *(char *)(param_4 + lVar9) =
               (char)(*(ulong *)(lVar8 + (long)(iVar11 >> 3) * 8) >>
                     ((((char)iVar4 + -1) - ((byte)iVar11 & 0x18)) * '\b' & 0x3f));
          if (iVar3 != 0) {
            puVar10 = (undefined1 *)(lVar9 + param_4);
            if ((iVar4 - 1U & 1) != 0) {
              iVar3 = iVar4 + -2;
              iVar11 = iVar4 + -2 + ((uint)(iVar3 >> 0x1f) >> 0x1d);
              puVar10[1] = (char)(*(ulong *)(*plVar2 + (long)(iVar11 >> 3) * 8) >>
                                 (((char)iVar3 - ((byte)iVar11 & 0x18)) * '\b' & 0x3f));
              puVar10 = puVar10 + 1;
            }
            if (iVar4 != 2) {
              iVar3 = iVar3 + -1;
              do {
                iVar11 = ((uint)(iVar3 >> 0x1f) >> 0x1d) + iVar3;
                puVar10[1] = (char)(*(ulong *)(*plVar2 + (long)(iVar11 >> 3) * 8) >>
                                   (((char)iVar3 - ((byte)iVar11 & 0x18)) * '\b' & 0x3f));
                iVar11 = iVar3 + -1 + ((uint)(iVar3 + -1 >> 0x1f) >> 0x1d);
                puVar10[2] = (char)(*(ulong *)(*plVar2 + (long)(iVar11 >> 3) * 8) >>
                                   ((((char)iVar3 + -1) - ((byte)iVar11 & 0x18)) * '\b' & 0x3f));
                iVar3 = iVar3 + -2;
                puVar10 = puVar10 + 2;
              } while (iVar3 != -1);
            }
          }
          if (local_38 != (long *)0x0) {
            if ((*local_38 != 0) && ((*(byte *)((long)local_38 + 0x14) & 2) == 0)) {
              FUN_10081e1a0();
            }
            if ((*(byte *)((long)plVar1 + 0x14) & 1) == 0) {
              *plVar1 = 0;
            }
            else {
              FUN_10081e1a0(plVar1);
            }
          }
          plVar2 = local_40;
          if (local_40 != (long *)0x0) {
            if ((*local_40 != 0) && ((*(byte *)((long)local_40 + 0x14) & 2) == 0)) {
              FUN_10081e1a0();
            }
            if ((*(byte *)((long)plVar2 + 0x14) & 1) == 0) {
              *plVar2 = 0;
            }
            else {
              FUN_10081e1a0(plVar2);
            }
          }
          local_48 = local_48 + 1;
          iVar3 = 0;
        } while (local_48 < param_2);
        goto LAB_100729aa6;
      }
    }
    FUN_100729fd0(puVar6);
  }
  if ((*plVar7 != 0) && ((*(byte *)((long)plVar7 + 0x14) & 2) == 0)) {
    FUN_10081e1a0();
  }
  if ((*(byte *)((long)plVar7 + 0x14) & 1) == 0) {
    *plVar7 = 0;
  }
  else {
    FUN_10081e1a0(plVar7);
  }
  return iVar3;
}

