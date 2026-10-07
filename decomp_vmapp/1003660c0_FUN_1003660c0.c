
void FUN_1003660c0(long param_1,undefined4 param_2,int param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    break;
  case 2:
    param_4 = param_4 * 2;
    *(undefined4 *)(param_1 + 0x21c) = 1;
    break;
  case 3:
    param_4 = param_4 + 1;
    *(undefined4 *)(param_1 + 0x21c) = 3;
    break;
  case 4:
    param_4 = param_4 * 3;
    *(undefined4 *)(param_1 + 0x21c) = 4;
    break;
  case 5:
    param_4 = param_4 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 5;
    break;
  case 6:
    param_4 = param_4 + 2;
    *(undefined4 *)(param_1 + 0x21c) = 6;
    break;
  default:
    *(undefined4 *)(param_1 + 0x21c) = 0;
    param_4 = 0;
  }
  *(uint *)(param_1 + 0x218) = param_4;
  FUN_1003662d0(param_1,param_5,param_6,param_7,0);
  if (*(char *)(DAT_1011c8478 + 0x32) != '\0') {
    FUN_100366800(param_1,param_2,param_5);
  }
  FUN_1003669b0(param_1);
  uVar1 = *(int *)(param_1 + 0x214) - param_3;
  if (*(uint *)(param_1 + 0x218) <= uVar1) {
    uVar1 = *(uint *)(param_1 + 0x218);
  }
  *(uint *)(param_1 + 0x218) = uVar1;
  if (uVar1 != param_4) {
    switch(*(undefined4 *)(param_1 + 0x21c)) {
    case 0:
      break;
    case 1:
    case 10:
      uVar1 = uVar1 & 0xfffffffe;
      break;
    default:
      uVar1 = 0;
      break;
    case 3:
    case 0xb:
      if (uVar1 < 2) {
        uVar1 = 0;
      }
      break;
    case 4:
    case 0xc:
      uVar1 = (uVar1 / 3) * 3;
      break;
    case 5:
    case 6:
    case 0xd:
      if (uVar1 < 3) {
        uVar1 = 0;
      }
    }
    *(uint *)(param_1 + 0x218) = uVar1;
    param_4 = uVar1;
  }
  if (param_4 != 0) {
    FUN_10035c310(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001003661e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5bf0)(*(undefined4 *)(param_1 + 0x21c),param_3,*(undefined4 *)(param_1 + 0x218),
                     *(undefined4 *)(param_1 + 0x210));
    return;
  }
  return;
}

