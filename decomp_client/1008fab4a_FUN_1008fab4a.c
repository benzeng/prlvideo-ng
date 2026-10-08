
undefined4 FUN_1008fab4a(undefined8 *param_1,int param_2)

{
  xmlNodePtr cur;
  long lVar1;
  _xmlNode *p_Var2;
  undefined8 uVar3;
  xmlNodePtr elem;
  undefined4 local_58;
  xmlNodePtr local_30;
  xmlNodePtr local_28;
  int local_1c;
  
  if (param_1 == (undefined8 *)0x0) {
    local_58 = 0xffffffff;
  }
  else if ((param_2 < 0) || (*(int *)((long)param_1 + 0xc) <= param_2)) {
    local_58 = 0xffffffff;
  }
  else {
    cur = *(xmlNodePtr *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x18);
    if (cur == (xmlNodePtr)0x0) {
      local_58 = 0xffffffff;
    }
    else {
      if ((*(long *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x20) == 0) &&
         (*(long *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x30) != 0)) {
        lVar1 = *(long *)(param_1[3] + (long)param_2 * 8);
        uVar3 = FUN_1008f8a9f(param_1,*param_1,*param_1,
                              *(undefined8 *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x30));
        *(undefined8 *)(lVar1 + 0x20) = uVar3;
        _xmlXPathFreeObject(*(xmlXPathObjectPtr *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x30)
                           );
        *(undefined8 *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x30) = 0;
      }
      local_30 = *(xmlNodePtr *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x20);
      *(undefined8 *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x20) = 0;
      if ((cur->parent != (_xmlNode *)0x0) && (cur->parent->type != XML_ELEMENT_NODE)) {
        local_1c = 0;
        for (local_28 = local_30; local_28 != (xmlNodePtr)0x0; local_28 = local_28->next) {
          if (local_28->type == XML_ELEMENT_NODE) {
            local_1c = local_1c + 1;
          }
        }
        if (1 < local_1c) {
          FUN_1008f6fe0(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x18),
                        0x64b,"XInclude error: would result in multiple root nodes\n",0);
          return 0xffffffff;
        }
      }
      if ((*(uint *)(param_1 + 0xb) >> 0xf & 1) == 0) {
        cur->type = XML_XINCLUDE_START;
        elem = _xmlNewDocNode(cur->doc,cur->ns,cur->name,(xmlChar *)0x0);
        if (elem == (xmlNodePtr)0x0) {
          FUN_1008f6fe0(param_1,*(undefined8 *)(*(long *)(param_1[3] + (long)param_2 * 8) + 0x18),
                        0x649,"failed to build node\n",0);
          return 0xffffffff;
        }
        elem->type = XML_XINCLUDE_END;
        _xmlAddNextSibling(cur,elem);
        while (local_30 != (xmlNodePtr)0x0) {
          p_Var2 = local_30->next;
          _xmlAddPrevSibling(elem,local_30);
          local_30 = p_Var2;
        }
      }
      else {
        while (local_30 != (xmlNodePtr)0x0) {
          p_Var2 = local_30->next;
          _xmlAddPrevSibling(cur,local_30);
          local_30 = p_Var2;
        }
        _xmlUnlinkNode(cur);
        _xmlFreeNode(cur);
      }
      local_58 = 0;
    }
  }
  return local_58;
}

