
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void FUN_10021197d(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,long param_6,int param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  xmlChar *pxVar4;
  int local_18;
  int local_14;
  
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  if ((*(int *)(param_1 + 0x120) == -1) || (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0x120))) {
    iVar2 = FUN_10020fd64(param_1);
    if (iVar2 == -1) {
      FUN_1001e8d2a(param_1,"xmlSchemaSAXHandleStartElementNs",
                    "calling xmlSchemaValidatorPushElem()");
    }
    else {
      lVar1 = *(long *)(param_1 + 0xb8);
      iVar2 = _xmlSAX2GetLineNumber(*(void **)(param_1 + 0x50));
      *(int *)(lVar1 + 0x10) = iVar2;
      *(undefined8 *)(lVar1 + 0x18) = param_2;
      *(undefined8 *)(lVar1 + 0x20) = param_4;
      *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) | 0x20;
      if (param_5 != 0) {
        local_14 = 0;
        for (local_18 = 0; local_18 < param_5; local_18 = local_18 + 1) {
          if (*(long *)(lVar1 + 0x78) == 0) {
            uVar3 = (*(code *)_xmlMalloc)(0x50);
            *(undefined8 *)(lVar1 + 0x78) = uVar3;
            if (*(long *)(lVar1 + 0x78) == 0) {
              FUN_1001e835c(param_1,"allocating namespace bindings for SAX validation",0);
              goto LAB_100211d81;
            }
            *(undefined4 *)(lVar1 + 0x80) = 0;
            *(undefined4 *)(lVar1 + 0x84) = 5;
          }
          else if (*(int *)(lVar1 + 0x84) <= *(int *)(lVar1 + 0x80)) {
            *(int *)(lVar1 + 0x84) = *(int *)(lVar1 + 0x84) * 2;
            uVar3 = (*(code *)_xmlRealloc)
                              (*(undefined8 *)(lVar1 + 0x78),(long)*(int *)(lVar1 + 0x84) << 4);
            *(undefined8 *)(lVar1 + 0x78) = uVar3;
            if (*(long *)(lVar1 + 0x78) == 0) {
              FUN_1001e835c(param_1,"re-allocating namespace bindings for SAX validation",0);
              goto LAB_100211d81;
            }
          }
          *(undefined8 *)(*(long *)(lVar1 + 0x78) + (long)*(int *)(lVar1 + 0x80) * 0x10) =
               *(undefined8 *)((long)local_14 * 8 + param_6);
          if (**(char **)((long)local_14 * 8 + param_6 + 8) == '\0') {
            *(undefined8 *)(*(long *)(lVar1 + 0x78) + (long)*(int *)(lVar1 + 0x80) * 0x10 + 8) = 0;
          }
          else {
            *(undefined8 *)(*(long *)(lVar1 + 0x78) + (long)*(int *)(lVar1 + 0x80) * 0x10 + 8) =
                 *(undefined8 *)((long)local_14 * 8 + param_6 + 8);
          }
          *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
          local_14 = local_14 + 2;
        }
      }
      if (param_7 != 0) {
        local_14 = 0;
        for (local_18 = 0; local_18 < param_7; local_18 = local_18 + 1) {
          pxVar4 = _xmlStrndup(*(xmlChar **)((long)local_14 * 8 + param_9 + 0x18),
                               (int)*(undefined8 *)((long)local_14 * 8 + param_9 + 0x20) -
                               (int)*(undefined8 *)((long)local_14 * 8 + param_9 + 0x18));
          iVar2 = FUN_10020c548(param_1,0,*(undefined4 *)(lVar1 + 0x10),
                                *(undefined8 *)((long)local_14 * 8 + param_9),
                                *(undefined8 *)((long)local_14 * 8 + param_9 + 0x10),0,pxVar4,1);
          if (iVar2 == -1) {
            FUN_1001e8d2a(param_1,"xmlSchemaSAXHandleStartElementNs",
                          "calling xmlSchemaValidatorPushAttribute()");
            goto LAB_100211d81;
          }
          local_14 = local_14 + 5;
        }
      }
      iVar2 = FUN_100211283(param_1);
      if (iVar2 == 0) {
        return;
      }
      if (iVar2 != -1) {
        return;
      }
      FUN_1001e8d2a(param_1,"xmlSchemaSAXHandleStartElementNs","calling xmlSchemaValidateElem()");
    }
LAB_100211d81:
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    _xmlStopParser(*(xmlParserCtxtPtr *)(param_1 + 0x50));
  }
  return;
}

