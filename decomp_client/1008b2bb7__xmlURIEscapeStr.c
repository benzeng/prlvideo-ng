
xmlChar * _xmlURIEscapeStr(byte *param_1,xmlChar *param_2)

{
  xmlGenericErrorFunc pxVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  xmlChar *pxVar7;
  xmlChar *local_60;
  xmlChar *local_40;
  byte *local_30;
  int local_24;
  uint local_20;
  
  if (param_1 == (byte *)0x0) {
    local_60 = (xmlChar *)0x0;
  }
  else if (*param_1 == 0) {
    local_60 = _xmlStrdup(param_1);
  }
  else {
    local_24 = _xmlStrlen(param_1);
    if (local_24 == 0) {
      local_60 = (xmlChar *)0x0;
    }
    else {
      local_24 = local_24 + 0x14;
      local_40 = (xmlChar *)(*(code *)_xmlMallocAtomic)(local_24);
      if (local_40 != (xmlChar *)0x0) {
        local_20 = 0;
        local_30 = param_1;
        do {
          uVar2 = local_20;
          if (*local_30 == 0) {
            local_40[local_20] = '\0';
            return local_40;
          }
          if (local_24 - local_20 < 4) {
            local_24 = local_24 + 0x14;
            local_40 = (xmlChar *)(*(code *)_xmlRealloc)(local_40,local_24);
            if (local_40 == (xmlChar *)0x0) {
              ppxVar5 = ___xmlGenericError();
              pxVar1 = *ppxVar5;
              ppvVar6 = ___xmlGenericErrorContext();
              (*pxVar1)(*ppvVar6,"xmlURIEscapeStr: out of memory\n");
              return (xmlChar *)0x0;
            }
          }
          bVar4 = *local_30;
          if (((((bVar4 == 0x40) || ((0x60 < bVar4 && (bVar4 < 0x7b)))) ||
               ((0x40 < bVar4 && (bVar4 < 0x5b)))) ||
              ((((0x2f < bVar4 && (bVar4 < 0x3a)) || (bVar4 == 0x2d)) ||
               ((((bVar4 == 0x5f || (bVar4 == 0x2e)) ||
                 ((bVar4 == 0x21 || ((bVar4 == 0x7e || (bVar4 == 0x2a)))))) || (bVar4 == 0x27))))))
             || (((bVar4 == 0x28 || (bVar4 == 0x29)) ||
                 (pxVar7 = _xmlStrchr(param_2,bVar4), pxVar7 != (xmlChar *)0x0)))) {
            local_40[local_20] = *local_30;
            local_30 = local_30 + 1;
            local_20 = local_20 + 1;
          }
          else {
            local_40[local_20] = '%';
            bVar3 = bVar4 >> 4;
            if (bVar3 < 10) {
              local_40[local_20 + 1] = bVar3 + 0x30;
            }
            else {
              local_40[local_20 + 1] = bVar3 + 0x37;
            }
            local_20 = local_20 + 2;
            bVar4 = bVar4 & 0xf;
            if (bVar4 < 10) {
              local_40[local_20] = bVar4 + 0x30;
            }
            else {
              local_40[local_20] = bVar4 + 0x37;
            }
            local_20 = uVar2 + 3;
            local_30 = local_30 + 1;
          }
        } while( true );
      }
      ppxVar5 = ___xmlGenericError();
      pxVar1 = *ppxVar5;
      ppvVar6 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar6,"xmlURIEscapeStr: out of memory\n");
      local_60 = (xmlChar *)0x0;
    }
  }
  return local_60;
}

