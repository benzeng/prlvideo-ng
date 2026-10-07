
int _xmlValidatePushElement(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem,xmlChar *qname)

{
  int local_50;
  undefined4 local_28;
  int local_24;
  undefined8 local_20;
  xmlValidState *local_18;
  long local_10;
  
  local_24 = 1;
  local_28 = 0;
  if (ctxt == (xmlValidCtxtPtr)0x0) {
    local_50 = 0;
  }
  else {
    if (((0 < ctxt->vstateNr) && (ctxt->vstate != (xmlValidState *)0x0)) &&
       (local_18 = ctxt->vstate, *(long *)local_18 != 0)) {
      local_10 = *(long *)local_18;
      switch(*(undefined4 *)(local_10 + 0x48)) {
      case 0:
        local_24 = 0;
        break;
      case 1:
        FUN_100183d12(ctxt,*(long *)(local_18 + 8),0x210,
                      "Element %s was declared EMPTY this one has content\n",
                      *(undefined8 *)(*(long *)(local_18 + 8) + 0x10),0,0);
        local_24 = 0;
        break;
      case 3:
        if ((*(long *)(local_10 + 0x50) == 0) || (**(int **)(local_10 + 0x50) != 1)) {
          local_24 = FUN_10018d4b3(ctxt,*(undefined8 *)(local_10 + 0x50),qname);
          if (local_24 != 1) {
            FUN_100183d12(ctxt,*(long *)(local_18 + 8),0x203,
                          "Element %s is not declared in %s list of possible children\n",qname,
                          *(undefined8 *)(*(long *)(local_18 + 8) + 0x10),0);
          }
        }
        else {
          FUN_100183d12(ctxt,*(long *)(local_18 + 8),0x211,
                        "Element %s was declared #PCDATA but contains non text nodes\n",
                        *(undefined8 *)(*(long *)(local_18 + 8) + 0x10),0,0);
          local_24 = 0;
        }
        break;
      case 4:
        if (*(long *)(local_18 + 0x10) != 0) {
          local_24 = _xmlRegExecPushString
                               (*(xmlRegExecCtxtPtr *)(local_18 + 0x10),qname,(void *)0x0);
          if (local_24 < 0) {
            FUN_100183d12(ctxt,*(long *)(local_18 + 8),0x1f8,
                          "Element %s content does not follow the DTD, Misplaced %s\n",
                          *(undefined8 *)(*(long *)(local_18 + 8) + 0x10),qname,0);
            local_24 = 0;
          }
          else {
            local_24 = 1;
          }
        }
      }
    }
    local_20 = FUN_10018d726(ctxt,doc,elem,&local_28);
    FUN_1001840ae(ctxt,local_20,elem);
    local_50 = local_24;
  }
  return local_50;
}

