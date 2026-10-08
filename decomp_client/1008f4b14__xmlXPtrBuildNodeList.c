
xmlNodePtr _xmlXPtrBuildNodeList(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  xmlNodePtr pxVar3;
  ulong uVar4;
  xmlNodePtr local_50;
  xmlNodePtr local_30;
  xmlNodePtr local_28;
  int local_1c;
  
  local_30 = (xmlNodePtr)0x0;
  local_28 = (xmlNodePtr)0x0;
  if (param_1 == (uint *)0x0) {
    local_50 = (xmlNodePtr)0x0;
  }
  else {
    uVar1 = *param_1;
    if (uVar1 == 5) {
      local_50 = _xmlCopyNode(*(xmlNodePtr *)(param_1 + 10),0);
    }
    else {
      if (uVar1 < 6) {
        if (uVar1 == 1) {
          piVar2 = *(int **)(param_1 + 2);
          if (piVar2 == (int *)0x0) {
            return (xmlNodePtr)0x0;
          }
          for (local_1c = 0; local_1c < *piVar2; local_1c = local_1c + 1) {
            if ((*(long *)(*(long *)(piVar2 + 2) + (long)local_1c * 8) != 0) &&
               (((uVar1 = *(uint *)(*(long *)(*(long *)(piVar2 + 2) + (long)local_1c * 8) + 8),
                 0x15 < uVar1 || (uVar4 = 1L << ((byte)uVar1 & 0x3f), (uVar4 & 0x3823fa) != 0)) ||
                ((uVar4 & 0x7dc04) == 0)))) {
              if (local_28 == (xmlNodePtr)0x0) {
                local_30 = _xmlCopyNode(*(xmlNodePtr *)(*(long *)(piVar2 + 2) + (long)local_1c * 8),
                                        1);
                local_28 = local_30;
              }
              else {
                pxVar3 = _xmlCopyNode(*(xmlNodePtr *)(*(long *)(piVar2 + 2) + (long)local_1c * 8),1)
                ;
                _xmlAddNextSibling(local_28,pxVar3);
                if (local_28->next != (_xmlNode *)0x0) {
                  local_28 = local_28->next;
                }
              }
            }
          }
        }
      }
      else {
        if (uVar1 == 6) {
          pxVar3 = (xmlNodePtr)FUN_1008f45c6(param_1);
          return pxVar3;
        }
        if (uVar1 == 7) {
          piVar2 = *(int **)(param_1 + 10);
          if (piVar2 == (int *)0x0) {
            return (xmlNodePtr)0x0;
          }
          for (local_1c = 0; local_1c < *piVar2; local_1c = local_1c + 1) {
            if (local_28 == (xmlNodePtr)0x0) {
              local_30 = (xmlNodePtr)
                         _xmlXPtrBuildNodeList
                                   (*(undefined8 *)(*(long *)(piVar2 + 2) + (long)local_1c * 8));
              local_28 = local_30;
            }
            else {
              pxVar3 = (xmlNodePtr)
                       _xmlXPtrBuildNodeList
                                 (*(undefined8 *)(*(long *)(piVar2 + 2) + (long)local_1c * 8));
              _xmlAddNextSibling(local_28,pxVar3);
            }
            if (local_28 != (xmlNodePtr)0x0) {
              for (; local_28->next != (_xmlNode *)0x0; local_28 = local_28->next) {
              }
            }
          }
        }
      }
      local_50 = local_30;
    }
  }
  return local_50;
}

