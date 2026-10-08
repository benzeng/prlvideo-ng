
undefined1 * FUN_100981b65(undefined1 *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint local_24;
  undefined1 *local_10;
  
  *param_1 = 0x26;
  param_1[1] = 0x23;
  param_1[2] = 0x78;
  local_10 = param_1 + 3;
  if (0xf < (int)param_2) {
    if ((int)param_2 < 0x100) {
      local_10 = param_1 + 4;
    }
    else if ((int)param_2 < 0x1000) {
      local_10 = param_1 + 5;
    }
    else if ((int)param_2 < 0x10000) {
      local_10 = param_1 + 6;
    }
    else if ((int)param_2 < 0x100000) {
      local_10 = param_1 + 7;
    }
    else {
      local_10 = param_1 + 8;
    }
  }
  puVar1 = local_10;
  puVar2 = local_10 + 1;
  for (local_24 = param_2; 0 < (int)local_24; local_24 = (int)local_24 >> 4) {
    switch(local_24 & 0xf) {
    case 0:
      *local_10 = 0x30;
      break;
    case 1:
      *local_10 = 0x31;
      break;
    case 2:
      *local_10 = 0x32;
      break;
    case 3:
      *local_10 = 0x33;
      break;
    case 4:
      *local_10 = 0x34;
      break;
    case 5:
      *local_10 = 0x35;
      break;
    case 6:
      *local_10 = 0x36;
      break;
    case 7:
      *local_10 = 0x37;
      break;
    case 8:
      *local_10 = 0x38;
      break;
    case 9:
      *local_10 = 0x39;
      break;
    case 10:
      *local_10 = 0x41;
      break;
    case 0xb:
      *local_10 = 0x42;
      break;
    case 0xc:
      *local_10 = 0x43;
      break;
    case 0xd:
      *local_10 = 0x44;
      break;
    case 0xe:
      *local_10 = 0x45;
      break;
    case 0xf:
      *local_10 = 0x46;
      break;
    default:
      *local_10 = 0x30;
    }
    local_10 = local_10 + -1;
  }
  *puVar2 = 0x3b;
  puVar1[2] = 0;
  return puVar1 + 2;
}

