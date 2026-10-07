
void FUN_1001a1f30(long param_1,xmlDocPtr param_2)

{
  FILE *local_10;
  
  if (param_2 != (xmlDocPtr)0x0) {
    if (param_1 == 0) {
      local_10 = *(FILE **)PTR____stdoutp_100ba2338;
    }
    else {
      local_10 = *(FILE **)(param_1 + 0x28);
    }
    if (param_2->type == XML_DOCUMENT_NODE) {
      _xmlDocDump(local_10,param_2);
    }
    else if (param_2->type == XML_ATTRIBUTE_NODE) {
      _xmlDebugDumpAttrList(local_10,(xmlAttrPtr)param_2,0);
    }
    else {
      _xmlElemDump(local_10,param_2->doc,(xmlNodePtr)param_2);
    }
    _fputc(10,local_10);
  }
  return;
}

