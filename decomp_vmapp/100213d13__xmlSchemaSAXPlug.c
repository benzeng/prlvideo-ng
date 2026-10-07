
undefined4 * _xmlSchemaSAXPlug(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined4 *local_38;
  
  if (((param_1 == 0) || (param_2 == (long *)0x0)) || (param_3 == (long *)0x0)) {
    local_38 = (undefined4 *)0x0;
  }
  else {
    plVar1 = (long *)*param_2;
    if ((plVar1 == (long *)0x0) || ((int)plVar1[0x1b] == -0x21124151)) {
      if (((plVar1 == (long *)0x0) || ((plVar1[0x1d] != 0 || (plVar1[0x1e] != 0)))) ||
         ((plVar1[0xe] == 0 && (plVar1[0xf] == 0)))) {
        local_38 = (undefined4 *)(*(code *)_xmlMalloc)(0x130);
        if (local_38 == (undefined4 *)0x0) {
          local_38 = (undefined4 *)0x0;
        }
        else {
          _memset(local_38,0,0x130);
          *local_38 = 0xdc43ba21;
          local_38[0x40] = 0xdeedbeaf;
          *(long *)(local_38 + 0x4a) = param_1;
          *(long **)(local_38 + 2) = param_2;
          *(long **)(local_38 + 4) = plVar1;
          if (plVar1 == (long *)0x0) {
            *(code **)(local_38 + 0x44) = FUN_10021197d;
            *(code **)(local_38 + 0x46) = FUN_100211d9b;
            *(code **)(local_38 + 0x2e) = FUN_100211732;
            *(code **)(local_38 + 0x2c) = FUN_100211732;
            *(code **)(local_38 + 0x3c) = FUN_100211818;
            *(code **)(local_38 + 0x2a) = FUN_1002118fe;
            *(long *)(local_38 + 8) = param_1;
            *param_3 = param_1;
          }
          else {
            if (*plVar1 != 0) {
              *(code **)(local_38 + 10) = FUN_100212ed3;
            }
            if (plVar1[1] != 0) {
              *(code **)(local_38 + 0xc) = FUN_100212f3b;
            }
            if (plVar1[2] != 0) {
              *(code **)(local_38 + 0xe) = FUN_100212f9b;
            }
            if (plVar1[3] != 0) {
              *(code **)(local_38 + 0x10) = FUN_100212ffb;
            }
            if (plVar1[4] != 0) {
              *(code **)(local_38 + 0x12) = FUN_1002130c3;
            }
            if (plVar1[5] != 0) {
              *(code **)(local_38 + 0x14) = FUN_100213136;
            }
            if (plVar1[6] != 0) {
              *(code **)(local_38 + 0x16) = FUN_100213212;
            }
            if (plVar1[7] != 0) {
              *(code **)(local_38 + 0x18) = FUN_1002133a1;
            }
            if (plVar1[8] != 0) {
              *(code **)(local_38 + 0x1a) = FUN_100213298;
            }
            if (plVar1[9] != 0) {
              *(code **)(local_38 + 0x1c) = FUN_100213339;
            }
            if (plVar1[10] != 0) {
              *(code **)(local_38 + 0x1e) = FUN_10021340b;
            }
            if (plVar1[0xb] != 0) {
              *(code **)(local_38 + 0x20) = FUN_100213480;
            }
            if (plVar1[0xc] != 0) {
              *(code **)(local_38 + 0x22) = FUN_1002134d9;
            }
            if (plVar1[0xd] != 0) {
              *(code **)(local_38 + 0x24) = FUN_10021352a;
            }
            if (plVar1[0x13] != 0) {
              *(code **)(local_38 + 0x30) = FUN_10021357b;
            }
            if (plVar1[0x14] != 0) {
              *(code **)(local_38 + 0x32) = FUN_1002135e2;
            }
            if (plVar1[0x15] != 0) {
              *(code **)(local_38 + 0x34) = FUN_100213641;
            }
            if (plVar1[0x16] != 0) {
              *(code **)(local_38 + 0x36) = FUN_100213745;
            }
            if (plVar1[0x17] != 0) {
              *(code **)(local_38 + 0x38) = FUN_100213849;
            }
            if (plVar1[0x18] != 0) {
              *(code **)(local_38 + 0x3a) = FUN_1002131a1;
            }
            if (plVar1[0x1a] != 0) {
              *(code **)(local_38 + 0x3e) = FUN_10021305b;
            }
            *(code **)(local_38 + 0x2c) = FUN_10021394d;
            if ((plVar1[0x12] == 0) || (plVar1[0x12] == plVar1[0x11])) {
              *(code **)(local_38 + 0x2e) = FUN_10021394d;
            }
            else {
              *(code **)(local_38 + 0x2e) = FUN_1002139d9;
            }
            *(code **)(local_38 + 0x3c) = FUN_100213a65;
            *(code **)(local_38 + 0x2a) = FUN_100213af1;
            *(code **)(local_38 + 0x44) = FUN_100213b71;
            *(code **)(local_38 + 0x46) = FUN_100213c77;
            *(long **)(local_38 + 6) = param_3;
            *(long *)(local_38 + 8) = *param_3;
            *param_3 = (long)local_38;
          }
          *param_2 = (long)(local_38 + 10);
          *(long *)(param_1 + 0x48) = *param_2;
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 1;
          FUN_100212b1e(param_1);
        }
      }
      else {
        local_38 = (undefined4 *)0x0;
      }
    }
    else {
      local_38 = (undefined4 *)0x0;
    }
  }
  return local_38;
}

