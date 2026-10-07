
void FUN_1004b3380(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_1002a6010(param_2);
  switch(*puVar2) {
  case 1:
    FUN_1004ae9f0(*(undefined8 *)(param_1 + 0x10),param_2);
    return;
  case 2:
    FUN_1004acf90(*(undefined8 *)(param_1 + 0x10),param_2);
    return;
  case 3:
    FUN_1004adbe0(*(undefined8 *)(param_1 + 0x10),param_2);
    return;
  case 4:
    FUN_1004ae620(*(undefined8 *)(param_1 + 0x10),param_2);
    return;
  default:
    lVar1 = *(long *)(param_1 + 0x10);
    uVar3 = 0xf0000002;
    break;
  case 7:
    FUN_1004aedf0(*(undefined8 *)(param_1 + 0x10),param_2);
    return;
  case 8:
    FUN_1004ae880(*(undefined8 *)(param_1 + 0x10),param_2);
    return;
  case 10:
    FUN_1004aee50(*(undefined8 *)(param_1 + 0x10),param_2,1);
    return;
  case 0xd:
    FUN_1004adb40(*(undefined8 *)(param_1 + 0x10));
    lVar1 = *(long *)(param_1 + 0x10);
    uVar3 = 0;
    break;
  case 0xf:
    FUN_1004aef20(*(undefined8 *)(param_1 + 0x10),param_2,1);
    return;
  }
  FUN_1004c07d0(lVar1 + 0x10,param_2,uVar3);
  return;
}

