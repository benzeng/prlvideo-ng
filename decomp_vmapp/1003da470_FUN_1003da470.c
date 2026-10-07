
undefined8 FUN_1003da470(uint *param_1,int *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  void *pvVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar25;
  uint uVar26;
  bool bVar28;
  ulong uVar24;
  ulong uVar27;
  
  uVar2 = *param_1;
  iVar3 = *param_2;
  iVar4 = param_2[2];
  uVar21 = iVar4 - iVar3;
  uVar24 = (ulong)uVar21;
  iVar5 = param_4[2];
  iVar6 = *param_4;
  uVar26 = iVar5 - iVar6;
  uVar27 = (ulong)uVar26;
  iVar7 = param_2[3];
  iVar8 = param_2[1];
  uVar25 = (uVar26 + uVar21) * 0x10;
  bVar1 = (&DAT_100b3f717)[(ulong)uVar2 * 8];
  uVar9 = *param_3;
  lVar13 = *(long *)(param_1 + 4);
  lVar19 = *(long *)(param_3 + 4);
  iVar20 = param_4[1];
  iVar23 = param_4[3];
  pvVar15 = operator_new__((ulong)uVar25);
  uVar10 = param_1[3];
  iVar11 = param_2[1];
  iVar12 = *param_2;
  uVar22 = iVar23 - iVar20;
  DAT_1011bbc70 = pvVar15;
  DAT_1011bbc78 = uVar25;
  if (uVar22 != 0) {
    lVar17 = uVar24 * 0x10;
    lVar19 = lVar19 + (ulong)(param_3[3] * param_4[1] +
                             (*(uint *)(&DAT_100b3f714 + (ulong)uVar9 * 8) >> 0x18) * *param_4);
    uVar25 = 0;
    do {
      iVar20 = (int)((ulong)((uVar25 * 2 + 1) * (iVar7 - iVar8)) / (ulong)uVar22 >> 1);
      if ((ulong)uVar2 - 0x53 < 0x11) {
        FUN_1003cad80(param_1,pvVar15,*param_2,iVar20 + param_2[1]);
      }
      else {
        FUN_1003d57d0((ulong)(iVar20 * param_1[3]) + (ulong)((uint)bVar1 * iVar12 + uVar10 * iVar11)
                      + lVar13,*param_1,pvVar15,uVar24);
      }
      if (iVar5 != iVar6) {
        bVar28 = (uVar26 & 1) != 0;
        if (bVar28) {
          lVar16 = (uVar24 / uVar27 >> 1) * 0x10;
          uVar14 = *(undefined8 *)((long)pvVar15 + lVar16);
          *(undefined8 *)((long)pvVar15 + lVar17 + 8) = *(undefined8 *)((long)pvVar15 + lVar16 + 8);
          *(undefined8 *)((long)pvVar15 + lVar17) = uVar14;
        }
        if (iVar5 + -1 != iVar6) {
          puVar18 = (undefined8 *)((uVar24 + bVar28) * 0x10 + (long)pvVar15);
          iVar23 = ((iVar5 + 1) - iVar6) - (bVar28 + 1);
          iVar20 = 0;
          do {
            lVar16 = (((bVar28 + 1 + (uint)bVar28) * uVar21 + iVar20) / uVar27 >> 1) * 0x10;
            uVar14 = *(undefined8 *)((long)pvVar15 + lVar16);
            puVar18[1] = *(undefined8 *)((long)pvVar15 + lVar16 + 8);
            *puVar18 = uVar14;
            lVar16 = (((bVar28 + 3 + (uint)bVar28) * uVar21 + iVar20) / uVar27 >> 1) * 0x10;
            uVar14 = *(undefined8 *)((long)pvVar15 + lVar16);
            puVar18[3] = *(undefined8 *)((long)pvVar15 + lVar16 + 8);
            puVar18[2] = uVar14;
            puVar18 = puVar18 + 4;
            iVar20 = iVar20 + iVar4 * 4 + iVar3 * -4;
            iVar23 = iVar23 + -2;
          } while (iVar23 != 0);
        }
      }
      if ((ulong)uVar9 - 0x53 < 0x11) {
        FUN_1003cbda0((void *)((long)pvVar15 + lVar17),param_3,*param_4,param_4[1] + uVar25,uVar27);
      }
      else {
        FUN_1003d2880((void *)((long)pvVar15 + lVar17),*param_3,lVar19,uVar27);
      }
      lVar19 = lVar19 + (ulong)param_3[3];
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar22);
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

