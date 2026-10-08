
int FUN_1008f260a(xmlNodePtr param_1,int param_2,xmlNodePtr param_3,int param_4)

{
  undefined4 local_28;
  
  if ((param_1 == (xmlNodePtr)0x0) || (param_3 == (xmlNodePtr)0x0)) {
    local_28 = -2;
  }
  else if (param_1 == param_3) {
    if (param_2 < param_4) {
      local_28 = 1;
    }
    else if (param_4 < param_2) {
      local_28 = -1;
    }
    else {
      local_28 = 0;
    }
  }
  else {
    local_28 = _xmlXPathCmpNodes(param_1,param_3);
  }
  return local_28;
}

