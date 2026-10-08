
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
            *(code **)(local_38 + 0x44) = FUN_1009452a5;
            *(code **)(local_38 + 0x46) = FUN_1009456c3;
            *(code **)(local_38 + 0x2e) = FUN_10094505a;
            *(code **)(local_38 + 0x2c) = FUN_10094505a;
            *(code **)(local_38 + 0x3c) = FUN_100945140;
            *(code **)(local_38 + 0x2a) = FUN_100945226;
            *(long *)(local_38 + 8) = param_1;
            *param_3 = param_1;
          }
          else {
            if (*plVar1 != 0) {
              *(code **)(local_38 + 10) = FUN_1009467fb;
            }
            if (plVar1[1] != 0) {
              *(code **)(local_38 + 0xc) = FUN_100946863;
            }
            if (plVar1[2] != 0) {
              *(code **)(local_38 + 0xe) = FUN_1009468c3;
            }
            if (plVar1[3] != 0) {
              *(code **)(local_38 + 0x10) = FUN_100946923;
            }
            if (plVar1[4] != 0) {
              *(code **)(local_38 + 0x12) = FUN_1009469eb;
            }
            if (plVar1[5] != 0) {
              *(code **)(local_38 + 0x14) = FUN_100946a5e;
            }
            if (plVar1[6] != 0) {
              *(code **)(local_38 + 0x16) = FUN_100946b3a;
            }
            if (plVar1[7] != 0) {
              *(code **)(local_38 + 0x18) = FUN_100946cc9;
            }
            if (plVar1[8] != 0) {
              *(code **)(local_38 + 0x1a) = FUN_100946bc0;
            }
            if (plVar1[9] != 0) {
              *(code **)(local_38 + 0x1c) = FUN_100946c61;
            }
            if (plVar1[10] != 0) {
              *(code **)(local_38 + 0x1e) = FUN_100946d33;
            }
            if (plVar1[0xb] != 0) {
              *(code **)(local_38 + 0x20) = FUN_100946da8;
            }
            if (plVar1[0xc] != 0) {
              *(code **)(local_38 + 0x22) = FUN_100946e01;
            }
            if (plVar1[0xd] != 0) {
              *(code **)(local_38 + 0x24) = FUN_100946e52;
            }
            if (plVar1[0x13] != 0) {
              *(code **)(local_38 + 0x30) = FUN_100946ea3;
            }
            if (plVar1[0x14] != 0) {
              *(code **)(local_38 + 0x32) = FUN_100946f0a;
            }
            if (plVar1[0x15] != 0) {
              *(code **)(local_38 + 0x34) = FUN_100946f69;
            }
            if (plVar1[0x16] != 0) {
              *(code **)(local_38 + 0x36) = FUN_10094706d;
            }
            if (plVar1[0x17] != 0) {
              *(code **)(local_38 + 0x38) = FUN_100947171;
            }
            if (plVar1[0x18] != 0) {
              *(code **)(local_38 + 0x3a) = FUN_100946ac9;
            }
            if (plVar1[0x1a] != 0) {
              *(code **)(local_38 + 0x3e) = FUN_100946983;
            }
            *(code **)(local_38 + 0x2c) = FUN_100947275;
            if ((plVar1[0x12] == 0) || (plVar1[0x12] == plVar1[0x11])) {
              *(code **)(local_38 + 0x2e) = FUN_100947275;
            }
            else {
              *(code **)(local_38 + 0x2e) = FUN_100947301;
            }
            *(code **)(local_38 + 0x3c) = FUN_10094738d;
            *(code **)(local_38 + 0x2a) = FUN_100947419;
            *(code **)(local_38 + 0x44) = FUN_100947499;
            *(code **)(local_38 + 0x46) = FUN_10094759f;
            *(long **)(local_38 + 6) = param_3;
            *(long *)(local_38 + 8) = *param_3;
            *param_3 = (long)local_38;
          }
          *param_2 = (long)(local_38 + 10);
          *(long *)(param_1 + 0x48) = *param_2;
          *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 1;
          FUN_100946446(param_1);
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

