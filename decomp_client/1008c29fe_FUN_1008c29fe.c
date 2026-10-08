
void FUN_1008c29fe(long param_1,long param_2,xmlChar *param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  xmlAttrPtr pxVar5;
  byte *local_38;
  byte *local_18;
  
  if ((param_1 != 0) && ((*(long *)(param_1 + 0x10) != 0 || (*(long *)(param_1 + 0x18) != 0)))) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
      pbVar4 = _xmlStrdup(param_3);
      local_38 = pbVar4;
      if (pbVar4 == (byte *)0x0) {
        *(undefined4 *)(param_2 + 0x40) = 0;
      }
      else {
        while (pbVar3 = local_38, *local_38 != 0) {
          for (; ((*local_38 != 0 && (*local_38 != 0x20)) &&
                 (((*local_38 < 9 || (10 < *local_38)) && (*local_38 != 0xd))));
              local_38 = local_38 + 1) {
          }
          bVar1 = *local_38;
          *local_38 = 0;
          pxVar5 = _xmlGetID(*(xmlDocPtr *)(param_2 + 0x38),pbVar3);
          if (pxVar5 == (xmlAttrPtr)0x0) {
            FUN_1008b776e(param_2,0,0x218,"attribute %s line %d references an unknown ID \"%s\"\n",
                          *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),pbVar3);
            *(undefined4 *)(param_2 + 0x40) = 0;
          }
          if (bVar1 == 0) break;
          *local_38 = bVar1;
          for (; ((*local_38 == 0x20 || ((8 < *local_38 && (*local_38 < 0xb)))) ||
                 (*local_38 == 0xd)); local_38 = local_38 + 1) {
          }
        }
        (*(code *)_xmlFree)(pbVar4);
      }
    }
    else if (*(int *)(lVar2 + 0x50) == 3) {
      pxVar5 = _xmlGetID(*(xmlDocPtr *)(param_2 + 0x38),param_3);
      if (pxVar5 == (xmlAttrPtr)0x0) {
        FUN_1008b763a(param_2,*(undefined8 *)(lVar2 + 0x28),0x218,
                      "IDREF attribute %s references an unknown ID \"%s\"\n",
                      *(undefined8 *)(lVar2 + 0x10),param_3,0);
        *(undefined4 *)(param_2 + 0x40) = 0;
      }
    }
    else if (*(int *)(lVar2 + 0x50) == 4) {
      pbVar4 = _xmlStrdup(param_3);
      local_18 = pbVar4;
      if (pbVar4 == (byte *)0x0) {
        FUN_1008b7324(param_2,"IDREFS split");
        *(undefined4 *)(param_2 + 0x40) = 0;
      }
      else {
        while (pbVar3 = local_18, *local_18 != 0) {
          for (; (((*local_18 != 0 && (*local_18 != 0x20)) && ((*local_18 < 9 || (10 < *local_18))))
                 && (*local_18 != 0xd)); local_18 = local_18 + 1) {
          }
          bVar1 = *local_18;
          *local_18 = 0;
          pxVar5 = _xmlGetID(*(xmlDocPtr *)(param_2 + 0x38),pbVar3);
          if (pxVar5 == (xmlAttrPtr)0x0) {
            FUN_1008b763a(param_2,*(undefined8 *)(lVar2 + 0x28),0x218,
                          "IDREFS attribute %s references an unknown ID \"%s\"\n",
                          *(undefined8 *)(lVar2 + 0x10),pbVar3,0);
            *(undefined4 *)(param_2 + 0x40) = 0;
          }
          if (bVar1 == 0) break;
          *local_18 = bVar1;
          for (; (*local_18 == 0x20 ||
                 (((8 < *local_18 && (*local_18 < 0xb)) || (*local_18 == 0xd))));
              local_18 = local_18 + 1) {
          }
        }
        (*(code *)_xmlFree)(pbVar4);
      }
    }
  }
  return;
}

