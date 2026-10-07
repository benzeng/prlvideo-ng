
undefined8 FUN_1003d87a0(undefined8 param_1,uint *param_2,uint *param_3,int *param_4)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  void *pvVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  bool bVar26;
  long local_40;
  ulong uVar25;
  
  uVar2 = param_2[2];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  iVar5 = param_4[2];
  iVar6 = *param_4;
  uVar24 = iVar5 - iVar6;
  uVar25 = (ulong)uVar24;
  uVar15 = uVar4 & 0xfffffffc;
  uVar22 = uVar3 & 0xfffffffc;
  iVar10 = (uVar2 + 3 & 0xfffffffc) - uVar22;
  uVar20 = (uVar24 + iVar10 * 4) * 4;
  local_40 = *(long *)(param_3 + 4);
  iVar23 = param_4[1];
  uVar7 = param_2[3];
  iVar18 = param_4[3];
  uVar8 = *param_3;
  uVar13 = (ulong)(uint)(iVar10 * 4);
  pvVar14 = operator_new__((ulong)uVar20);
  iVar19 = *param_4;
  iVar9 = param_4[1];
  uVar17 = *param_3;
  uVar12 = param_3[3];
  DAT_1011bbc70 = pvVar14;
  DAT_1011bbc78 = uVar20;
  FUN_1003cff00(param_1,pvVar14,uVar13,uVar22,uVar15,param_2[2] - uVar22);
  uVar20 = iVar18 - iVar23;
  if (uVar20 != 0) {
    uVar11 = uVar2 - uVar3;
    pvVar1 = (void *)((long)pvVar14 + uVar13 * 4);
    local_40 = local_40 +
               (ulong)(uVar12 * iVar9 +
                      (*(uint *)(&DAT_100b3f714 + (ulong)uVar17 * 8) >> 0x18) * iVar19);
    uVar17 = 0;
    do {
      uVar12 = param_2[1];
      iVar23 = (int)((ulong)((uVar17 * 2 + 1) * (uVar7 - uVar4)) / (ulong)uVar20 >> 1);
      uVar21 = iVar23 + uVar12;
      if (uVar15 + 4 <= uVar21) {
        uVar15 = uVar21 & 0xfffffffc;
        FUN_1003cff00(param_1,pvVar14,uVar13,uVar22,uVar15,param_2[2] - uVar22);
        uVar12 = param_2[1];
      }
      if (iVar5 != iVar6) {
        iVar23 = ((iVar23 - uVar15) + uVar12) * iVar10 + (uVar3 - uVar22);
        bVar26 = (uVar24 & 1) != 0;
        if (bVar26) {
          *(undefined4 *)((long)pvVar14 + uVar13 * 4) =
               *(undefined4 *)
                ((long)pvVar14 + (ulong)(uint)((int)(uVar11 / uVar25 >> 1) + iVar23) * 4);
        }
        if (iVar5 + -1 != iVar6) {
          puVar16 = (undefined4 *)
                    ((long)pvVar14 +
                    ((ulong)((uVar2 * 4 + 0xc & 0xfffffff0) - (uVar3 * 4 & 0xfffffff0)) +
                    (ulong)bVar26) * 4 + 4);
          iVar19 = ((iVar5 + 1) - iVar6) - (bVar26 + 1);
          iVar18 = 0;
          do {
            puVar16[-1] = *(undefined4 *)
                           ((long)pvVar14 +
                           (ulong)(uint)((int)(((bVar26 + 1 + (uint)bVar26) * uVar11 + iVar18) /
                                               uVar25 >> 1) + iVar23) * 4);
            *puVar16 = *(undefined4 *)
                        ((long)pvVar14 +
                        (ulong)(uint)((int)(((bVar26 + 3 + (uint)bVar26) * uVar11 + iVar18) / uVar25
                                           >> 1) + iVar23) * 4);
            puVar16 = puVar16 + 2;
            iVar18 = iVar18 + uVar2 * 4 + uVar3 * -4;
            iVar19 = iVar19 + -2;
          } while (iVar19 != 0);
        }
      }
      if ((ulong)uVar8 - 0x53 < 0x11) {
        FUN_1003cb6a0(pvVar1,param_3,*param_4,param_4[1] + uVar17,uVar25);
      }
      else {
        FUN_1003ce230(pvVar1,*param_3,local_40,uVar25);
      }
      local_40 = local_40 + (ulong)param_3[3];
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar20);
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

