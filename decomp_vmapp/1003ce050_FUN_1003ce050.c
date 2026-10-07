
undefined8 FUN_1003ce050(uint *param_1,int *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar1 = *param_1;
  uVar2 = *param_3;
  lVar5 = *(long *)(param_1 + 4);
  lVar8 = *(long *)(param_3 + 4);
  iVar3 = param_2[2] - *param_2;
  uVar6 = iVar3 * 4;
  pvVar4 = operator_new__((ulong)uVar6);
  uVar7 = param_2[1];
  DAT_1011bbc70 = pvVar4;
  DAT_1011bbc78 = uVar6;
  if (uVar7 < (uint)param_2[3]) {
    lVar8 = lVar8 + (ulong)(param_3[3] * param_4[1] +
                           (*(uint *)(&DAT_100b3f714 + (ulong)uVar2 * 8) >> 0x18) * *param_4);
    lVar5 = lVar5 + (ulong)(param_1[3] * uVar7 +
                           (*(uint *)(&DAT_100b3f714 + (ulong)uVar1 * 8) >> 0x18) * *param_2);
    do {
      if ((ulong)uVar1 - 0x53 < 0x11) {
        FUN_1003ca660(param_1,pvVar4,*param_2,uVar7,iVar3);
      }
      else {
        FUN_1003cc7b0(lVar5,*param_1,pvVar4,iVar3);
      }
      if ((ulong)uVar2 - 0x53 < 0x11) {
        FUN_1003cb6a0(pvVar4,param_3,*param_4,uVar7,iVar3);
      }
      else {
        FUN_1003ce230(pvVar4,*param_3,lVar8,iVar3);
      }
      lVar8 = lVar8 + (ulong)param_3[3];
      lVar5 = lVar5 + (ulong)param_1[3];
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_2[3]);
  }
  if ((DAT_1011bbc78 != 0) && (DAT_1011bbc70 != (void *)0x0)) {
    operator_delete__(DAT_1011bbc70);
  }
  DAT_1011bbc78 = 0;
  return 1;
}

