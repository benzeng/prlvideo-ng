
int FUN_100391180(ulong *param_1,uint *param_2,uint param_3,long *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint local_34;
  
  param_1[2] = (ulong)param_4;
  param_1[3] = (ulong)param_5;
  *param_1 = (ulong)param_2;
  puVar8 = (uint *)((ulong)(param_3 & 0xfffffffc) + (long)param_2);
  param_1[1] = (ulong)puVar8;
  iVar10 = 4;
  if (param_2 < puVar8) {
    do {
      puVar7 = param_2 + 1;
      *param_1 = (ulong)puVar7;
      uVar1 = *param_2;
      iVar10 = 2;
      iVar6 = 0;
      switch(uVar1 >> 0x1d) {
      case 0:
        goto switchD_1003911ef_caseD_0;
      case 1:
        iVar10 = FUN_1003913b0(param_1,uVar1 & 0xf);
        break;
      default:
        goto switchD_1003911ef_caseD_2;
      case 4:
        iVar10 = 0;
        if ((uVar1 >> 0x19 & 0xf) != 0) {
          if (puVar7 < puVar8) {
            uVar9 = uVar1 & 0x7f;
            iVar10 = -(uVar1 >> 0x19 & 0xf);
            do {
              iVar10 = iVar10 + 1;
              *param_1 = (ulong)(puVar7 + 1);
              if (puVar8 <= puVar7 + 1) break;
              uVar1 = *puVar7;
              *param_1 = (ulong)(puVar7 + 2);
              if (puVar8 <= puVar7 + 2) break;
              uVar2 = puVar7[1];
              *param_1 = (ulong)(puVar7 + 3);
              if (puVar8 <= puVar7 + 3) break;
              uVar3 = puVar7[2];
              *param_1 = (ulong)(puVar7 + 4);
              uVar4 = puVar7[3];
              local_34 = uVar9;
              puVar8 = (uint *)FUN_100391760(param_1[3],&local_34);
              *puVar8 = uVar1;
              puVar8[1] = uVar2;
              puVar8[2] = uVar3;
              puVar8[3] = uVar4;
              if (iVar10 == 0) {
                iVar10 = 0;
                goto LAB_100391300;
              }
              uVar9 = uVar9 + 1;
              puVar7 = (uint *)*param_1;
              puVar8 = (uint *)param_1[1];
            } while (puVar7 < puVar8);
            iVar10 = 3;
          }
          else {
            iVar10 = 3;
          }
        }
        break;
      case 7:
        goto switchD_1003911ef_caseD_7;
      }
LAB_100391300:
      if (iVar10 != 0) break;
      puVar7 = (uint *)*param_1;
      puVar8 = (uint *)param_1[1];
switchD_1003911ef_caseD_0:
      iVar10 = 0;
      param_2 = puVar7;
    } while (puVar7 < puVar8);
  }
switchD_1003911ef_caseD_2:
  lVar5 = param_4[1];
  if (lVar5 != *param_4) {
    param_4[1] = (~((lVar5 + -8) - *param_4) & 0xfffffffffffffff8U) + lVar5;
  }
  FUN_10033fc80(param_5,param_5[1]);
  param_5[2] = 0;
  *param_5 = (long)(param_5 + 1);
  param_5[1] = 0;
  iVar6 = iVar10;
switchD_1003911ef_caseD_7:
  return iVar6;
}

