
undefined4 FUN_1008d61ed(long param_1,char *param_2,xmlNodePtr param_3)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  xmlNodePtr local_18;
  xmlParserErrors local_c;
  
  if (param_1 != 0) {
    if (param_3 == (xmlNodePtr)0x0) {
      _fwrite("NULL\n",1,5,*(FILE **)(param_1 + 0x28));
    }
    else if (param_2 == (char *)0x0) {
      _fwrite("NULL\n",1,5,*(FILE **)(param_1 + 0x28));
    }
    else {
      lVar2 = -1;
      pcVar3 = param_2;
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      local_c = _xmlParseInNodeContext(param_3,param_2,~(uint)lVar2 - 1,0,&local_18);
      if (local_c == XML_ERR_OK) {
        if (param_3->children != (_xmlNode *)0x0) {
          _xmlFreeNodeList(param_3->children);
          param_3->children = (_xmlNode *)0x0;
          param_3->last = (_xmlNode *)0x0;
        }
        _xmlAddChildList(param_3,local_18);
      }
      else {
        _fwrite("failed to parse content\n",1,0x18,*(FILE **)(param_1 + 0x28));
      }
    }
  }
  return 0;
}

