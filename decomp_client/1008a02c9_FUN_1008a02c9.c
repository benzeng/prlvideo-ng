
xmlDtdPtr FUN_1008a02c9(xmlDtdPtr param_1,_xmlDoc *param_2,_xmlDoc *param_3)

{
  xmlDtdPtr local_30;
  xmlDtdPtr local_20;
  xmlDtdPtr local_18;
  xmlDtdPtr local_10;
  
  local_20 = (xmlDtdPtr)0x0;
  local_18 = (xmlDtdPtr)0x0;
  local_30 = param_1;
LAB_1008a03f7:
  do {
    if (local_30 == (xmlDtdPtr)0x0) {
      return local_20;
    }
    if (local_30->type == XML_DTD_NODE) {
      if (param_2 == (_xmlDoc *)0x0) {
        local_30 = (xmlDtdPtr)local_30->next;
        goto LAB_1008a03f7;
      }
      if (param_2->intSubset == (_xmlDtd *)0x0) {
        local_10 = _xmlCopyDtd(local_30);
        local_10->doc = param_2;
        local_10->parent = param_3;
        param_2->intSubset = local_10;
        _xmlAddChild((xmlNodePtr)param_3,(xmlNodePtr)local_10);
      }
      else {
        local_10 = param_2->intSubset;
        _xmlAddChild((xmlNodePtr)param_3,(xmlNodePtr)local_10);
      }
    }
    else {
      local_10 = (xmlDtdPtr)FUN_10089fd4f(local_30,param_2,param_3,1);
    }
    if (local_20 == (xmlDtdPtr)0x0) {
      local_10->prev = (_xmlNode *)0x0;
      local_18 = local_10;
      local_20 = local_10;
    }
    else if (local_18 != local_10) {
      local_18->next = (_xmlNode *)local_10;
      local_10->prev = (_xmlNode *)local_18;
      local_18 = local_10;
    }
    local_30 = (xmlDtdPtr)local_30->next;
  } while( true );
}

