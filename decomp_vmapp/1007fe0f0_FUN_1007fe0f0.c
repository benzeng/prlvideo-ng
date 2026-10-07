
long FUN_1007fe0f0(undefined4 *param_1,int param_2,int param_3,uint param_4,ulong param_5,
                  undefined4 *param_6)

{
  uint *puVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  char *pcVar16;
  int *piVar17;
  long lVar18;
  
  lVar9 = *(long *)(param_1 + 0x20);
  if (*(int *)(lVar9 + 0x3c4) == 0) {
    lVar10 = *(long *)(param_1 + 0x14);
    if (param_1[0x12] == param_2) {
      pbVar2 = *(byte **)(lVar10 + 8);
      puVar1 = param_1 + 0x18;
      do {
        uVar5 = *puVar1;
        do {
          while ((int)uVar5 < 4) {
            iVar6 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                              (param_1,0x16,pbVar2 + (int)uVar5,4 - uVar5);
            if (iVar6 < 1) {
              param_1[10] = 3;
              *param_6 = 0;
              return (long)iVar6;
            }
            uVar5 = iVar6 + *puVar1;
            *puVar1 = uVar5;
          }
          uVar5 = (uint)*pbVar2;
          if ((param_1[0xe] != 0) || (*pbVar2 != 0)) {
LAB_1007fe281:
            bVar4 = (byte)uVar5;
            if ((int)param_4 < 0) {
              if (((param_3 == 0x2181) && (param_2 == 0x2180)) && (uVar5 == 1)) {
                FUN_1007fa490(param_1);
                bVar4 = *pbVar2;
              }
            }
            else if (uVar5 != param_4) {
              FUN_100887ce0(0x14,0x8e,0xf4,"s3_both.c",0x1dd);
              uVar11 = 10;
              goto LAB_1007fe340;
            }
            lVar9 = *(long *)(param_1 + 0x20);
            *(uint *)(lVar9 + 0x3a0) = (uint)bVar4;
            uVar13 = (ulong)pbVar2[3] | (ulong)pbVar2[2] << 8 | (ulong)pbVar2[1] << 0x10;
            if (param_5 < uVar13) {
              FUN_100887ce0(0x14,0x8e,0x98,"s3_both.c",0x1f1);
              uVar11 = 0x2f;
              goto LAB_1007fe340;
            }
            if (uVar13 != 0) {
              iVar6 = FUN_10087ce60(*(undefined8 *)(param_1 + 0x14),uVar13 + 4);
              if (iVar6 == 0) {
                FUN_100887ce0(0x14,0x8e,7,"s3_both.c",0x1fa);
                goto LAB_1007fe34d;
              }
              lVar9 = *(long *)(param_1 + 0x20);
            }
            *(ulong *)(lVar9 + 0x398) = uVar13;
            param_1[0x12] = param_3;
            lVar10 = *(long *)(param_1 + 0x14);
            lVar18 = *(long *)(lVar10 + 8) + 4;
            *(long *)(param_1 + 0x16) = lVar18;
            param_1[0x18] = 0;
            iVar6 = 0;
            goto LAB_1007fe3ae;
          }
          if ((pbVar2[1] != 0) || (pbVar2[2] != 0)) {
            uVar5 = 0;
            goto LAB_1007fe281;
          }
          uVar5 = 0;
          if (pbVar2[3] != 0) goto LAB_1007fe281;
          param_1[0x18] = 0;
        } while (*(code **)(param_1 + 0x26) == (code *)0x0);
        (**(code **)(param_1 + 0x26))
                  (0,*param_1,0x16,pbVar2,4,param_1,*(undefined8 *)(param_1 + 0x28));
      } while( true );
    }
    lVar18 = *(long *)(param_1 + 0x16);
    uVar13 = *(ulong *)(lVar9 + 0x398);
    iVar6 = param_1[0x18];
LAB_1007fe3ae:
    piVar17 = param_1 + 0x18;
    uVar14 = uVar13 - (long)iVar6;
    if (0 < (long)(uVar13 - (long)iVar6)) {
      do {
        iVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                          (param_1,0x16,iVar6 + lVar18,uVar14 & 0xffffffff,0);
        if (iVar7 < 1) {
          param_1[10] = 3;
          *param_6 = 0;
          return (long)iVar7;
        }
        iVar6 = *piVar17 + iVar7;
        *piVar17 = iVar6;
        uVar13 = uVar14 - (long)iVar7;
        bVar3 = (long)iVar7 <= (long)uVar14;
        uVar14 = uVar13;
      } while (uVar13 != 0 && bVar3);
      lVar10 = *(long *)(param_1 + 0x14);
    }
    pcVar16 = *(char **)(lVar10 + 8);
    if ((*pcVar16 == '\x14') && (*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) != 0)) {
      lVar9 = *(long *)(*(long *)(param_1 + 2) + 200);
      if ((*(byte *)((long)param_1 + 0x49) & 0x10) == 0) {
        puVar15 = (undefined8 *)(lVar9 + 0x40);
        puVar12 = (undefined4 *)(lVar9 + 0x48);
      }
      else {
        puVar15 = (undefined8 *)(lVar9 + 0x50);
        puVar12 = (undefined4 *)(lVar9 + 0x58);
      }
      uVar8 = (**(code **)(lVar9 + 0x28))
                        (param_1,*puVar15,*puVar12,*(long *)(param_1 + 0x20) + 0x314);
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x394) = uVar8;
      pcVar16 = *(char **)(*(long *)(param_1 + 0x14) + 8);
      iVar6 = param_1[0x18];
    }
    FUN_1007fa5f0(param_1,pcVar16,iVar6 + 4);
    if (*(code **)(param_1 + 0x26) != (code *)0x0) {
      (**(code **)(param_1 + 0x26))
                (0,*param_1,0x16,*(undefined8 *)(*(long *)(param_1 + 0x14) + 8),
                 (long)(int)param_1[0x18] + 4,param_1,*(undefined8 *)(param_1 + 0x28));
    }
    *param_6 = 1;
    lVar9 = (long)*piVar17;
  }
  else {
    *(undefined4 *)(lVar9 + 0x3c4) = 0;
    if (((int)param_4 < 0) || (*(uint *)(lVar9 + 0x3a0) == param_4)) {
      *param_6 = 1;
      param_1[0x12] = param_3;
      *(long *)(param_1 + 0x16) = *(long *)(*(long *)(param_1 + 0x14) + 8) + 4;
      iVar6 = (int)*(undefined8 *)(lVar9 + 0x398);
      param_1[0x18] = iVar6;
      lVar9 = (long)iVar6;
    }
    else {
      FUN_100887ce0(0x14,0x8e,0xf4,"s3_both.c",0x1a9);
      uVar11 = 10;
LAB_1007fe340:
      FUN_1007fd650(param_1,2,uVar11);
LAB_1007fe34d:
      *param_6 = 0;
      lVar9 = -1;
    }
  }
  return lVar9;
}

