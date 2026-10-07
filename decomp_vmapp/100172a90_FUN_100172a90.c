
undefined4 FUN_100172a90(long param_1,long param_2,xmlChar *param_3,long *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  undefined4 local_60;
  long local_38;
  long local_30;
  long local_28;
  undefined8 *local_20;
  long *local_18;
  
  local_30 = 0;
  local_28 = 0;
  if (((param_1 == 0) || (param_3 == (xmlChar *)0x0)) || (param_4 == (long *)0x0)) {
    local_60 = 0xffffffff;
  }
  else {
    *param_4 = 0;
    iVar1 = _xmlStrEqual(param_3,(xmlChar *)"http://www.w3.org/XML/1998/namespace");
    local_38 = param_2;
    if (iVar1 == 0) {
      do {
        if (*(int *)(local_38 + 8) == 1) {
          if (*(long *)(local_38 + 0x60) != 0) {
            for (local_20 = *(undefined8 **)(local_38 + 0x60); local_20 != (undefined8 *)0x0;
                local_20 = (undefined8 *)*local_20) {
              if ((param_5 == 0) || (local_20[3] != 0)) {
                if (local_30 != 0) {
                  local_18 = *(long **)(local_30 + 0x60);
                  while (local_18[3] != local_20[3]) {
                    if ((((local_18[3] != 0) && (local_20[3] != 0)) &&
                        (iVar1 = _xmlStrEqual((xmlChar *)local_18[3],(xmlChar *)local_20[3]),
                        iVar1 != 0)) || (local_18 = (long *)*local_18, local_18 == (long *)0x0))
                    break;
                  }
                  if (local_18 != (long *)0x0) goto LAB_100172c6d;
                }
                if (((xmlChar *)local_20[2] == param_3) ||
                   (iVar1 = _xmlStrEqual(param_3,(xmlChar *)local_20[2]), iVar1 != 0)) {
                  if (local_28 == 0) {
LAB_100172c56:
                    *param_4 = (long)local_20;
                    return 1;
                  }
                  iVar1 = FUN_10016f4b2(param_1,param_2,local_30,local_20[3]);
                  if (iVar1 < 0) {
                    return 0xffffffff;
                  }
                  if (iVar1 != 0) goto LAB_100172c56;
                }
              }
LAB_100172c6d:
            }
            local_28 = local_30;
            local_30 = local_38;
          }
        }
        else if (((*(int *)(param_2 + 8) == 5) || (*(int *)(param_2 + 8) == 6)) ||
                (*(int *)(param_2 + 8) == 0x11)) {
          return 0;
        }
        local_38 = *(long *)(local_38 + 0x28);
      } while ((local_38 != 0) && (*(long *)(local_38 + 0x40) != local_38));
      local_60 = 0;
    }
    else {
      lVar2 = FUN_100172255(param_1);
      *param_4 = lVar2;
      if (*param_4 == 0) {
        local_60 = 0xffffffff;
      }
      else {
        local_60 = 1;
      }
    }
  }
  return local_60;
}

