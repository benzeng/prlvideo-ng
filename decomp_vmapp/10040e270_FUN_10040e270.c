
void FUN_10040e270(long param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  
  lVar3 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(lVar3 + 0x60);
  uVar5 = *(int *)(lVar3 + 0x5c) -
          (*(int *)(lVar3 + 0x68) - *(int *)(lVar3 + 100) & *(uint *)(lVar3 + 0x70));
  uVar4 = *param_2;
  if (uVar5 < *param_2) {
    *param_2 = uVar5;
    uVar4 = uVar5;
  }
  FUN_1007d7180(lVar3 + 0x5c,uVar4,&local_40,&local_34,&local_48,&local_38);
  *param_3 = 1;
  param_3[3] = local_34 * iVar1;
  *(undefined8 *)(param_3 + 4) = local_40;
  uVar2 = *(undefined4 *)(lVar3 + 8);
  param_3[2] = uVar2;
  *param_4 = 1;
  *(undefined8 *)(param_4 + 4) = local_48;
  param_4[3] = iVar1 * local_38;
  param_4[2] = uVar2;
  *param_2 = local_38 + local_34;
  return;
}

