
undefined4 FUN_1008cbf2c(undefined8 *param_1)

{
  xmlDictPtr pxVar1;
  void *pvVar2;
  undefined8 uVar3;
  xmlSAXHandlerV1 *pxVar4;
  int *piVar5;
  undefined4 local_24;
  
  if (param_1 == (undefined8 *)0x0) {
    local_24 = 0xffffffff;
  }
  else {
    _memset(param_1,0,0x2b8);
    pxVar1 = _xmlDictCreate();
    param_1[0x39] = pxVar1;
    if (param_1[0x39] == 0) {
      FUN_1008c3d3c(0,"htmlInitParserCtxt: out of memory\n");
      local_24 = 0xffffffff;
    }
    else {
      pvVar2 = (void *)(*(code *)_xmlMalloc)(0x100);
      if (pvVar2 == (void *)0x0) {
        FUN_1008c3d3c(0,"htmlInitParserCtxt: out of memory\n");
        local_24 = 0xffffffff;
      }
      else {
        _memset(pvVar2,0,0x100);
        uVar3 = (*(code *)_xmlMalloc)(0x28);
        param_1[9] = uVar3;
        if (param_1[9] == 0) {
          FUN_1008c3d3c(0,"htmlInitParserCtxt: out of memory\n");
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)((long)param_1 + 0x44) = 0;
          param_1[7] = 0;
          local_24 = 0xffffffff;
        }
        else {
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)((long)param_1 + 0x44) = 5;
          param_1[7] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          *(undefined4 *)(param_1 + 6) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x22) = 0;
          uVar3 = (*(code *)_xmlMalloc)(0x50);
          param_1[0xc] = uVar3;
          if (param_1[0xc] == 0) {
            FUN_1008c3d3c(0,"htmlInitParserCtxt: out of memory\n");
            *(undefined4 *)(param_1 + 0xb) = 0;
            *(undefined4 *)((long)param_1 + 0x5c) = 0;
            param_1[10] = 0;
            *(undefined4 *)(param_1 + 8) = 0;
            *(undefined4 *)((long)param_1 + 0x44) = 0;
            param_1[7] = 0;
            local_24 = 0xffffffff;
          }
          else {
            *(undefined4 *)(param_1 + 0xb) = 0;
            *(undefined4 *)((long)param_1 + 0x5c) = 10;
            param_1[10] = 0;
            uVar3 = (*(code *)_xmlMalloc)(0x50);
            param_1[0x26] = uVar3;
            if (param_1[0x26] == 0) {
              FUN_1008c3d3c(0,"htmlInitParserCtxt: out of memory\n");
              *(undefined4 *)(param_1 + 0x25) = 0;
              *(undefined4 *)((long)param_1 + 300) = 10;
              param_1[0x24] = 0;
              *(undefined4 *)(param_1 + 0xb) = 0;
              *(undefined4 *)((long)param_1 + 0x5c) = 0;
              param_1[10] = 0;
              *(undefined4 *)(param_1 + 8) = 0;
              *(undefined4 *)((long)param_1 + 0x44) = 0;
              param_1[7] = 0;
              local_24 = 0xffffffff;
            }
            else {
              *(undefined4 *)(param_1 + 0x25) = 0;
              *(undefined4 *)((long)param_1 + 300) = 10;
              param_1[0x24] = 0;
              if (pvVar2 == (void *)0x0) {
                pxVar4 = ___htmlDefaultSAXHandler();
                *param_1 = pxVar4;
              }
              else {
                *param_1 = pvVar2;
                pxVar4 = ___htmlDefaultSAXHandler();
                _memcpy(pvVar2,pxVar4,0xe0);
              }
              param_1[1] = param_1;
              param_1[2] = 0;
              *(undefined4 *)(param_1 + 3) = 1;
              *(undefined4 *)((long)param_1 + 0x1c) = 0;
              piVar5 = ___xmlLineNumbersDefaultValue();
              *(int *)((long)param_1 + 0x1b4) = *piVar5;
              *(undefined4 *)((long)param_1 + 0x34) = 1;
              *(undefined4 *)(param_1 + 0x1a) = 0xabcd1234;
              param_1[0x14] = param_1;
              param_1[0x15] = _xmlParserValidityError;
              param_1[0x16] = _xmlParserValidityWarning;
              *(undefined4 *)(param_1 + 0xd) = 0;
              *(undefined4 *)((long)param_1 + 0x9c) = 0;
              param_1[0x27] = 0;
              param_1[0x28] = 0;
              param_1[0x37] = 0;
              _xmlInitNodeInfoSeq((xmlParserNodeInfoSeqPtr)(param_1 + 0xe));
              local_24 = 0;
            }
          }
        }
      }
    }
  }
  return local_24;
}

