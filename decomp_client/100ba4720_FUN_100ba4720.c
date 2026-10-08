
/* WARNING: Enum "enum_2029": Some values do not have unique names */

undefined8 FUN_100ba4720(char *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  xmlParserCtxtPtr ctxt;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  ctxt = _xmlCreatePushParserCtxt
                   ((xmlSAXHandlerPtr)&DAT_1022d0090,&local_38,(char *)0x0,0,(char *)0x0);
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = _xmlParseChunk(ctxt,param_1,param_2,1);
    uVar1 = local_38;
    if (iVar2 == 0) {
      _xmlFreeParserCtxt(ctxt);
      uVar3 = FUN_100ba3dd0(uVar1);
      FUN_100ba46b0(uVar1);
    }
    else {
      _xmlFreeParserCtxt(ctxt);
      uVar3 = 0;
    }
  }
  return uVar3;
}

