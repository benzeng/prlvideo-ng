
undefined8 FUN_100353ca0(long param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_3;
  uVar2 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = uVar2 + 1;
  *(undefined4 *)(param_1 + 0x4c + (ulong)uVar2 * 4) = uVar1;
  uVar1 = param_3[1];
  uVar2 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_1 + 0x44) = uVar2 + 1;
  *(undefined4 *)(param_1 + 0x5c + (ulong)uVar2 * 4) = uVar1;
  uVar3 = 3;
  switch(param_2) {
  case 0x47:
  case 0x49:
    return 0;
  case 0x48:
  case 0x54:
    FUN_100355c80(param_1);
    break;
  default:
    goto switchD_100353ceb_caseD_4b;
  case 0x4c:
    uVar1 = param_3[2];
    *(uint *)(param_1 + 0x44) = uVar2 + 2;
    *(undefined4 *)(param_1 + 0x5c + (ulong)(uVar2 + 1) * 4) = uVar1;
  case 0x4a:
  case 0x4d:
  case 0x56:
    FUN_100355f40(param_1);
  }
  uVar3 = 0;
switchD_100353ceb_caseD_4b:
  *(undefined8 *)(param_1 + 0x44) = 0;
  return uVar3;
}

