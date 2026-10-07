
int _xmlRelaxNGValidateFullElement(xmlRelaxNGValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem)

{
  int iVar1;
  long lVar2;
  int local_34;
  int local_14;
  
  if (((ctxt == (xmlRelaxNGValidCtxtPtr)0x0) || (*(long *)(ctxt + 0xb0) == 0)) ||
     (elem == (xmlNodePtr)0x0)) {
    local_34 = -1;
  }
  else {
    lVar2 = FUN_10022e535(ctxt,elem->parent);
    if (lVar2 == 0) {
      local_34 = -1;
    }
    else {
      *(xmlNodePtr *)(lVar2 + 8) = elem;
      *(long *)(ctxt + 0x60) = lVar2;
      *(undefined4 *)(ctxt + 0x44) = 0;
      iVar1 = FUN_1002418f5(ctxt,*(undefined8 *)(ctxt + 0xb0));
      if ((iVar1 == 0) && (*(int *)(ctxt + 0x44) == 0)) {
        local_14 = 1;
      }
      else {
        local_14 = -1;
      }
      FUN_10022eca1(ctxt,lVar2);
      *(undefined8 *)(ctxt + 0x60) = 0;
      local_34 = local_14;
    }
  }
  return local_34;
}

