
xmlNodeSetPtr _xmlXPathIntersection(int *param_1,int *param_2)

{
  int iVar1;
  xmlNodeSetPtr pxVar2;
  int local_44;
  undefined8 local_40;
  int local_18;
  
  pxVar2 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
  if (((((param_1 != (int *)0x0) && (*param_1 != 0)) && (*(long *)(param_1 + 2) != 0)) &&
      ((param_2 != (int *)0x0 && (*param_2 != 0)))) && (*(long *)(param_2 + 2) != 0)) {
    if (param_1 == (int *)0x0) {
      local_44 = 0;
    }
    else {
      local_44 = *param_1;
    }
    for (local_18 = 0; local_18 < local_44; local_18 = local_18 + 1) {
      if (((param_1 == (int *)0x0) || (local_18 < 0)) || (*param_1 <= local_18)) {
        local_40 = 0;
      }
      else {
        local_40 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)local_18 * 8);
      }
      iVar1 = _xmlXPathNodeSetContains(param_2,local_40);
      if (iVar1 != 0) {
        _xmlXPathNodeSetAddUnique(pxVar2,local_40);
      }
    }
  }
  return pxVar2;
}

