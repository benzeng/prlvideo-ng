
undefined8 FUN_1000c1950(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14)) {
  case 1:
    uVar1 = 4;
    break;
  default:
    goto switchD_1000c1976_caseD_3;
  case 5:
    FUN_10008fdb0(DAT_1011c3698,0x4e4e,*(undefined4 *)(param_1 + 0x110));
  case 0:
  case 2:
  case 7:
    uVar1 = 5;
  }
  FUN_10008ec80(param_1,uVar1);
  FUN_10008f910(param_1,0);
  uVar1 = 1;
switchD_1000c1976_caseD_3:
  return uVar1;
}

