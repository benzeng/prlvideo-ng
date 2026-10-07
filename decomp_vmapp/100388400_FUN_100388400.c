
void FUN_100388400(long param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8,uint *param_9,uint param_10,uint param_11,uint param_12,
                  uint param_13,long param_14,undefined4 param_15,char param_16)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar4 = (ulong)param_2;
  if ((*(int *)(param_1 + 0x4c + uVar4 * 8) == 0) &&
     (piVar1 = (int *)(param_1 + 0x4c + uVar4 * 8), FUN_1003804e0(piVar1,param_2), *piVar1 == 0)) {
    return;
  }
  (*DAT_1011c6ee0)();
  uVar2 = param_3[1];
  uVar3 = param_5 - uVar2;
  if (param_16 == '\0') {
    uVar3 = uVar2;
  }
  fVar9 = (float)(param_3[3] - uVar2);
  if (param_16 != '\0') {
    fVar9 = (float)((uint)fVar9 ^ DAT_100b3f6c0);
  }
  fVar7 = (float)uVar3;
  fVar5 = (float)param_7;
  switch(param_2) {
  case 2:
    fVar6 = (float)*param_3;
    fVar8 = (float)(param_3[2] - *param_3);
    goto LAB_1003885c5;
  case 3:
    local_38 = *(undefined4 *)(param_14 + 0xc);
    local_34 = FUN_10038e740(*(undefined4 *)(param_14 + 8),&local_38);
    local_48 = 0;
    uStack_40 = 0;
    FUN_10038e060(&local_48,&local_34);
    (*DAT_1011c7180)((undefined4)local_48,local_48._4_4_,(undefined4)uStack_40,uStack_40._4_4_,5);
  case 9:
  case 10:
  case 0xb:
    fVar8 = (float)param_4;
    fVar10 = (float)param_5;
    (*DAT_1011c7180)(fVar8,fVar10,0,0,3);
    break;
  default:
    fVar8 = (float)param_4;
    fVar10 = (float)param_5;
    break;
  case 0xd:
    fVar6 = (float)*param_3 / (float)param_4;
    fVar7 = fVar7 / (float)param_5;
    fVar8 = (float)(param_3[2] - *param_3) / (float)param_4;
    fVar9 = fVar9 / (float)param_5;
    fVar5 = fVar5 / (float)param_6;
    goto LAB_1003885c5;
  }
  fVar6 = (float)*param_3 / fVar8;
  fVar7 = fVar7 / fVar10;
  fVar8 = (float)(param_3[2] - *param_3) / fVar8;
  fVar9 = fVar9 / fVar10;
LAB_1003885c5:
  (*DAT_1011c7180)(fVar6,fVar7,fVar8,fVar9,1);
  fVar9 = (float)*param_9;
  fVar7 = (float)param_9[1];
  fVar8 = (float)(param_9[2] - *param_9);
  fVar6 = (float)(param_9[3] - param_9[1]);
  (*DAT_1011c7180)((fVar9 + fVar9) / (float)param_10 + DAT_100b39674,
                   (fVar7 + fVar7) / (float)param_11 + DAT_100b39674,
                   (fVar8 + fVar8) / (float)param_10,(fVar6 + fVar6) / (float)param_11,2);
  (*DAT_1011c7180)(fVar5,(float)param_8,(float)param_12,(float)param_13,4);
  (*DAT_1011c6d38)(*(undefined4 *)(param_1 + 0x50 + uVar4 * 8),param_15);
  return;
}

