
undefined4 _xmlTextReaderNodeType(long param_1)

{
  int iVar1;
  undefined4 local_28;
  long local_10;
  
  if (param_1 == 0) {
    local_28 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_28 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_10 = *(long *)(param_1 + 0x70);
    }
    else {
      local_10 = *(long *)(param_1 + 0x78);
    }
    switch(*(undefined4 *)(local_10 + 8)) {
    default:
      local_28 = 0xffffffff;
      break;
    case 1:
      if ((*(int *)(param_1 + 0x18) == 2) || (*(int *)(param_1 + 0x18) == 4)) {
        local_28 = 0xf;
      }
      else {
        local_28 = 1;
      }
      break;
    case 2:
    case 0x12:
      local_28 = 2;
      break;
    case 3:
      iVar1 = _xmlIsBlankNode(*(xmlNodePtr *)(param_1 + 0x70));
      if (iVar1 == 0) {
        local_28 = 3;
      }
      else {
        iVar1 = _xmlNodeGetSpacePreserve(*(xmlNodePtr *)(param_1 + 0x70));
        if (iVar1 == 0) {
          local_28 = 0xd;
        }
        else {
          local_28 = 0xe;
        }
      }
      break;
    case 4:
      local_28 = 4;
      break;
    case 5:
      local_28 = 5;
      break;
    case 6:
      local_28 = 6;
      break;
    case 7:
      local_28 = 7;
      break;
    case 8:
      local_28 = 8;
      break;
    case 9:
    case 0xd:
    case 0x15:
      local_28 = 9;
      break;
    case 10:
    case 0xe:
      local_28 = 10;
      break;
    case 0xb:
      local_28 = 0xb;
      break;
    case 0xc:
      local_28 = 0xc;
      break;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
      local_28 = 0;
    }
  }
  return local_28;
}

