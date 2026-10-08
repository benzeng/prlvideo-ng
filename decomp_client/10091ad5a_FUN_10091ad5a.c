
long FUN_10091ad5a(long *param_1,xmlChar *param_2,uint *param_3,long param_4)

{
  uint uVar1;
  xmlChar *pxVar2;
  long local_30;
  int local_24;
  uint *local_20;
  uint *local_18;
  long local_10;
  
  local_30 = 0;
  local_24 = 1;
  if (*param_1 != 0) {
    (*(code *)_xmlFree)(*param_1);
    *param_1 = 0;
  }
  if (param_2 != (xmlChar *)0x0) {
    pxVar2 = _xmlStrdup(param_2);
    *param_1 = (long)pxVar2;
    goto LAB_10091b5c7;
  }
  if (param_3 == (uint *)0x0) {
    local_24 = 0;
    goto LAB_10091b5c7;
  }
  uVar1 = *param_3;
  if (uVar1 == 0xf) {
    local_20 = param_3;
    if (((param_3[0x1e] & 1) == 0) && (*(long *)(param_3 + 8) != 0)) {
      pxVar2 = _xmlStrdup(PTR_s_attribute_use_102279878);
      *param_1 = (long)pxVar2;
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)" \'");
      *param_1 = (long)pxVar2;
      pxVar2 = (xmlChar *)
               FUN_10091a69e(&local_30,*(undefined8 *)(local_20 + 10),*(undefined8 *)(local_20 + 8))
      ;
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
      *param_1 = (long)pxVar2;
      if (local_30 != 0) {
        (*(code *)_xmlFree)(local_30);
        local_30 = 0;
      }
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
      *param_1 = (long)pxVar2;
    }
    else {
      pxVar2 = _xmlStrdup(PTR_s_attribute_decl__102279870);
      *param_1 = (long)pxVar2;
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)" \'");
      *param_1 = (long)pxVar2;
      pxVar2 = (xmlChar *)
               FUN_10091a69e(&local_30,*(undefined8 *)(local_20 + 0x1c),
                             *(undefined8 *)(local_20 + 4));
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
      *param_1 = (long)pxVar2;
      if (local_30 != 0) {
        (*(code *)_xmlFree)(local_30);
        local_30 = 0;
      }
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
      *param_1 = (long)pxVar2;
    }
    goto LAB_10091b5c7;
  }
  if (uVar1 < 0x10) {
    if (uVar1 == 5) {
      if ((param_3[0x16] >> 3 & 1) == 0) {
        pxVar2 = _xmlStrdup((xmlChar *)"local ");
        *param_1 = (long)pxVar2;
      }
      else {
        pxVar2 = _xmlStrdup((xmlChar *)"");
        *param_1 = (long)pxVar2;
      }
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"complex type");
      *param_1 = (long)pxVar2;
      if ((param_3[0x16] >> 3 & 1) != 0) {
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)" \'");
        *param_1 = (long)pxVar2;
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,*(xmlChar **)(param_3 + 4));
        *param_1 = (long)pxVar2;
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
        *param_1 = (long)pxVar2;
      }
      goto LAB_10091b5c7;
    }
    if (uVar1 < 6) {
      if (uVar1 == 2) {
LAB_10091b4a1:
        pxVar2 = (xmlChar *)FUN_10091aad8(param_3[10]);
        pxVar2 = _xmlStrdup(pxVar2);
        *param_1 = (long)pxVar2;
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)" wildcard");
        *param_1 = (long)pxVar2;
        goto LAB_10091b5c7;
      }
      if (uVar1 == 4) {
        if ((param_3[0x16] >> 3 & 1) == 0) {
          pxVar2 = _xmlStrdup((xmlChar *)"local ");
          *param_1 = (long)pxVar2;
        }
        else {
          pxVar2 = _xmlStrdup((xmlChar *)"");
          *param_1 = (long)pxVar2;
        }
        if ((param_3[0x16] >> 8 & 1) == 0) {
          if ((param_3[0x16] >> 6 & 1) == 0) {
            if ((param_3[0x16] >> 7 & 1) == 0) {
              pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"simple type");
              *param_1 = (long)pxVar2;
            }
            else {
              pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"union type");
              *param_1 = (long)pxVar2;
            }
          }
          else {
            pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"list type");
            *param_1 = (long)pxVar2;
          }
        }
        else {
          pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"atomic type");
          *param_1 = (long)pxVar2;
        }
        if ((param_3[0x16] >> 3 & 1) != 0) {
          pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)" \'");
          *param_1 = (long)pxVar2;
          pxVar2 = _xmlStrcat((xmlChar *)*param_1,*(xmlChar **)(param_3 + 4));
          *param_1 = (long)pxVar2;
          pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
          *param_1 = (long)pxVar2;
        }
        goto LAB_10091b5c7;
      }
      if (uVar1 == 1) {
        if ((param_3[0x16] >> 8 & 1) == 0) {
          if ((param_3[0x16] >> 6 & 1) == 0) {
            if ((param_3[0x16] >> 7 & 1) == 0) {
              pxVar2 = _xmlStrdup((xmlChar *)"simple type \'xs:");
              *param_1 = (long)pxVar2;
            }
            else {
              pxVar2 = _xmlStrdup((xmlChar *)"union type \'xs:");
              *param_1 = (long)pxVar2;
            }
          }
          else {
            pxVar2 = _xmlStrdup((xmlChar *)"list type \'xs:");
            *param_1 = (long)pxVar2;
          }
        }
        else {
          pxVar2 = _xmlStrdup((xmlChar *)"atomic type \'xs:");
          *param_1 = (long)pxVar2;
        }
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,*(xmlChar **)(param_3 + 4));
        *param_1 = (long)pxVar2;
        pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
        *param_1 = (long)pxVar2;
        goto LAB_10091b5c7;
      }
    }
    else {
      if (uVar1 < 9) goto LAB_10091b5a1;
      if (uVar1 == 0xe) {
        local_18 = param_3;
        if (((param_3[0x16] >> 1 & 1) != 0) || (*(long *)(param_3 + 8) == 0)) {
          pxVar2 = _xmlStrdup(PTR_s_element_decl__102279868);
          *param_1 = (long)pxVar2;
          pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)" \'");
          *param_1 = (long)pxVar2;
          pxVar2 = (xmlChar *)
                   FUN_10091a69e(&local_30,*(undefined8 *)(local_18 + 0x18),
                                 *(undefined8 *)(local_18 + 4));
          pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
          *param_1 = (long)pxVar2;
          pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
          *param_1 = (long)pxVar2;
        }
        goto LAB_10091b5c7;
      }
    }
  }
  else if (uVar1 < 0x19) {
    if (0x15 < uVar1) {
      if (*param_3 == 0x16) {
        pxVar2 = _xmlStrdup((xmlChar *)"unique \'");
        *param_1 = (long)pxVar2;
      }
      else if (*param_3 == 0x17) {
        pxVar2 = _xmlStrdup((xmlChar *)"key \'");
        *param_1 = (long)pxVar2;
      }
      else {
        pxVar2 = _xmlStrdup((xmlChar *)"keyRef \'");
        *param_1 = (long)pxVar2;
      }
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,*(xmlChar **)(param_3 + 8));
      *param_1 = (long)pxVar2;
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
      *param_1 = (long)pxVar2;
      goto LAB_10091b5c7;
    }
    if (uVar1 == 0x12) {
      pxVar2 = _xmlStrdup((xmlChar *)"notation");
      *param_1 = (long)pxVar2;
      goto LAB_10091b5c7;
    }
    if (uVar1 == 0x15) goto LAB_10091b4a1;
    if (uVar1 == 0x11) {
      pxVar2 = _xmlStrdup(PTR_s_model_group_102279880);
      *param_1 = (long)pxVar2;
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)" \'");
      *param_1 = (long)pxVar2;
      pxVar2 = (xmlChar *)
               FUN_10091a69e(&local_30,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 8));
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
      *param_1 = (long)pxVar2;
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
      *param_1 = (long)pxVar2;
      if (local_30 != 0) {
        (*(code *)_xmlFree)(local_30);
        local_30 = 0;
      }
      goto LAB_10091b5c7;
    }
  }
  else {
    if (uVar1 == 0x19) {
LAB_10091b5a1:
      pxVar2 = (xmlChar *)FUN_10091a33c(*param_3);
      pxVar2 = _xmlStrdup(pxVar2);
      *param_1 = (long)pxVar2;
      goto LAB_10091b5c7;
    }
    if (uVar1 - 1000 < 0xc) {
      pxVar2 = _xmlStrdup((xmlChar *)"facet \'");
      *param_1 = (long)pxVar2;
      pxVar2 = (xmlChar *)FUN_10093c621(*param_3);
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
      *param_1 = (long)pxVar2;
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
      *param_1 = (long)pxVar2;
      goto LAB_10091b5c7;
    }
  }
  local_24 = 0;
