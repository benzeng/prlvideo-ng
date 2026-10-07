
undefined8 FUN_1003d12d0(undefined8 param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  
  lVar14 = *(long *)(param_3 + 4);
  iVar1 = param_4[1];
  iVar2 = param_4[2];
  iVar3 = *param_4;
  uVar4 = *param_3;
  uVar5 = *param_2;
  uVar9 = param_2[1] & 0xfffffffc;
  uVar12 = uVar5 & 0xfffffffc;
  iVar13 = (param_2[2] + 3 & 0xfffffffc) - uVar12;
  pvVar8 = operator_new__((ulong)(uint)(iVar13 * 0x40));
  iVar6 = *param_4;
  iVar7 = param_4[1];
  uVar15 = *param_3;
  uVar10 = param_3[3];
  DAT_1011bbc70 = pvVar8;
  DAT_1011bbc78 = iVar13 * 0x40;
  FUN_1003d14f0(param_1,pvVar8,iVar13 * 0x10,uVar12,uVar9,param_2[2] - uVar12);
  if (param_4[3] != param_4[1]) {
    lVar14 = lVar14 + (ulong)(uVar10 * iVar7 +
                             (*(uint *)(&DAT_100b3f714 + (ulong)uVar15 * 8) >> 0x18) * iVar6);
    uVar15 = 0;
    do {
      uVar10 = param_2[1];
      if (uVar9 + 4 <= uVar15 + uVar10) {
        uVar9 = uVar15 + uVar10 & 0xfffffffc;
        FUN_1003d14f0(param_1,pvVar8,iVar13 * 0x10,uVar12,uVar9,param_2[2] - uVar12);
        uVar10 = param_2[1];
      }
      pvVar11 = (void *)((ulong)(((uVar10 - uVar9) + uVar15) * iVar13 + (uVar5 - uVar12)) * 0x10 +
                        (long)pvVar8);
      if ((ulong)uVar4 - 0x53 < 0x11) {
        FUN_1003cbda0(pvVar11,param_3,*param_4,iVar1 + uVar15,iVar2 - iVar3);
      }
      else {
        FUN_1003d2880(pvVar11,*param_3,lVar14,iVar2 - iVar3);
      }
      lVar14 = lVar14 + (ulong)param_3[3];
      uVar15 = uVar15 + 1;
    } while (uVar15 < (uint)(param_4[3] - param_4[1]));
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

