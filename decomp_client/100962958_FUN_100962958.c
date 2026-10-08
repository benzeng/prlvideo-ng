
/* WARNING: Removing unreachable block (ram,0x000100962bac) */

undefined4 FUN_100962958(undefined8 param_1,undefined8 param_2,xmlNodePtr param_3,xmlChar *param_4)

{
  _xmlNode *p_Var1;
  void *pvVar2;
  int iVar3;
  xmlChar *str2;
  undefined4 local_34;
  xmlNodePtr local_30;
  
  local_34 = 0;
  p_Var1 = param_3;
  while (local_30 = p_Var1, local_30 != (xmlNodePtr)0x0) {
    p_Var1 = local_30->next;
    if ((((param_4 == (xmlChar *)0x0) && (local_30 != (xmlNodePtr)0x0)) &&
        (local_30->ns != (xmlNs *)0x0)) &&
       ((iVar3 = _xmlStrEqual(local_30->name,(xmlChar *)"start"), iVar3 != 0 &&
        (iVar3 = _xmlStrEqual(local_30->ns->href,PTR_s_http___relaxng_org_ns_structure__10227d2b0),
        iVar3 != 0)))) {
      local_34 = 1;
      _xmlUnlinkNode(local_30);
      _xmlFreeNode(local_30);
    }
    else if ((((param_4 == (xmlChar *)0x0) ||
              ((local_30 == (xmlNodePtr)0x0 || (local_30->ns == (xmlNs *)0x0)))) ||
             (iVar3 = _xmlStrEqual(local_30->name,(xmlChar *)"define"), iVar3 == 0)) ||
            (iVar3 = _xmlStrEqual(local_30->ns->href,
                                  PTR_s_http___relaxng_org_ns_structure__10227d2b0), iVar3 == 0)) {
      if (((((local_30 != (xmlNodePtr)0x0) && (local_30->ns != (xmlNs *)0x0)) &&
           (iVar3 = _xmlStrEqual(local_30->name,(xmlChar *)"include"), iVar3 != 0)) &&
          (((iVar3 = _xmlStrEqual(local_30->ns->href,
                                  PTR_s_http___relaxng_org_ns_structure__10227d2b0), iVar3 != 0 &&
            (pvVar2 = local_30->psvi, pvVar2 != (void *)0x0)) &&
           ((*(long *)((long)pvVar2 + 0x10) != 0 &&
            ((*(long *)(*(long *)((long)pvVar2 + 0x10) + 0x18) != 0 &&
             (iVar3 = _xmlStrEqual(*(xmlChar **)
                                    (*(long *)(*(long *)((long)pvVar2 + 0x10) + 0x18) + 0x10),
                                   (xmlChar *)"grammar"), iVar3 != 0)))))))) &&
         (iVar3 = FUN_100962958(param_1,0,
                                *(undefined8 *)
                                 (*(long *)(*(long *)((long)pvVar2 + 0x10) + 0x18) + 0x18),param_4),
         iVar3 == 1)) {
        local_34 = 1;
      }
    }
    else {
      str2 = _xmlGetProp(local_30,(xmlChar *)"name");
      FUN_10096d1af(str2);
      if (str2 != (xmlChar *)0x0) {
        iVar3 = _xmlStrEqual(param_4,str2);
        if (iVar3 != 0) {
          local_34 = 1;
          _xmlUnlinkNode(local_30);
          _xmlFreeNode(local_30);
        }
        (*(code *)_xmlFree)(str2);
      }
    }
  }
  return local_34;
}

