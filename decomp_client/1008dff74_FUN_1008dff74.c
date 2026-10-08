
undefined4
FUN_1008dff74(undefined8 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
             undefined4 *param_5)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  undefined4 local_40;
  
  if (((param_5 == (undefined4 *)0x0) || (param_4 == (int *)0x0)) ||
     ((*param_4 != 1 && (*param_4 != 9)))) {
    local_40 = 0;
  }
  else {
    switch(*param_5) {
    default:
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xpath.c",0x1176);
      local_40 = 0;
      break;
    case 1:
    case 9:
      local_40 = FUN_1008dfc52(param_2,param_3,param_4,param_5);
      break;
    case 2:
      _valuePush(param_1,param_4);
      _xmlXPathBooleanFunction(param_1,1);
      _valuePush(param_1,param_5);
      local_40 = _xmlXPathCompareValues(param_1,param_2,param_3);
      break;
    case 3:
      local_40 = FUN_1008df9e0(param_1,param_2,param_3,param_4,param_5);
      break;
    case 4:
      local_40 = FUN_1008dfb20(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return local_40;
}

