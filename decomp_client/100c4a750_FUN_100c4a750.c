
undefined8 FUN_100c4a750(undefined8 param_1,undefined4 param_2,long param_3,undefined4 *param_4)

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
      FUN_100cae7f0(param_4,0,0,&local_20);
    }
    break;
  case 2:
    if (param_3 == 0) {
      FUN_100cae820(param_4,&local_20);
    }
    break;
  case 3:
    *param_4 = 0x40;
    return 1;
  default:
    goto switchD_100c4a784_caseD_4;
  case 5:
    if (param_3 == 0) {
      FUN_100cb9660(param_4,0,0,0,&local_20);
    }
    break;
  case 7:
    if (param_3 == 0) {
      FUN_100cba5b0(param_4,0,0,&local_20);
    }
  }
  lVar1 = local_20;
  uVar3 = 1;
  if (local_20 != 0) {
    uVar2 = FUN_100bf6fe0(6);
    FUN_100c7aec0(lVar1,uVar2,5,0);
  }
switchD_100c4a784_caseD_4:
  return uVar3;
}

