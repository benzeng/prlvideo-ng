
void FUN_1008d958e(FILE *param_1,xmlNodePtr param_2,int param_3)

{
  int iVar1;
  _xmlNode *p_Var2;
  xmlNodePtr local_98;
  char local_88 [112];
  xmlNodePtr local_18;
  int local_c;
  
  for (local_c = 0; (local_c < param_3 && (local_c < 0x19)); local_c = local_c + 1) {
    iVar1 = local_c * 2 + 1;
    local_88[iVar1] = ' ';
    local_88[local_c * 2] = local_88[iVar1];
  }
  iVar1 = local_c * 2 + 1;
  local_88[iVar1] = '\0';
  local_88[local_c * 2] = local_88[iVar1];
  local_98 = param_2;
  if (param_2 == (xmlNodePtr)0x0) {
    _fprintf(param_1,local_88);
    _fwrite("Node is NULL !\n",1,0xf,param_1);
  }
  else {
    while (local_98 != (xmlNodePtr)0x0) {
      local_18 = local_98;
      p_Var2 = local_98->next;
      _xmlDebugDumpOneNode(param_1,local_98,param_3);
      local_98 = p_Var2;
    }
  }
  return;
}

