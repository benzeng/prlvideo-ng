
long FUN_100147169(undefined8 param_1,long param_2)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long local_50;
  
  if (param_2 == 0) {
    FUN_100143bf8(param_1,1,"xmlNewBlanksWrapperInputStream entity\n");
    local_50 = 0;
  }
  else {
    piVar4 = ___xmlParserDebugEntities();
    if (*piVar4 != 0) {
      ppxVar5 = ___xmlGenericError();
      pxVar1 = *ppxVar5;
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      ppvVar6 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar6,"new blanks wrapper for entity: %s\n",uVar2);
    }
    local_50 = _xmlNewInputStream(param_1);
    if (local_50 == 0) {
      local_50 = 0;
    }
    else {
      iVar3 = _xmlStrlen(*(xmlChar **)(param_2 + 0x10));
      lVar7 = (long)(iVar3 + 5);
      puVar8 = (undefined1 *)(*(code *)_xmlMallocAtomic)(lVar7);
      if (puVar8 == (undefined1 *)0x0) {
        _xmlErrMemory(param_1,0);
        local_50 = 0;
      }
      else {
        *puVar8 = 0x20;
        puVar8[1] = 0x25;
        puVar8[lVar7 + -3] = 0x3b;
        puVar8[lVar7 + -2] = 0x20;
        puVar8[lVar7 + -1] = 0;
        puVar10 = *(undefined1 **)(param_2 + 0x10);
        puVar11 = puVar8 + 2;
        for (lVar9 = lVar7 + -5; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        *(code **)(local_50 + 0x48) = FUN_10014714b;
        *(undefined1 **)(local_50 + 0x18) = puVar8;
        *(undefined1 **)(local_50 + 0x20) = puVar8;
        *(int *)(local_50 + 0x30) = iVar3 + 5;
        *(undefined1 **)(local_50 + 0x28) = puVar8 + lVar7;
      }
    }
  }
  return local_50;
}

