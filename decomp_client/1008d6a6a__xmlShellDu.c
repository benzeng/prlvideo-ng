
int _xmlShellDu(xmlShellCtxtPtr ctxt,char *arg,xmlNodePtr tree,xmlNodePtr node2)

{
  int local_3c;
  xmlNodePtr local_18;
  int local_10;
  int local_c;
  
  local_10 = 0;
  if (ctxt == (xmlShellCtxtPtr)0x0) {
    local_3c = -1;
  }
  else {
    local_18 = tree;
    if (tree == (xmlNodePtr)0x0) {
      local_3c = -1;
    }
    else {
      while (local_18 != (xmlNodePtr)0x0) {
        if ((local_18->type == XML_DOCUMENT_NODE) || (local_18->type == XML_HTML_DOCUMENT_NODE)) {
          _fwrite("/\n",1,2,ctxt->output);
        }
        else if (local_18->type == XML_ELEMENT_NODE) {
          for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
            _fwrite("  ",1,2,ctxt->output);
          }
          _fprintf(ctxt->output,"%s\n",local_18->name);
        }
        if ((local_18->type == XML_DOCUMENT_NODE) || (local_18->type == XML_HTML_DOCUMENT_NODE)) {
          local_18 = local_18->children;
        }
        else if ((local_18->children == (_xmlNode *)0x0) || (local_18->type == XML_ENTITY_REF_NODE))
        {
          if ((local_18 == tree) || (local_18->next == (_xmlNode *)0x0)) {
            if (local_18 == tree) {
              local_18 = (xmlNodePtr)0x0;
            }
            else {
              do {
                if (local_18 == tree) goto LAB_1008d6c6d;
                if (local_18->parent != (_xmlNode *)0x0) {
                  local_18 = local_18->parent;
                  local_10 = local_10 + -1;
                }
                if ((local_18 != tree) && (local_18->next != (_xmlNode *)0x0)) {
                  local_18 = local_18->next;
                  goto LAB_1008d6c6d;
                }
                if (local_18->parent == (_xmlNode *)0x0) {
                  local_18 = (xmlNodePtr)0x0;
                  goto LAB_1008d6c6d;
                }
              } while (local_18 != tree);
              local_18 = (xmlNodePtr)0x0;
LAB_1008d6c6d:
              if (local_18 == tree) {
                local_18 = (xmlNodePtr)0x0;
              }
            }
          }
          else {
            local_18 = local_18->next;
          }
        }
        else {
          local_18 = local_18->children;
          local_10 = local_10 + 1;
        }
      }
      local_3c = 0;
    }
  }
  return local_3c;
}

