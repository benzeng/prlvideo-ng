
undefined1 FUN_100ad4340(long param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  int local_60;
  int local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  
  local_38 = *param_2 - *(int *)(param_1 + 0x9b0);
  local_34 = param_2[1] - *(int *)(param_1 + 0x9b4);
  local_48 = FUN_100ae6120(param_1 + 0x990,&local_38);
  if (local_48._0_4_ <= local_48._8_4_) {
    if (local_48._4_4_ <= local_48._12_4_) {
      iVar2 = *(int *)(param_1 + 0x9b0);
      iVar1 = *(int *)(param_1 + 0x9b4);
      *param_3 = CONCAT44(local_48._4_4_ + iVar1,iVar2 + local_48._0_4_);
      param_3[1] = CONCAT44(local_48._12_4_ + iVar1,local_48._8_4_ + iVar2);
      *param_4 = *(undefined8 *)(param_1 + 0x9b0);
      return 1;
    }
  }
  FUN_100ae7810(local_58);
  iVar2 = FUN_100ae7a50(local_58,param_2,local_48);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    local_60 = (local_48._8_4_ + local_48._0_4_) / 2 - *(int *)(param_1 + 0x9b0);
    local_5c = (local_48._12_4_ + local_48._4_4_) / 2 - *(int *)(param_1 + 0x9b4);
    auVar4 = FUN_100ae6120(param_1 + 0x990,&local_60);
    uVar3 = 0;
    local_48 = auVar4;
    if (auVar4._0_4_ <= auVar4._8_4_) {
      if (auVar4._4_4_ <= auVar4._12_4_) {
        iVar2 = *(int *)(param_1 + 0x9b0);
        iVar1 = *(int *)(param_1 + 0x9b4);
        *param_3 = CONCAT44(auVar4._4_4_ + iVar1,iVar2 + auVar4._0_4_);
        param_3[1] = CONCAT44(auVar4._12_4_ + iVar1,auVar4._8_4_ + iVar2);
        *param_4 = *(undefined8 *)(param_1 + 0x9b0);
        uVar3 = 1;
      }
    }
  }
  FUN_100ae79a0(local_58);
  return uVar3;
}

