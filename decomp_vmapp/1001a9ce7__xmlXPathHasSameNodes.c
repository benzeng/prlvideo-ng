
undefined4 _xmlXPathHasSameNodes(int *param_1,int *param_2)

{
  int iVar1;
  int local_34;
  undefined8 local_30;
  int local_18;
  
  if (((((param_1 != (int *)0x0) && (*param_1 != 0)) && (*(long *)(param_1 + 2) != 0)) &&
      ((param_2 != (int *)0x0 && (*param_2 != 0)))) && (*(long *)(param_2 + 2) != 0)) {
    if (param_1 == (int *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = *param_1;
    }
    for (local_18 = 0; local_18 < local_34; local_18 = local_18 + 1) {
      if (((param_1 == (int *)0x0) || (local_18 < 0)) || (*param_1 <= local_18)) {
        local_30 = 0;
      }
      else {
        local_30 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)local_18 * 8);
      }
      iVar1 = _xmlXPathNodeSetContains(param_2,local_30);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

