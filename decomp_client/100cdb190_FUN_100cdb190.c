
void FUN_100cdb190(long param_1,long *param_2)

{
  byte bVar1;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)((long)param_2 + 0x44c) != '\0') {
    bVar1 = *(byte *)(param_1 + 1);
    if (bVar1 < 3) {
      *(long *)(param_2[0x71] + 0xf0) = *(long *)(param_2[0x71] + 0xf0) + 1;
                    /* WARNING: Could not recover jumptable at 0x000100cdb1db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(undefined4 *)(param_1 + 2),bVar1 != 0,bVar1 != 0,
                 *(code **)(*param_2 + 0xc0));
      return;
    }
    *(long *)(param_2[0x6b] + 0xf0) = *(long *)(param_2[0x6b] + 0xf0) + 1;
    local_40 = (double)*(int *)(param_1 + 2);
    local_38 = (double)*(int *)(param_1 + 6);
    local_30 = (double)*(int *)(param_1 + 10);
    local_28 = (double)*(int *)(param_1 + 0xe);
    local_10 = *(undefined4 *)(param_1 + 0x1a);
    local_20 = *(undefined4 *)(param_1 + 0x12);
    local_1c = *(undefined4 *)(param_1 + 0x16);
    local_18 = *(undefined4 *)(param_1 + 0x1e);
    local_14 = *(undefined4 *)(param_1 + 0x22);
    FUN_100cd56b0(param_2,&local_40,bVar1 == 4);
  }
  return;
}

