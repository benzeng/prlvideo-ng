
xmlNodePtr FUN_1008f837e(long param_1,xmlDocPtr param_2,long param_3,xmlNodePtr param_4)

{
  xmlNodePtr local_40;
  
  if ((((param_1 == 0) || (param_2 == (xmlDocPtr)0x0)) || (param_3 == 0)) ||
     (param_4 == (xmlNodePtr)0x0)) {
    local_40 = (xmlNodePtr)0x0;
  }
  else if (param_4->type == XML_DTD_NODE) {
    local_40 = (xmlNodePtr)0x0;
  }
  else {
    local_40 = _xmlDocCopyNode(param_4,param_2,1);
  }
  return local_40;
}

