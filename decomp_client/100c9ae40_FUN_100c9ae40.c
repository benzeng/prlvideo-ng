
undefined8 FUN_100c9ae40(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  int local_48 [10];
  
  if (param_2 == -1) {
    return 1;
  }
  uVar4 = param_2 - 1;
  if (7 < uVar4) {
    local_48[0] = param_2;
    if (((DAT_102318438 == 0) || (iVar1 = FUN_100c60360(DAT_102318438,local_48), iVar1 == -1)) ||
       (uVar4 = iVar1 + 8, uVar4 == 0xffffffff)) {
      uVar2 = (*(code *)PTR_FUN_10230af50)(param_2,param_1,param_3);
      return uVar2;
    }
    puVar3 = (undefined *)0x0;
    if ((int)uVar4 < 0) goto LAB_100c9aea9;
    if (7 < (int)uVar4) {
      puVar3 = (undefined *)FUN_100c60820(DAT_102318438,iVar1);
      goto LAB_100c9aea9;
    }
  }
  puVar3 = &DAT_10230af60 + (long)(int)uVar4 * 0x28;
LAB_100c9aea9:
  uVar2 = (**(code **)(puVar3 + 8))(puVar3,param_1,param_3);
  return uVar2;
}

