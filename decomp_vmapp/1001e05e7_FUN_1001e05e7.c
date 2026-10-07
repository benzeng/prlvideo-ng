
void FUN_1001e05e7(long param_1)

{
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  if ((**(char **)(param_1 + 8) == '&') && (*(char *)(*(long *)(param_1 + 8) + 1) == '#')) {
    local_10 = FUN_1001e0393(param_1);
    local_c = local_10;
    FUN_1001d9b37(param_1,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x14),2,local_10
                  ,local_10,0);
  }
  else {
    local_14 = (uint)**(byte **)(param_1 + 8);
    if (local_14 == 0x5c) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      local_14 = (uint)**(byte **)(param_1 + 8);
      switch(local_14) {
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2d:
      case 0x2e:
      case 0x3f:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x7b:
      case 0x7c:
      case 0x7d:
        local_10 = local_14;
        break;
      default:
        *(undefined4 *)(param_1 + 0x10) = 0x5aa;
        FUN_1001d7db5(param_1,"Invalid escape value");
        return;
      case 0x6e:
        local_10 = 10;
        break;
      case 0x72:
        local_10 = 0xd;
        break;
      case 0x74:
        local_10 = 9;
      }
      local_18 = 1;
    }
    else {
      if ((local_14 == 0x5b) || (local_14 == 0x5d)) {
        *(undefined4 *)(param_1 + 0x10) = 0x5aa;
        FUN_1001d7db5(param_1,"Expecting a char range");
        return;
      }
      local_10 = _xmlStringCurrentChar(0,*(undefined8 *)(param_1 + 8),&local_18);
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)local_18;
    if (local_10 != 0x2d) {
      local_14 = (uint)**(byte **)(param_1 + 8);
      local_c = local_10;
      if ((local_14 == 0x2d) && (*(char *)(*(long *)(param_1 + 8) + 1) != ']')) {
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        local_14 = (uint)**(byte **)(param_1 + 8);
        if (local_14 == 0x5c) {
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          local_14 = (uint)**(byte **)(param_1 + 8);
          switch(local_14) {
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2d:
          case 0x2e:
          case 0x3f:
          case 0x5b:
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x7b:
          case 0x7c:
          case 0x7d:
            local_c = local_14;
            break;
          default:
            *(undefined4 *)(param_1 + 0x10) = 0x5aa;
            FUN_1001d7db5(param_1,"Invalid escape value");
            return;
          case 0x6e:
            local_c = 10;
            break;
          case 0x72:
            local_c = 0xd;
            break;
          case 0x74:
            local_c = 9;
          }
          local_18 = 1;
        }
        else {
          if ((local_14 == 0x5b) || (local_14 == 0x5d)) {
            *(undefined4 *)(param_1 + 0x10) = 0x5aa;
            FUN_1001d7db5(param_1,"Expecting the end of a char range");
            return;
          }
          local_c = _xmlStringCurrentChar(0,*(undefined8 *)(param_1 + 8),&local_18);
        }
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)local_18;
        if ((int)local_c < (int)local_10) {
          *(undefined4 *)(param_1 + 0x10) = 0x5aa;
          FUN_1001d7db5(param_1,"End of range is before start of range");
        }
        else {
          FUN_1001d9b37(param_1,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x14),2,
                        local_10,local_c,0);
        }
      }
      else {
        FUN_1001d9b37(param_1,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x14),2,
                      local_10,local_10,0);
      }
    }
  }
  return;
}

