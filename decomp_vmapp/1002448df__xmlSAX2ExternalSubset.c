
/* WARNING: Enum "enum_2039": Some values do not have unique names */

void _xmlSAX2ExternalSubset(void *ctx,xmlChar *name,xmlChar *ExternalID,xmlChar *SystemID)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  xmlCharEncoding xVar6;
  undefined8 uVar7;
  long local_18;
  
  if ((((ctx != (void *)0x0) && ((ExternalID != (xmlChar *)0x0 || (SystemID != (xmlChar *)0x0)))) &&
      ((*(int *)((long)ctx + 0x9c) != 0 || (*(int *)((long)ctx + 0x1b0) != 0)))) &&
     ((*(int *)((long)ctx + 0x18) != 0 && (*(long *)((long)ctx + 0x10) != 0)))) {
    local_18 = 0;
    if ((*(long *)ctx != 0) && (*(long *)(*(long *)ctx + 0x20) != 0)) {
      local_18 = (**(code **)(*(long *)ctx + 0x20))
                           (*(undefined8 *)((long)ctx + 8),ExternalID,SystemID);
    }
    if (local_18 != 0) {
      _xmlNewDtd(*(xmlDocPtr *)((long)ctx + 0x10),name,ExternalID,SystemID);
      uVar4 = *(undefined8 *)((long)ctx + 0x38);
      uVar1 = *(undefined4 *)((long)ctx + 0x40);
      uVar2 = *(undefined4 *)((long)ctx + 0x44);
      uVar5 = *(undefined8 *)((long)ctx + 0x48);
      uVar3 = *(undefined4 *)((long)ctx + 0x198);
      uVar7 = (*(code *)_xmlMalloc)(0x28);
      *(undefined8 *)((long)ctx + 0x48) = uVar7;
      if (*(long *)((long)ctx + 0x48) == 0) {
        FUN_1002440a9(ctx,"xmlSAX2ExternalSubset");
        *(undefined8 *)((long)ctx + 0x38) = uVar4;
        *(undefined4 *)((long)ctx + 0x40) = uVar1;
        *(undefined4 *)((long)ctx + 0x44) = uVar2;
        *(undefined8 *)((long)ctx + 0x48) = uVar5;
        *(undefined4 *)((long)ctx + 0x198) = uVar3;
      }
      else {
        *(undefined4 *)((long)ctx + 0x40) = 0;
        *(undefined4 *)((long)ctx + 0x44) = 5;
        *(undefined8 *)((long)ctx + 0x38) = 0;
        _xmlPushInput(ctx,local_18);
        if (3 < *(int *)(*(long *)((long)ctx + 0x38) + 0x30)) {
          xVar6 = _xmlDetectCharEncoding(*(uchar **)(*(long *)((long)ctx + 0x38) + 0x20),4);
          _xmlSwitchEncoding(ctx,xVar6);
        }
        if (*(long *)(local_18 + 8) == 0) {
          uVar7 = _xmlCanonicPath(SystemID);
          *(undefined8 *)(local_18 + 8) = uVar7;
        }
        *(undefined4 *)(local_18 + 0x34) = 1;
        *(undefined4 *)(local_18 + 0x38) = 1;
        *(undefined8 *)(local_18 + 0x18) = *(undefined8 *)(*(long *)((long)ctx + 0x38) + 0x20);
        *(undefined8 *)(local_18 + 0x20) = *(undefined8 *)(*(long *)((long)ctx + 0x38) + 0x20);
        *(undefined8 *)(local_18 + 0x48) = 0;
        _xmlParseExternalSubset(ctx,ExternalID,SystemID);
        while (1 < *(int *)((long)ctx + 0x40)) {
          _xmlPopInput(ctx);
        }
        _xmlFreeInputStream(*(undefined8 *)((long)ctx + 0x38));
        (*(code *)_xmlFree)(*(undefined8 *)((long)ctx + 0x48));
        *(undefined8 *)((long)ctx + 0x38) = uVar4;
        *(undefined4 *)((long)ctx + 0x40) = uVar1;
        *(undefined4 *)((long)ctx + 0x44) = uVar2;
        *(undefined8 *)((long)ctx + 0x48) = uVar5;
        *(undefined4 *)((long)ctx + 0x198) = uVar3;
      }
    }
  }
  return;
}

