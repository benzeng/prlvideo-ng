
undefined8 FUN_1003d9200(undefined8 param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar27;
  long local_40;
  ulong uVar26;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  iVar4 = param_4[2];
  iVar5 = *param_4;
  uVar25 = iVar4 - iVar5;
  uVar26 = (ulong)uVar25;
  uVar15 = uVar3 & 0xfffffffc;
  uVar10 = uVar2 & 0xfffffffc;
  iVar23 = (uVar1 + 3 & 0xfffffffc) - uVar10;
  uVar21 = (uVar25 + iVar23 * 4) * 0x10;
  local_40 = *(long *)(param_3 + 4);
  iVar24 = param_4[1];
  uVar6 = param_2[3];
  iVar19 = param_4[3];
  uVar7 = *param_3;
  pvVar13 = operator_new__((ulong)uVar21);
  iVar20 = *param_4;
  iVar8 = param_4[1];
  uVar18 = *param_3;
  uVar12 = param_3[3];
  DAT_1011bbc70 = pvVar13;
  DAT_1011bbc78 = uVar21;
  FUN_1003d14f0(param_1,pvVar13,iVar23 * 0x10,uVar10,uVar15,param_2[2] - uVar10);
  uVar21 = iVar19 - iVar24;
  if (uVar21 != 0) {
    uVar11 = uVar1 - uVar2;
    lVar17 = (ulong)(uint)(iVar23 * 4) * 0x10;
    local_40 = local_40 +
               (ulong)(uVar12 * iVar8 +
                      (*(uint *)(&DAT_100b3f714 + (ulong)uVar18 * 8) >> 0x18) * iVar20);
    uVar18 = 0;
    do {
      uVar12 = param_2[1];
      iVar24 = (int)((ulong)((uVar18 * 2 + 1) * (uVar6 - uVar3)) / (ulong)uVar21 >> 1);
      uVar22 = iVar24 + uVar12;
      if (uVar15 + 4 <= uVar22) {
        uVar15 = uVar22 & 0xfffffffc;
        FUN_1003d14f0(param_1,pvVar13,iVar23 * 0x10,uVar10,uVar15,param_2[2] - uVar10);
        uVar12 = param_2[1];
      }
      if (iVar4 != iVar5) {
        iVar24 = ((iVar24 - uVar15) + uVar12) * iVar23 + (uVar2 - uVar10);
        bVar27 = (uVar25 & 1) != 0;
        if (bVar27) {
          lVar14 = (ulong)(uint)((int)(uVar11 / uVar26 >> 1) + iVar24) * 0x10;
          uVar9 = *(undefined8 *)((long)pvVar13 + lVar14);
          *(undefined8 *)((long)pvVar13 + lVar17 + 8) = *(undefined8 *)((long)pvVar13 + lVar14 + 8);
          *(undefined8 *)((long)pvVar13 + lVar17) = uVar9;
        }
        if (iVar4 + -1 != iVar5) {
          puVar16 = (undefined8 *)
                    (((ulong)((uVar1 * 4 + 0xc & 0xfffffff0) - (uVar2 * 4 & 0xfffffff0)) +
                     (ulong)bVar27) * 0x10 + (long)pvVar13);
          iVar20 = ((iVar4 + 1) - iVar5) - (bVar27 + 1);
          iVar19 = 0;
          do {
            lVar14 = (ulong)(uint)((int)(((bVar27 + 1 + (uint)bVar27) * uVar11 + iVar19) / uVar26 >>
                                        1) + iVar24) * 0x10;
            uVar9 = *(undefined8 *)((long)pvVar13 + lVar14);
            puVar16[1] = *(undefined8 *)((long)pvVar13 + lVar14 + 8);
            *puVar16 = uVar9;
            lVar14 = (ulong)(uint)((int)(((bVar27 + 3 + (uint)bVar27) * uVar11 + iVar19) / uVar26 >>
                                        1) + iVar24) * 0x10;
            uVar9 = *(undefined8 *)((long)pvVar13 + lVar14);
            puVar16[3] = *(undefined8 *)((long)pvVar13 + lVar14 + 8);
            puVar16[2] = uVar9;
            puVar16 = puVar16 + 4;
            iVar19 = iVar19 + uVar1 * 4 + uVar2 * -4;
            iVar20 = iVar20 + -2;
          } while (iVar20 != 0);
        }
      }
      if ((ulong)uVar7 - 0x53 < 0x11) {
        FUN_1003cbda0((void *)((long)pvVar13 + lVar17),param_3,*param_4,param_4[1] + uVar18,uVar26);
      }
      else {
        FUN_1003d2880((void *)((long)pvVar13 + lVar17),*param_3,local_40,uVar26);
      }
      local_40 = local_40 + (ulong)param_3[3];
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar21);
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

