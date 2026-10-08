
undefined8 FUN_10091a4ff(undefined4 *param_1)

{
  undefined8 local_18;
  
  switch(*param_1) {
  default:
    local_18 = 0;
    break;
  case 2:
  case 0x15:
    local_18 = *(undefined8 *)(param_1 + 6);
    break;
  case 4:
  case 5:
    local_18 = *(undefined8 *)(param_1 + 0x12);
    break;
  case 6:
  case 7:
  case 8:
    local_18 = *(undefined8 *)(param_1 + 8);
    break;
  case 0xe:
    local_18 = *(undefined8 *)(param_1 + 0x12);
    break;
  case 0xf:
    local_18 = *(undefined8 *)(param_1 + 0x1a);
    break;
  case 0x10:
    local_18 = *(undefined8 *)(param_1 + 0x10);
    break;
  case 0x11:
    local_18 = *(undefined8 *)(param_1 + 0xc);
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    local_18 = *(undefined8 *)(param_1 + 6);
    break;
  case 0x19:
    local_18 = *(undefined8 *)(param_1 + 10);
  }
  return local_18;
}

