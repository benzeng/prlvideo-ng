
void _xmlXPtrStringRangeFunction(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  xmlXPathObjectPtr local_50;
  int *local_48;
  undefined8 local_40;
  xmlXPathObjectPtr local_38;
  xmlXPathObjectPtr local_30;
  xmlXPathObjectPtr local_28;
  int local_1c;
  int local_18;
  int local_14;
  xmlXPathObjectPtr local_10;
  
  local_30 = (xmlXPathObjectPtr)0x0;
  local_28 = (xmlXPathObjectPtr)0x0;
  local_18 = 0;
  local_14 = 0;
  if ((param_2 < 2) || (4 < param_2)) {
    _xmlXPathErr(param_1,0xc);
  }
  else {
    if (3 < param_2) {
      if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
        _xmlXPathErr(param_1,0xb);
        return;
      }
      local_28 = (xmlXPathObjectPtr)_valuePop(param_1);
      if (local_28 != (xmlXPathObjectPtr)0x0) {
        local_14 = (int)local_28->floatval;
      }
    }
    if (2 < param_2) {
      if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
        _xmlXPathErr(param_1,0xb);
        return;
      }
      local_30 = (xmlXPathObjectPtr)_valuePop(param_1);
      if (local_30 != (xmlXPathObjectPtr)0x0) {
        local_18 = (int)local_30->floatval;
      }
    }
    if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 4)) {
      _xmlXPathErr(param_1,0xb);
    }
    else {
      local_38 = (xmlXPathObjectPtr)_valuePop(param_1);
      if ((*(long *)(param_1 + 0x20) == 0) ||
         ((**(int **)(param_1 + 0x20) != 7 && (**(int **)(param_1 + 0x20) != 1)))) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        local_50 = (xmlXPathObjectPtr)_valuePop(param_1);
        local_40 = _xmlXPtrLocationSetCreate(0);
        if (local_50->nodesetval != (xmlNodeSetPtr)0x0) {
          if (local_50->type == XPATH_NODESET) {
            local_10 = (xmlXPathObjectPtr)_xmlXPtrNewLocationSetNodeSet(local_50->nodesetval);
            _xmlXPathFreeObject(local_50);
            local_50 = local_10;
          }
          local_48 = local_50->user;
          for (local_54 = 0; local_54 < *local_48; local_54 = local_54 + 1) {
            FUN_1008f6519(*(undefined8 *)(*(long *)(local_48 + 2) + (long)local_54 * 8),&local_68,
                          &local_58);
            FUN_1008f65eb(*(undefined8 *)(*(long *)(local_48 + 2) + (long)local_54 * 8),&local_70,
                          &local_5c);
            FUN_1008f5ded(&local_68,&local_58,0);
            FUN_1008f63f8(&local_70,&local_5c);
            do {
              local_78 = local_70;
              local_60 = local_5c;
              local_1c = FUN_1008f61e6(local_38->stringval,&local_68,&local_58,&local_78,&local_60);
              if (local_1c == 1) {
                if (local_30 == (xmlXPathObjectPtr)0x0) {
                  uVar2 = _xmlXPtrNewRange(local_68,local_58,local_78,local_60);
                  _xmlXPtrLocationSetAdd(local_40,uVar2);
                }
                else {
                  iVar1 = FUN_1008f5ded(&local_68,&local_58,local_18 + -1);
                  if (iVar1 == 0) {
                    if ((local_28 == (xmlXPathObjectPtr)0x0) || (local_14 < 1)) {
                      if ((local_28 == (xmlXPathObjectPtr)0x0) || (0 < local_14)) {
                        uVar2 = _xmlXPtrNewRange(local_68,local_58,local_78,local_60);
                        _xmlXPtrLocationSetAdd(local_40,uVar2);
                      }
                      else {
                        uVar2 = _xmlXPtrNewRange(local_68,local_58,local_68,local_58);
                        _xmlXPtrLocationSetAdd(local_40,uVar2);
                      }
                    }
                    else {
                      local_88 = local_68;
                      local_7c = local_58 + -1;
                      iVar1 = FUN_1008f5ded(&local_88,&local_7c,local_14);
                      if (iVar1 == 0) {
                        uVar2 = _xmlXPtrNewRange(local_68,local_58,local_88,local_7c);
                        _xmlXPtrLocationSetAdd(local_40,uVar2);
                      }
                    }
                  }
                }
                local_68 = local_78;
                local_58 = local_60;
                if (*local_38->stringval == '\0') {
                  local_58 = local_60 + 1;
                }
              }
            } while (local_1c == 1);
          }
        }
        uVar2 = _xmlXPtrWrapLocationSet(local_40);
        _valuePush(param_1,uVar2);
        _xmlXPathFreeObject(local_50);
        _xmlXPathFreeObject(local_38);
        if (local_30 != (xmlXPathObjectPtr)0x0) {
          _xmlXPathFreeObject(local_30);
        }
        if (local_28 != (xmlXPathObjectPtr)0x0) {
          _xmlXPathFreeObject(local_28);
        }
      }
    }
  }
  return;
}

