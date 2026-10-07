
undefined8 FUN_10086f550(undefined8 param_1,undefined4 param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_20;
  
  local_20 = 0;
  uVar3 = 0xfffffffe;
  switch(param_2) {
  case 1:
    if (param_3 == 0) {
      FUN_1008d3270(param_4,0,0,&local_20);
    }
    break;
  case 2:
    if (param_3 == 0) {
      FUN_1008d32a0(param_4,&local_20);
    }
    break;
  case 3:
    *param_4 = 0x40;
    return 1;
  default:
    goto switchD_10086f584_caseD_4;
  case 5:
    if (param_3 == 0) {
      FUN_1008dce20(param_4,0,0,0,&local_20);
    }
    break;
  case 7:
    if (param_3 == 0) {
      FUN_1008ddd70(param_4,0,0,&local_20);
    }
  }
  lVar1 = local_20;
  uVar3 = 1;
  if (local_20 != 0) {
    uVar2 = FUN_100821870(6);
    FUN_10089f940(lVar1,uVar2,5,0);
  }
switchD_10086f584_caseD_4:
  return uVar3;
}

