
void FUN_100372fd0(undefined8 param_1,long param_2,undefined8 *param_3,char param_4)

{
  float fVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_1c;
  
  fVar1 = *(float *)(param_2 + 0x94);
  if (param_4 != '\0') {
    local_1c = *(undefined4 *)(param_2 + 0x88);
    local_38 = 0;
    uStack_30 = 0;
    FUN_10038e060(&local_38,&local_1c);
    *param_3 = local_38;
    param_3[1] = uStack_30;
  }
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_2 + 0x98);
  *(float *)((long)param_3 + 0x14) = fVar1;
  *(float *)(param_3 + 3) = DAT_100b39678 / (fVar1 - *(float *)(param_2 + 0x90));
  return;
}

