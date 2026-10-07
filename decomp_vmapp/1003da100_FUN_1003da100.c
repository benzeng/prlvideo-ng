
undefined8 FUN_1003da100(uint *param_1,int *param_2,uint *param_3,int *param_4)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  void *pvVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  long lVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  bool bVar26;
  ulong uVar19;
  ulong uVar25;
  
  uVar3 = *param_1;
  iVar4 = *param_2;
  iVar5 = param_2[2];
  uVar17 = iVar5 - iVar4;
  uVar19 = (ulong)uVar17;
  iVar6 = param_4[2];
  iVar7 = *param_4;
  uVar24 = iVar6 - iVar7;
  uVar25 = (ulong)uVar24;
  iVar8 = param_2[3];
  iVar9 = param_2[1];
  uVar23 = (uVar24 + uVar17) * 4;
  bVar2 = (&DAT_100b3f717)[(ulong)uVar3 * 8];
  uVar10 = *param_3;
  lVar14 = *(long *)(param_1 + 4);
  lVar20 = *(long *)(param_3 + 4);
  iVar18 = param_4[1];
  iVar22 = param_4[3];
  pvVar15 = operator_new__((ulong)uVar23);
  uVar11 = param_1[3];
  iVar12 = param_2[1];
  iVar13 = *param_2;
  uVar21 = iVar22 - iVar18;
  DAT_1011bbc70 = pvVar15;
  DAT_1011bbc78 = uVar23;
  if (uVar21 != 0) {
    pvVar1 = (void *)((long)pvVar15 + uVar19 * 4);
    lVar20 = lVar20 + (ulong)(param_3[3] * param_4[1] +
                             (*(uint *)(&DAT_100b3f714 + (ulong)uVar10 * 8) >> 0x18) * *param_4);
    uVar23 = 0;
    do {
      iVar18 = (int)((ulong)((uVar23 * 2 + 1) * (iVar8 - iVar9)) / (ulong)uVar21 >> 1);
      if ((ulong)uVar3 - 0x53 < 0x11) {
        FUN_1003ca660(param_1,pvVar15,*param_2,iVar18 + param_2[1]);
      }
      else {
        FUN_1003cc7b0((ulong)(iVar18 * param_1[3]) + (ulong)((uint)bVar2 * iVar13 + uVar11 * iVar12)
                      + lVar14,*param_1,pvVar15,uVar19);
      }
      if (iVar6 != iVar7) {
        bVar26 = (uVar24 & 1) != 0;
        if (bVar26) {
          *(undefined4 *)((long)pvVar15 + uVar19 * 4) =
               *(undefined4 *)((long)pvVar15 + (uVar19 / uVar25 >> 1) * 4);
        }
        if (iVar6 + -1 != iVar7) {
          puVar16 = (undefined4 *)((long)pvVar15 + (uVar19 + bVar26) * 4 + 4);
          iVar22 = ((iVar6 + 1) - iVar7) - (bVar26 + 1);
          iVar18 = 0;
          do {
            puVar16[-1] = *(undefined4 *)
                           ((long)pvVar15 +
                           (((bVar26 + 1 + (uint)bVar26) * uVar17 + iVar18) / uVar25 >> 1) * 4);
            *puVar16 = *(undefined4 *)
                        ((long)pvVar15 +
                        (((bVar26 + 3 + (uint)bVar26) * uVar17 + iVar18) / uVar25 >> 1) * 4);
            puVar16 = puVar16 + 2;
            iVar18 = iVar18 + iVar5 * 4 + iVar4 * -4;
            iVar22 = iVar22 + -2;
          } while (iVar22 != 0);
        }
      }
      if ((ulong)uVar10 - 0x53 < 0x11) {
        FUN_1003cb6a0(pvVar1,param_3,*param_4,param_4[1] + uVar23,uVar25);
      }
      else {
        FUN_1003ce230(pvVar1,*param_3,lVar20,uVar25);
      }
      lVar20 = lVar20 + (ulong)param_3[3];
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar21);
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