LAB_10091b5c7:
  if ((local_24 == 0) && (param_4 != 0)) {
    local_10 = param_4;
    if (*(int *)(param_4 + 8) == 2) {
      local_10 = *(long *)(param_4 + 0x28);
    }
    pxVar2 = _xmlStrdup((xmlChar *)"Element \'");
    *param_1 = (long)pxVar2;
    if (*(long *)(local_10 + 0x48) == 0) {
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,*(xmlChar **)(local_10 + 0x10));
      *param_1 = (long)pxVar2;
    }
    else {
      pxVar2 = (xmlChar *)
               FUN_10091a69e(&local_30,*(undefined8 *)(*(long *)(local_10 + 0x48) + 0x10),
                             *(undefined8 *)(local_10 + 0x10));
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
      *param_1 = (long)pxVar2;
      if (local_30 != 0) {
        (*(code *)_xmlFree)(local_30);
        local_30 = 0;
      }
    }
    pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
    *param_1 = (long)pxVar2;
  }
  if ((param_4 != 0) && (*(int *)(param_4 + 8) == 2)) {
    pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)", attribute \'");
    *param_1 = (long)pxVar2;
    if (*(long *)(param_4 + 0x48) == 0) {
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,*(xmlChar **)(param_4 + 0x10));
      *param_1 = (long)pxVar2;
    }
    else {
      pxVar2 = (xmlChar *)
               FUN_10091a69e(&local_30,*(undefined8 *)(*(long *)(param_4 + 0x48) + 0x10),
                             *(undefined8 *)(param_4 + 0x10));
      pxVar2 = _xmlStrcat((xmlChar *)*param_1,pxVar2);
      *param_1 = (long)pxVar2;
      if (local_30 != 0) {
        (*(code *)_xmlFree)(local_30);
        local_30 = 0;
      }
    }
    pxVar2 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
    *param_1 = (long)pxVar2;
  }
  if (local_30 != 0) {
    (*(code *)_xmlFree)(local_30);
  }
  return *param_1;
}

