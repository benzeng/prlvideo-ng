
xmlNodeSetPtr _xmlXPathPopNodeSet(long param_1)

{
  xmlXPathObjectPtr obj;
  xmlNodeSetPtr local_28;
  
  if (param_1 == 0) {
    local_28 = (xmlNodeSetPtr)0x0;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    _xmlXPatherror(param_1,"xpath.c",0x4f8,10);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 10;
    }
    local_28 = (xmlNodeSetPtr)0x0;
  }
  else if ((*(long *)(param_1 + 0x20) == 0) ||
          ((**(int **)(param_1 + 0x20) != 1 && (**(int **)(param_1 + 0x20) != 9)))) {
    _xmlXPatherror(param_1,"xpath.c",0x4fc,0xb);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xb;
    }
    local_28 = (xmlNodeSetPtr)0x0;
  }
  else {
    obj = (xmlXPathObjectPtr)_valuePop(param_1);
    local_28 = obj->nodesetval;
    _xmlXPathFreeNodeSetList(obj);
  }
  return local_28;
}

