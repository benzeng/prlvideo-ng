
undefined8 FUN_1003d10b0(undefined8 param_1,uint *param_2,uint *param_3,int *param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  
  lVar14 = *(long *)(param_3 + 4);
  iVar2 = param_4[1];
  iVar3 = param_4[2];
  iVar4 = *param_4;
  uVar5 = *param_3;
  uVar6 = *param_2;
  uVar12 = param_2[1] & 0xfffffffc;
  uVar13 = uVar6 & 0xfffffffc;
  iVar9 = (param_2[2] + 3 & 0xfffffffc) - uVar13;
  uVar15 = iVar9 * 0x10;
  pvVar11 = operator_new__((ulong)uVar15);
  iVar7 = *param_4;
  iVar8 = param_4[1];
  uVar16 = *param_3;
  uVar10 = param_3[3];
  DAT_1011bbc70 = pvVar11;
  DAT_1011bbc78 = uVar15;
  FUN_1003cff00(param_1,pvVar11,uVar15,uVar13,uVar12,param_2[2] - uVar13);
  if (param_4[3] != param_4[1]) {
    lVar14 = lVar14 + (ulong)(uVar10 * iVar8 +
                             (*(uint *)(&DAT_100b3f714 + (ulong)uVar16 * 8) >> 0x18) * iVar7);
    uVar16 = 0;
    do {
      uVar10 = param_2[1];
      if (uVar12 + 4 <= uVar16 + uVar10) {
        uVar12 = uVar16 + uVar10 & 0xfffffffc;
        FUN_1003cff00(param_1,pvVar11,(ulong)uVar15,uVar13,uVar12,param_2[2] - uVar13);
        uVar10 = param_2[1];
      }
      pvVar1 = (void *)((long)pvVar11 +
                       (ulong)(((uVar10 - uVar12) + uVar16) * iVar9 + (uVar6 - uVar13)) * 4);
      if ((ulong)uVar5 - 0x53 < 0x11) {
        FUN_1003cb6a0(pvVar1,param_3,*param_4,iVar2 + uVar16,iVar3 - iVar4);
      }
      else {
        FUN_1003ce230(pvVar1,*param_3,lVar14,iVar3 - iVar4);
      }
      lVar14 = lVar14 + (ulong)param_3[3];
      uVar16 = uVar16 + 1;
    } while (uVar16 < (uint)(param_4[3] - param_4[1]));
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

