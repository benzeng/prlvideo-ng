
void FUN_1001a5b32(FILE *param_1,xmlNodePtr param_2,int param_3)

{
  int iVar1;
  char local_78 [108];
  int local_c;
  
  for (local_c = 0; (local_c < param_3 && (local_c < 0x19)); local_c = local_c + 1) {
    iVar1 = local_c * 2 + 1;
    local_78[iVar1] = ' ';
    local_78[local_c * 2] = local_78[iVar1];
  }
  iVar1 = local_c * 2 + 1;
  local_78[iVar1] = '\0';
  local_78[local_c * 2] = local_78[iVar1];
  if (param_2 == (xmlNodePtr)0x0) {
    _fprintf(param_1,local_78);
    _fwrite("Node is NULL !\n",1,0xf,param_1);
  }
  else if ((param_2->type == XML_DOCUMENT_NODE) || (param_2->type == XML_HTML_DOCUMENT_NODE)) {
    _fprintf(param_1,local_78);
    _fwrite(" /\n",1,3,param_1);
  }
  else if (param_2->type == XML_ATTRIBUTE_NODE) {
    _xmlDebugDumpAttr(param_1,(xmlAttrPtr)param_2,param_3);
  }
  else {
    _xmlDebugDumpOneNode(param_1,param_2,param_3);
  }
  return;
}

