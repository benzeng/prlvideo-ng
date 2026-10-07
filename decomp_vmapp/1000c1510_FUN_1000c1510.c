
undefined8 FUN_1000c1510(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14)) {
  case 1:
    uVar1 = 6;
    break;
  case 2:
    uVar1 = 9;
    break;
  default:
    goto switchD_1000c1537_caseD_3;
  case 5:
    uVar1 = 0xb;
    break;
  case 7:
    uVar1 = 10;
  }
  FUN_10008ec80(param_1,uVar1);
  FUN_10008f4d0(param_1);
  uVar1 = 1;
switchD_1000c1537_caseD_3:
  return uVar1;
}

