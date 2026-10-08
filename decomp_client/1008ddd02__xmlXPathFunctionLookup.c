
long _xmlXPathFunctionLookup(long param_1,undefined8 param_2)

{
  long local_30;
  
  if (param_1 == 0) {
    local_30 = 0;
  }
  else if ((*(long *)(param_1 + 0xb8) == 0) ||
          (local_30 = (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0xc0),param_2,0),
          local_30 == 0)) {
    local_30 = _xmlXPathFunctionLookupNS(param_1,param_2,0);
  }
  return local_30;
}

