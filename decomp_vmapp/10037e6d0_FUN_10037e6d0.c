
undefined8 FUN_10037e6d0(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar1 = *(int *)(param_2 + 0x82bc) - 1;
  if ((((uVar1 < 0xf) && ((0x67ffU >> (uVar1 & 0x1f) & 1) != 0)) &&
      (uVar5 = *(int *)(param_2 + 0x82c0) - 1, uVar5 < 0xf)) &&
     ((0x67ffU >> (uVar5 & 0x1f) & 1) != 0)) {
    uVar2 = 0;
    if (*(int *)(param_2 + 0x85a8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = *(int *)(param_2 + 0x85ac) - 1;
      if (0xe < uVar3) {
        return 0;
      }
      if ((0x67ffU >> (uVar3 & 0x1f) & 1) == 0) {
        return 0;
      }
      if (0xe < *(int *)(param_2 + 0x85b0) - 1U) {
        return 0;
      }
      uVar4 = *(undefined4 *)((long)&PTR___mh_execute_header_100b3e1b0 + (long)(int)uVar3 * 4);
      switch(*(int *)(param_2 + 0x85b0)) {
      case 1:
        break;
      case 2:
        uVar2 = 1;
        break;
      case 3:
        uVar2 = 0x300;
        break;
      case 4:
        uVar2 = 0x301;
        break;
      case 5:
        uVar2 = 0x302;
        break;
      case 6:
        uVar2 = 0x303;
        break;
      case 7:
        uVar2 = 0x304;
        break;
      case 8:
        uVar2 = 0x305;
        break;
      case 9:
        uVar2 = 0x306;
        break;
      case 10:
        uVar2 = 0x307;
        break;
      case 0xb:
        uVar2 = 0x308;
        break;
      default:
        goto switchD_10037e760_caseD_c;
      case 0xe:
        uVar2 = 0x8001;
        break;
      case 0xf:
        uVar2 = 0x8002;
      }
    }
    if (*(int *)(param_2 + 0x85a8) == 0) {
      (*DAT_1011c57b0)(*(undefined4 *)
                        ((long)&PTR___mh_execute_header_100b3e1b0 + (long)(int)uVar1 * 4),
                       *(undefined4 *)
                        ((long)&PTR___mh_execute_header_100b3e1b0 + (long)(int)uVar5 * 4),uVar4,
                       uVar2);
    }
    else {
      (*DAT_1011c57b8)();
    }
  }
switchD_10037e760_caseD_c:
  return 0;
}

