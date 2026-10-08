
uint _xmlXPathCompareValues(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint local_24;
  xmlXPathObjectPtr local_18;
  xmlXPathObjectPtr local_10;
  
  local_24 = 0;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    return 0;
  }
  local_10 = (xmlXPathObjectPtr)_valuePop(param_1);
  local_18 = (xmlXPathObjectPtr)_valuePop(param_1);
  if ((local_18 == (xmlXPathObjectPtr)0x0) || (local_10 == (xmlXPathObjectPtr)0x0)) {
    if (local_18 == (xmlXPathObjectPtr)0x0) {
      _xmlXPathFreeObject(local_10);
    }
    else {
      _xmlXPathFreeObject(local_18);
    }
    _xmlXPathErr(param_1,10);
    return 0;
  }
  if ((((local_10->type == XPATH_NODESET) || (local_10->type == XPATH_XSLT_TREE)) ||
      (local_18->type == XPATH_NODESET)) || (local_18->type == XPATH_XSLT_TREE)) {
    if (((local_10->type == XPATH_NODESET) || (local_10->type == XPATH_XSLT_TREE)) &&
       ((local_18->type == XPATH_NODESET || (local_18->type == XPATH_XSLT_TREE)))) {
      local_24 = FUN_1008dfc52(param_2,param_3,local_18,local_10);
    }
    else if ((local_18->type == XPATH_NODESET) || (local_18->type == XPATH_XSLT_TREE)) {
      local_24 = FUN_1008dff74(param_1,param_2,param_3,local_18,local_10);
    }
    else {
      local_24 = FUN_1008dff74(param_1,param_2 == 0,param_3,local_10,local_18);
    }
    return local_24;
  }
  if (local_18->type != XPATH_NUMBER) {
    _valuePush(param_1,local_18);
    _xmlXPathNumberFunction(param_1,1);
    local_18 = (xmlXPathObjectPtr)_valuePop(param_1);
  }
  if (local_18->type == XPATH_NUMBER) {
    if (local_10->type != XPATH_NUMBER) {
      _valuePush(param_1,local_10);
      _xmlXPathNumberFunction(param_1,1);
      local_10 = (xmlXPathObjectPtr)_valuePop(param_1);
    }
    if (local_10->type == XPATH_NUMBER) {
      iVar1 = _xmlXPathIsNaN(local_18->floatval);
      if ((iVar1 == 0) && (iVar1 = _xmlXPathIsNaN(local_10->floatval), iVar1 == 0)) {
        iVar1 = _xmlXPathIsInf(local_18->floatval);
        iVar2 = _xmlXPathIsInf(local_10->floatval);
        if ((param_2 == 0) || (param_3 == 0)) {
          if ((param_2 == 0) || (param_3 != 0)) {
            if ((param_2 == 0) && (param_3 != 0)) {
              if (((iVar1 == 1) && (iVar2 != 1)) || ((iVar2 == -1 && (iVar1 != -1)))) {
                local_24 = 1;
              }
              else if ((iVar1 == 0) && (iVar2 == 0)) {
                local_24 = (uint)(local_10->floatval < local_18->floatval);
              }
              else {
                local_24 = 0;
              }
            }
            else if ((param_2 == 0) && (param_3 == 0)) {
              if ((iVar1 == 1) || (iVar2 == -1)) {
                local_24 = 1;
              }
              else if ((iVar1 == 0) && (iVar2 == 0)) {
                local_24 = (uint)(local_10->floatval <= local_18->floatval);
              }
              else {
                local_24 = 0;
              }
            }
          }
          else if ((iVar1 == -1) || (iVar2 == 1)) {
            local_24 = 1;
          }
          else if ((iVar1 == 0) && (iVar2 == 0)) {
            local_24 = (uint)(local_18->floatval <= local_10->floatval);
          }
          else {
            local_24 = 0;
          }
        }
        else if (((iVar1 == -1) && (iVar2 != -1)) || ((iVar2 == 1 && (iVar1 != 1)))) {
          local_24 = 1;
        }
        else if ((iVar1 == 0) && (iVar2 == 0)) {
          local_24 = (uint)(local_18->floatval < local_10->floatval);
        }
        else {
          local_24 = 0;
        }
      }
      else {
        local_24 = 0;
      }
      _xmlXPathFreeObject(local_18);
      _xmlXPathFreeObject(local_10);
      return local_24;
    }
    _xmlXPathFreeObject(local_18);
    _xmlXPathFreeObject(local_10);
    _xmlXPathErr(param_1,10);
    return 0;
  }
  _xmlXPathFreeObject(local_18);
  _xmlXPathFreeObject(local_10);
  _xmlXPathErr(param_1,10);
  return 0;
}

