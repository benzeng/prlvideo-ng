
undefined4
FUN_100210f36(long param_1,int param_2,xmlChar *param_3,int param_4,int param_5,undefined4 *param_6)

{
  long lVar1;
  int iVar2;
  xmlChar *pxVar3;
  undefined4 local_44;
  
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if ((*(uint *)(*(long *)(param_1 + 0xb8) + 0x40) >> 2 & 1) == 0) {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x38) + 0x5c) == 1) {
      FUN_1001e8d5c(param_1,0x731,0,0,
                    "Character content is not allowed, because the content type is empty",0,0);
      local_44 = *(undefined4 *)(param_1 + 0x60);
    }
    else if (*(int *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x38) + 0x5c) == 2) {
      if ((param_2 == 3) && (iVar2 = FUN_1001ed76e(param_3,param_4), iVar2 != 0)) {
        local_44 = 0;
      }
      else {
        FUN_1001e8d5c(param_1,0x733,0,0,
                      "Character content other than whitespace is not allowed because the content type is \'element-only\'"
                      ,0,0);
        local_44 = *(undefined4 *)(param_1 + 0x60);
      }
    }
    else if ((param_3 == (xmlChar *)0x0) || (*param_3 == '\0')) {
      local_44 = 0;
    }
    else if ((*(int *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x38) + 0x5c) == 3) &&
            ((*(long *)(*(long *)(param_1 + 0xb8) + 0x50) == 0 ||
             (*(long *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x50) + 0x90) == 0)))) {
      local_44 = 0;
    }
    else {
      if (*(long *)(*(long *)(param_1 + 0xb8) + 0x28) == 0) {
        if (param_5 == 2) {
          *(xmlChar **)(*(long *)(param_1 + 0xb8) + 0x28) = param_3;
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = 1;
          }
          *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) =
               *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) | 2;
        }
        else if (param_5 == 3) {
          if (param_4 == -1) {
            lVar1 = *(long *)(param_1 + 0xb8);
            pxVar3 = _xmlStrdup(param_3);
            *(xmlChar **)(lVar1 + 0x28) = pxVar3;
          }
          else {
            lVar1 = *(long *)(param_1 + 0xb8);
            pxVar3 = _xmlStrndup(param_3,param_4);
            *(xmlChar **)(lVar1 + 0x28) = pxVar3;
          }
          *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) =
               *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) | 2;
        }
        else if (param_5 == 1) {
          *(xmlChar **)(*(long *)(param_1 + 0xb8) + 0x28) = param_3;
        }
      }
      else if ((*(uint *)(*(long *)(param_1 + 0xb8) + 0x40) >> 1 & 1) == 0) {
        lVar1 = *(long *)(param_1 + 0xb8);
        pxVar3 = _xmlStrncatNew(*(xmlChar **)(*(long *)(param_1 + 0xb8) + 0x28),param_3,param_4);
        *(xmlChar **)(lVar1 + 0x28) = pxVar3;
        *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) =
             *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) | 2;
      }
      else {
        lVar1 = *(long *)(param_1 + 0xb8);
        pxVar3 = _xmlStrncat(*(xmlChar **)(*(long *)(param_1 + 0xb8) + 0x28),param_3,param_4);
        *(xmlChar **)(lVar1 + 0x28) = pxVar3;
      }
      local_44 = 0;
    }
  }
  else {
    FUN_1001e8d5c(param_1,0x738,0,0,
                  "Neither character nor element content is allowed because the element is \'nilled\'"
                  ,0,0);
    local_44 = *(undefined4 *)(param_1 + 0x60);
  }
  return local_44;
}

