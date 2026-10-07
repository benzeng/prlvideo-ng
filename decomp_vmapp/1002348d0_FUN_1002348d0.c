
undefined4 FUN_1002348d0(undefined8 param_1,long param_2)

{
  int iVar1;
  xmlNodePtr pxVar2;
  undefined4 local_3c;
  undefined4 local_10;
  
  local_10 = 0;
  if (*(long *)(param_2 + 0x68) == 0) {
    FUN_10022d5a6(param_1,param_2,0x412,"Include node has no data\n",0,0);
    local_3c = 0xffffffff;
  }
  else {
    pxVar2 = _xmlDocGetRootElement(*(xmlDocPtr *)(*(long *)(param_2 + 0x68) + 0x10));
    if (pxVar2 == (xmlNodePtr)0x0) {
      FUN_10022d5a6(param_1,param_2,0x3fe,"Include document is empty\n",0,0);
      local_3c = 0xffffffff;
    }
    else {
      iVar1 = _xmlStrEqual(pxVar2->name,(xmlChar *)"grammar");
      if (iVar1 == 0) {
        FUN_10022d5a6(param_1,param_2,0x40e,"Include document root is not a grammar\n",0,0);
        local_3c = 0xffffffff;
      }
      else {
        if (pxVar2->children != (_xmlNode *)0x0) {
          iVar1 = FUN_1002372c9(param_1,pxVar2->children);
          if (iVar1 != 0) {
            local_10 = 0xffffffff;
          }
        }
        if (*(long *)(param_2 + 0x18) != 0) {
          iVar1 = FUN_1002372c9(param_1,*(undefined8 *)(param_2 + 0x18));
          if (iVar1 != 0) {
            local_10 = 0xffffffff;
          }
        }
        local_3c = local_10;
      }
    }
  }
  return local_3c;
}

