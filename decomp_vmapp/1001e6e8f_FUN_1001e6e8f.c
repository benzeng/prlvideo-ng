
undefined8 FUN_1001e6e8f(undefined4 *param_1)

{
  undefined8 local_18;
  
  switch(*param_1) {
  default:
    local_18 = 0;
    break;
  case 1:
  case 4:
  case 5:
    local_18 = *(undefined8 *)(param_1 + 4);
    break;
  case 0xe:
    local_18 = *(undefined8 *)(param_1 + 4);
    break;
  case 0xf:
    local_18 = *(undefined8 *)(param_1 + 4);
    break;
  case 0x10:
    local_18 = *(undefined8 *)(param_1 + 4);
    break;
  case 0x11:
    local_18 = *(undefined8 *)(param_1 + 8);
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    local_18 = *(undefined8 *)(param_1 + 8);
  }
  return local_18;
}

