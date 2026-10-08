
uint FUN_1008e095f(undefined8 param_1,xmlXPathObjectPtr param_2,xmlXPathObjectPtr param_3)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  int iVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  xmlXPathObjectPtr local_40;
  xmlXPathObjectPtr local_38;
  uint local_1c;
  
  local_1c = 0;
  local_40 = param_3;
  local_38 = param_2;
  switch(param_2->type) {
  case XPATH_BOOLEAN:
    switch(param_3->type) {
    case XPATH_BOOLEAN:
      local_1c = (uint)(param_2->boolval == param_3->boolval);
      break;
    case XPATH_NUMBER:
      iVar3 = param_2->boolval;
      iVar2 = _xmlXPathCastNumberToBoolean(param_3->floatval);
      local_1c = (uint)(iVar3 == iVar2);
      break;
    case XPATH_STRING:
      if ((param_3->stringval == (xmlChar *)0x0) || (*param_3->stringval == '\0')) {
        local_1c = 0;
      }
      else {
        local_1c = 1;
      }
      local_1c = (uint)(param_2->boolval == local_1c);
      break;
    case XPATH_POINT:
    case XPATH_RANGE:
    case XPATH_LOCATIONSET:
    case XPATH_USERS:
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"Unimplemented block at %s:%d\n","xpath.c",0x1293);
    }
    break;
  case XPATH_NUMBER:
    switch(param_3->type) {
    case XPATH_BOOLEAN:
      iVar3 = param_3->boolval;
      iVar2 = _xmlXPathCastNumberToBoolean(param_2->floatval);
      local_1c = (uint)(iVar3 == iVar2);
      break;
    case XPATH_STRING:
      _valuePush(param_1,param_3);
      _xmlXPathNumberFunction(param_1,1);
      local_40 = (xmlXPathObjectPtr)_valuePop(param_1);
    case XPATH_NUMBER:
      iVar3 = _xmlXPathIsNaN(param_2->floatval);
      if ((iVar3 == 0) && (iVar3 = _xmlXPathIsNaN(local_40->floatval), iVar3 == 0)) {
        iVar3 = _xmlXPathIsInf(param_2->floatval);
        if (iVar3 == 1) {
          iVar3 = _xmlXPathIsInf(local_40->floatval);
          if (iVar3 == 1) {
            local_1c = 1;
          }
          else {
            local_1c = 0;
          }
        }
        else {
          iVar3 = _xmlXPathIsInf(param_2->floatval);
          if (iVar3 == -1) {
            iVar3 = _xmlXPathIsInf(local_40->floatval);
            if (iVar3 == -1) {
              local_1c = 1;
            }
            else {
              local_1c = 0;
            }
          }
          else {
            iVar3 = _xmlXPathIsInf(local_40->floatval);
            if (iVar3 == 1) {
              iVar3 = _xmlXPathIsInf(param_2->floatval);
              if (iVar3 == 1) {
                local_1c = 1;
              }
              else {
                local_1c = 0;
              }
            }
            else {
              iVar3 = _xmlXPathIsInf(local_40->floatval);
              if (iVar3 == -1) {
                iVar3 = _xmlXPathIsInf(param_2->floatval);
                if (iVar3 == -1) {
                  local_1c = 1;
                }
                else {
                  local_1c = 0;
                }
              }
              else {
                local_1c = (uint)(param_2->floatval == local_40->floatval);
              }
            }
          }
        }
      }
      else {
        local_1c = 0;
      }
      break;
    case XPATH_POINT:
    case XPATH_RANGE:
    case XPATH_LOCATIONSET:
    case XPATH_USERS:
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"Unimplemented block at %s:%d\n","xpath.c",0x12cc);
    }
    break;
  case XPATH_STRING:
    switch(param_3->type) {
    case XPATH_BOOLEAN:
      if ((param_2->stringval == (xmlChar *)0x0) || (*param_2->stringval == '\0')) {
        local_1c = 0;
      }
      else {
        local_1c = 1;
      }
      local_1c = (uint)(param_3->boolval == local_1c);
      break;
    case XPATH_NUMBER:
      _valuePush(param_1,param_2);
      _xmlXPathNumberFunction(param_1,1);
      local_38 = (xmlXPathObjectPtr)_valuePop(param_1);
      iVar3 = _xmlXPathIsNaN(local_38->floatval);
      if ((iVar3 == 0) && (iVar3 = _xmlXPathIsNaN(param_3->floatval), iVar3 == 0)) {
        iVar3 = _xmlXPathIsInf(local_38->floatval);
        if (iVar3 == 1) {
          iVar3 = _xmlXPathIsInf(param_3->floatval);
          if (iVar3 == 1) {
            local_1c = 1;
          }
          else {
            local_1c = 0;
          }
        }
        else {
          iVar3 = _xmlXPathIsInf(local_38->floatval);
          if (iVar3 == -1) {
            iVar3 = _xmlXPathIsInf(param_3->floatval);
            if (iVar3 == -1) {
              local_1c = 1;
            }
            else {
              local_1c = 0;
            }
          }
          else {
            iVar3 = _xmlXPathIsInf(param_3->floatval);
            if (iVar3 == 1) {
              iVar3 = _xmlXPathIsInf(local_38->floatval);
              if (iVar3 == 1) {
                local_1c = 1;
              }
              else {
                local_1c = 0;
              }
            }
            else {
              iVar3 = _xmlXPathIsInf(param_3->floatval);
              if (iVar3 == -1) {
                iVar3 = _xmlXPathIsInf(local_38->floatval);
                if (iVar3 == -1) {
                  local_1c = 1;
                }
                else {
                  local_1c = 0;
                }
              }
              else {
                local_1c = (uint)(local_38->floatval == param_3->floatval);
              }
            }
          }
        }
      }
      else {
        local_1c = 0;
      }
      break;
    case XPATH_STRING:
      local_1c = _xmlStrEqual(param_2->stringval,param_3->stringval);
      break;
    case XPATH_POINT:
    case XPATH_RANGE:
    case XPATH_LOCATIONSET:
    case XPATH_USERS:
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"Unimplemented block at %s:%d\n","xpath.c",0x1309);
    }
    break;
  case XPATH_POINT:
  case XPATH_RANGE:
  case XPATH_LOCATIONSET:
  case XPATH_USERS:
    ppxVar4 = ___xmlGenericError();
    pxVar1 = *ppxVar4;
    ppvVar5 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar5,"Unimplemented block at %s:%d\n","xpath.c",0x1314);
  }
  _xmlXPathFreeObject(local_38);
  _xmlXPathFreeObject(local_40);
  return local_1c;
}

