
void FUN_100904a54(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long local_10;
  
  for (local_10 = param_1; local_10 != 0; local_10 = *(long *)(local_10 + 0x30)) {
    if ((*(long *)(local_10 + 0x48) != 0) && (*(long *)(*(long *)(local_10 + 0x48) + 0x10) != 0)) {
      iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_10 + 0x48) + 0x10),
                           (xmlChar *)"urn:oasis:names:tc:entity:xmlns:xml:catalog");
      if (iVar1 != 0) {
        FUN_1009044d2(local_10,param_2,param_3,param_4);
      }
    }
  }
  return;
}

