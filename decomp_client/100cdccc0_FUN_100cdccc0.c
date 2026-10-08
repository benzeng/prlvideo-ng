
void FUN_100cdccc0(long param_1,undefined4 *param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar1 = FUN_100df2600();
  if ((0xa0bff < uVar1) && ((*(uint *)(param_1 + 0x3b0) & 0xffffff00) != 0x800)) {
    iVar3 = *(int *)(param_1 + 0x50c) + param_2[10];
    *(int *)(param_1 + 0x50c) = iVar3;
    iVar2 = *(int *)(param_1 + 0x510) + param_2[0xb];
    *(int *)(param_1 + 0x510) = iVar2;
    iVar4 = -iVar3;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    if (*(int *)(param_1 + 0x514) < iVar4) {
      uVar5 = 0xffffffff;
      if (0 < iVar3) {
        uVar5 = 1;
      }
      *(undefined4 *)(param_1 + 0x50c) = 0;
    }
    iVar4 = -iVar2;
    if (0 < iVar2) {
      iVar4 = iVar2;
    }
    if (*(int *)(param_1 + 0x514) < iVar4) {
      uVar6 = 0xffffffff;
      if (0 < iVar2) {
        uVar6 = 1;
      }
      *(undefined4 *)(param_1 + 0x510) = 0;
    }
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_38 = param_2[0xc];
  local_40 = param_2[10];
  local_3c = param_2[0xb];
  local_48 = uVar5;
  local_44 = uVar6;
  FUN_100cd56b0(param_1,&local_68,param_3);
  return;
}

