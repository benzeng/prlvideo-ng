
undefined8 _xmlXPathLeadingSorted(undefined8 param_1,int *param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  if (((param_2 != (int *)0x0) && (*param_2 != 0)) && (*(long *)(param_2 + 2) != 0)) {
    if ((param_2 == (int *)0x0) || (*param_2 < 2)) {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined8 *)(*(long *)(param_2 + 2) + 8);
    }
    local_28 = _xmlXPathNodeLeadingSorted(param_1,local_20);
  }
  return local_28;
}

