
undefined8 _xmlXPathVariableLookup(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  
  if (param_1 == 0) {
    local_30 = 0;
  }
  else if (*(long *)(param_1 + 0x90) == 0) {
    local_30 = _xmlXPathVariableLookupNS(param_1,param_2,0);
  }
  else {
    local_30 = (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0x98),param_2,0);
  }
  return local_30;
}

