
void FUN_1008d0d51(xmlOutputBufferPtr param_1,xmlDocPtr param_2,xmlNodePtr param_3,char *param_4,
                  int param_5)

{
  xmlNodePtr local_20;
  
  local_20 = param_3;
  if (param_3 != (xmlNodePtr)0x0) {
    for (; local_20 != (xmlNodePtr)0x0; local_20 = local_20->next) {
      _htmlNodeDumpFormatOutput(param_1,param_2,local_20,param_4,param_5);
    }
  }
  return;
}

