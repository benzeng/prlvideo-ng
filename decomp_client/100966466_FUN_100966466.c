
/* WARNING: Removing unreachable block (ram,0x0001009668d6) */

undefined4 * FUN_100966466(long param_1,xmlNodePtr param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  void *pvVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *local_90;
  undefined4 *local_50;
  xmlChar *local_38;
  _xmlNode *local_30;
  _xmlNode *local_20;
  long local_10;
  
  local_50 = (undefined4 *)0x0;
  pxVar2 = _xmlGetProp(param_2,(xmlChar *)"type");
  if (pxVar2 == (xmlChar *)0x0) {
    FUN_100960ece(param_1,param_2,0x456,"data has no type\n",0,0);
    local_90 = (undefined4 *)0x0;
  }
  else {
    FUN_10096d1af(pxVar2);
    iVar1 = _xmlValidateNCName(pxVar2,0);
    if (iVar1 != 0) {
      FUN_100960ece(param_1,param_2,0x458,"data type \'%s\' is not an NCName\n",pxVar2,0);
    }
    local_38 = (xmlChar *)FUN_100965f00(param_1,param_2);
    if (local_38 == (xmlChar *)0x0) {
      local_38 = _xmlStrdup((xmlChar *)"http://relaxng.org/ns/structure/1.0");
    }
    local_90 = (undefined4 *)FUN_10096154d(param_1,param_2);
    if (local_90 == (undefined4 *)0x0) {
      (*(code *)_xmlFree)(pxVar2);
      local_90 = (undefined4 *)0x0;
    }
    else {
      *local_90 = 5;
      *(xmlChar **)(local_90 + 4) = pxVar2;
      *(xmlChar **)(local_90 + 6) = local_38;
      pvVar3 = _xmlHashLookup(DAT_1023136a0,local_38);
      if (pvVar3 == (void *)0x0) {
        FUN_100960ece(param_1,param_2,0x45c,"Use of unregistered type library \'%s\'\n",local_38,0);
        *(undefined8 *)(local_90 + 10) = 0;
      }
      else {
        *(void **)(local_90 + 10) = pvVar3;
        if (*(long *)((long)pvVar3 + 0x10) == 0) {
          FUN_100960ece(param_1,param_2,0x402,
                        "Internal error with type library \'%s\': no \'have\'\n",local_38,0);
        }
        else {
          iVar1 = (**(code **)((long)pvVar3 + 0x10))
                            (*(undefined8 *)((long)pvVar3 + 8),*(undefined8 *)(local_90 + 4));
          if (iVar1 == 1) {
            iVar1 = _xmlStrEqual(local_38,(xmlChar *)"http://www.w3.org/2001/XMLSchema-datatypes");
            if ((iVar1 != 0) &&
               ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_90 + 4),(xmlChar *)"IDREF"), iVar1 != 0 ||
                (iVar1 = _xmlStrEqual(*(xmlChar **)(local_90 + 4),(xmlChar *)"IDREFS"), iVar1 != 0))
               )) {
              *(undefined4 *)(param_1 + 0xe0) = 1;
            }
          }
          else {
            FUN_100960ece(param_1,param_2,0x457,
                          "Error type \'%s\' is not exported by type library \'%s\'\n",
                          *(undefined8 *)(local_90 + 4),local_38);
          }
        }
      }
      local_30 = param_2->children;
      while ((local_30 != (xmlNodePtr)0x0 &&
             (iVar1 = _xmlStrEqual(local_30->name,(xmlChar *)"param"), iVar1 != 0))) {
        iVar1 = _xmlStrEqual(local_38,(xmlChar *)"http://relaxng.org/ns/structure/1.0");
        if (iVar1 == 0) {
          puVar4 = (undefined4 *)FUN_10096154d(param_1,param_2);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 6;
            pxVar2 = _xmlGetProp(local_30,(xmlChar *)"name");
            *(xmlChar **)(puVar4 + 4) = pxVar2;
            if (*(long *)(puVar4 + 4) == 0) {
              FUN_100960ece(param_1,param_2,0x423,"param has no name\n",0,0);
            }
            pxVar2 = _xmlNodeGetContent(local_30);
            *(xmlChar **)(puVar4 + 8) = pxVar2;
            if (local_50 == (undefined4 *)0x0) {
              *(undefined4 **)(local_90 + 0x12) = puVar4;
              local_50 = puVar4;
            }
            else {
              *(undefined4 **)(local_50 + 0x10) = puVar4;
              local_50 = puVar4;
            }
          }
          local_30 = local_30->next;
        }
        else {
          FUN_100960ece(param_1,param_2,0x422,"Type library \'%s\' does not allow type parameters\n"
                        ,local_38,0);
          local_30 = local_30->next;
          while ((local_30 != (_xmlNode *)0x0 &&
                 (iVar1 = _xmlStrEqual(local_30->name,(xmlChar *)"param"), iVar1 != 0))) {
            local_30 = local_30->next;
          }
        }
      }
      if ((local_30 != (xmlNodePtr)0x0) &&
         (iVar1 = _xmlStrEqual(local_30->name,(xmlChar *)"except"), iVar1 != 0)) {
        local_10 = 0;
        puVar4 = (undefined4 *)FUN_10096154d(param_1,param_2);
        if (puVar4 == (undefined4 *)0x0) {
          return local_90;
        }
        *puVar4 = 2;
        local_20 = local_30->children;
        *(undefined4 **)(local_90 + 0xc) = puVar4;
        if (local_20 == (_xmlNode *)0x0) {
          FUN_100960ece(param_1,local_30,0x406,"except has no content\n",0,0);
        }
        for (; local_20 != (_xmlNode *)0x0; local_20 = local_20->next) {
          lVar5 = FUN_1009687cf(param_1,local_20);
          if (lVar5 != 0) {
            if (local_10 == 0) {
              *(long *)(puVar4 + 0xc) = lVar5;
              local_10 = lVar5;
            }
            else {
              *(long *)(local_10 + 0x40) = lVar5;
              local_10 = lVar5;
            }
          }
        }
        local_30 = local_30->next;
      }
      if (local_30 != (xmlNodePtr)0x0) {
        FUN_100960ece(param_1,local_30,0x3f1,"Element data has unexpected content %s\n",
                      local_30->name,0);
      }
    }
  }
  return local_90;
}

