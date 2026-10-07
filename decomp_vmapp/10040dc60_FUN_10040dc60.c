
void FUN_10040dc60(undefined8 param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,
                  long param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  
  iVar1 = *(int *)(param_5 + 0x60);
  if (param_6 == '\0') {
    uVar4 = *(int *)(param_5 + 0x5c) -
            (*(int *)(param_5 + 0x68) - *(int *)(param_5 + 100) & *(uint *)(param_5 + 0x70));
  }
  else {
    uVar4 = *(int *)(param_5 + 0x68) - *(int *)(param_5 + 100) & *(uint *)(param_5 + 0x70);
  }
  uVar3 = *param_2;
  if (uVar4 < *param_2) {
    *param_2 = uVar4;
    uVar3 = uVar4;
  }
  if (param_6 == '\0') {
    FUN_1007d7180(param_5 + 0x5c,uVar3,&local_40,&local_34,&local_48,&local_38);
  }
  else {
    FUN_1007d7220();
  }
  *param_3 = 1;
  param_3[3] = local_34 * iVar1;
  *(undefined8 *)(param_3 + 4) = local_40;
  uVar2 = *(undefined4 *)(param_5 + 8);
  param_3[2] = uVar2;
  *param_4 = 1;
  *(undefined8 *)(param_4 + 4) = local_48;
  param_4[3] = iVar1 * local_38;
  param_4[2] = uVar2;
  *param_2 = local_38 + local_34;
  return;
}

