
void FUN_100369570(long param_1,undefined4 param_2,uint param_3,int param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    break;
  case 2:
    param_3 = param_3 * 2;
    *(undefined4 *)(param_1 + 0x21c) = 1;
    break;
  case 3:
    param_3 = param_3 + 1;
    *(undefined4 *)(param_1 + 0x21c) = 3;
    break;
  case 4:
    param_3 = param_3 * 3;
    *(undefined4 *)(param_1 + 0x21c) = 4;
    break;
  case 5:
    param_3 = param_3 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 5;
    break;
  case 6:
    param_3 = param_3 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 6;
    break;
  default:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    param_3 = 0;
  }
  *(uint *)(param_1 + 0x218) = param_3;
  uVar3 = *(uint *)(param_5 + 0x24);
  uVar1 = (ulong)(uint)(param_4 + *(int *)(param_5 + 0x20));
  uVar2 = uVar1 / uVar3;
  FUN_100367000(param_1,param_6,param_7,uVar1 % (ulong)uVar3,uVar3);
  FUN_1003669b0(param_1);
  uVar3 = *(int *)(param_1 + 0x214) - (int)uVar2;
  if (*(uint *)(param_1 + 0x218) <= uVar3) {
    uVar3 = *(uint *)(param_1 + 0x218);
  }
  *(uint *)(param_1 + 0x218) = uVar3;
  if (uVar3 != param_3) {
    switch(*(undefined4 *)(param_1 + 0x21c)) {
    case 0:
      break;
    case 1:
    case 10:
      uVar3 = uVar3 & 0xfffffffe;
      break;
    default:
      uVar3 = 0;
      break;
    case 3:
    case 0xb:
      if (uVar3 < 2) {
        uVar3 = 0;
      }
      break;
    case 4:
    case 0xc:
      uVar3 = (uVar3 / 3) * 3;
      break;
    case 5:
    case 6:
    case 0xd:
      if (uVar3 < 3) {
        uVar3 = 0;
      }
    }
    *(uint *)(param_1 + 0x218) = uVar3;
    param_3 = uVar3;
  }
  if (param_3 != 0) {
    FUN_10035c310(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000100369682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5be8)(*(undefined4 *)(param_1 + 0x21c),uVar2,*(undefined4 *)(param_1 + 0x218));
    return;
  }
  return;
}

