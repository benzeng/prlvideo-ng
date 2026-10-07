
undefined8 FUN_1007f8a10(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_2 < 0x48) {
    if (param_2 < 0x3f) {
      lVar1 = *(long *)(param_1 + 0x130);
      if (param_2 < 7) {
        if (param_2 == 5) {
          *(undefined8 *)(lVar1 + 0x38) = param_3;
        }
        else {
          if (param_2 != 6) {
            return 0;
          }
          *(undefined8 *)(lVar1 + 0x48) = param_3;
        }
      }
      else if (param_2 == 7) {
        *(undefined8 *)(lVar1 + 0x58) = param_3;
      }
      else {
        if (param_2 != 0x35) {
          return 0;
        }
        *(undefined8 *)(param_1 + 0x1a0) = param_3;
      }
    }
    else {
      if (param_2 != 0x3f) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x1e8) = param_3;
    }
  }
  else {
    switch(param_2) {
    case 0x48:
      *(undefined8 *)(param_1 + 0x1e0) = param_3;
      break;
    default:
      goto switchD_1007f8a50_caseD_49;
    case 0x4b:
      *(byte *)(param_1 + 0x2b1) = *(byte *)(param_1 + 0x2b1) | 4;
      *(undefined8 *)(param_1 + 0x240) = param_3;
      break;
    case 0x4c:
      *(byte *)(param_1 + 0x2b1) = *(byte *)(param_1 + 0x2b1) | 4;
      *(undefined8 *)(param_1 + 0x248) = param_3;
      break;
    case 0x4d:
      *(byte *)(param_1 + 0x2b1) = *(byte *)(param_1 + 0x2b1) | 4;
      *(undefined8 *)(param_1 + 0x250) = param_3;
    }
  }
  uVar2 = 1;
switchD_1007f8a50_caseD_49:
  return uVar2;
}

