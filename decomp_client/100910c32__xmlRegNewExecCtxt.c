
xmlRegExecCtxtPtr _xmlRegNewExecCtxt(xmlRegexpPtr comp,xmlRegExecCallbacks callback,void *data)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  xmlRegExecCtxtPtr local_38;
  
  if (comp == (xmlRegexpPtr)0x0) {
    local_38 = (xmlRegExecCtxtPtr)0x0;
  }
  else if ((*(long *)(comp + 0x40) == 0) && (*(long *)(comp + 0x10) == 0)) {
    local_38 = (xmlRegExecCtxtPtr)0x0;
  }
  else {
    local_38 = (xmlRegExecCtxtPtr)(*(code *)_xmlMalloc)(0x90);
    if (local_38 == (xmlRegExecCtxtPtr)0x0) {
      FUN_10090b61c(0,"creating execution context");
      local_38 = (xmlRegExecCtxtPtr)0x0;
    }
    else {
      _memset(local_38,0,0x90);
      *(undefined8 *)(local_38 + 0x60) = 0;
      *(undefined4 *)(local_38 + 0x50) = 0;
      *(undefined4 *)(local_38 + 4) = 1;
      *(undefined4 *)(local_38 + 0x30) = 0;
      *(undefined4 *)(local_38 + 0x34) = 0;
      *(undefined8 *)(local_38 + 0x38) = 0;
      *(undefined4 *)local_38 = 0;
      *(xmlRegexpPtr *)(local_38 + 8) = comp;
      if (*(long *)(comp + 0x40) == 0) {
        *(undefined8 *)(local_38 + 0x20) = **(undefined8 **)(comp + 0x10);
      }
      *(undefined4 *)(local_38 + 0x28) = 0;
      *(undefined4 *)(local_38 + 0x2c) = 0;
      *(xmlRegExecCallbacks *)(local_38 + 0x10) = callback;
      *(void **)(local_38 + 0x18) = data;
      if (*(int *)(comp + 0x28) < 1) {
        *(undefined8 *)(local_38 + 0x40) = 0;
        *(undefined8 *)(local_38 + 0x88) = 0;
      }
      else {
        uVar1 = (*(code *)_xmlMalloc)((long)*(int *)(comp + 0x28) * 8);
        *(undefined8 *)(local_38 + 0x40) = uVar1;
        if (*(long *)(local_38 + 0x40) == 0) {
          FUN_10090b61c(0,"creating execution context");
          (*(code *)_xmlFree)(local_38);
          return (xmlRegExecCtxtPtr)0x0;
        }
        puVar3 = *(undefined1 **)(local_38 + 0x40);
        for (lVar2 = (long)*(int *)(comp + 0x28) * 8; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        *(long *)(local_38 + 0x88) = *(long *)(local_38 + 0x40) + (long)*(int *)(comp + 0x28) * 4;
      }
      *(undefined4 *)(local_38 + 0x48) = 0;
      *(undefined4 *)(local_38 + 0x4c) = 0;
      *(undefined8 *)(local_38 + 0x68) = 0;
      *(undefined4 *)(local_38 + 0x70) = 0xffffffff;
      *(undefined8 *)(local_38 + 0x80) = 0;
    }
  }
  return local_38;
}

