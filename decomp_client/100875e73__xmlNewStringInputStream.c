
long _xmlNewStringInputStream(undefined8 param_1,xmlChar *param_2)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  int *piVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  long local_40;
  
  if (param_2 == (xmlChar *)0x0) {
    FUN_1008734ff(param_1,"xmlNewStringInputStream string = NULL\n",0);
    local_40 = 0;
  }
  else {
    piVar3 = ___xmlParserDebugEntities();
    if (*piVar3 != 0) {
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"new fixed input: %.30s\n",param_2);
    }
    local_40 = _xmlNewInputStream(param_1);
    if (local_40 == 0) {
      _xmlErrMemory(param_1,"couldn\'t allocate a new input stream\n");
      local_40 = 0;
    }
    else {
      *(xmlChar **)(local_40 + 0x18) = param_2;
      *(xmlChar **)(local_40 + 0x20) = param_2;
      iVar2 = _xmlStrlen(param_2);
      *(int *)(local_40 + 0x30) = iVar2;
      *(xmlChar **)(local_40 + 0x28) = param_2 + *(int *)(local_40 + 0x30);
    }
  }
  return local_40;
}

