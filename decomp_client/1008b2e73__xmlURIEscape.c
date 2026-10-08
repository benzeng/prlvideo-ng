
xmlChar * _xmlURIEscape(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlChar *local_58;
  xmlChar local_48 [16];
  xmlChar *local_38;
  xmlChar *local_30;
  long *local_28;
  int local_1c;
  
  local_30 = (xmlChar *)0x0;
  if (param_1 == 0) {
    local_58 = (xmlChar *)0x0;
  }
  else {
    local_28 = (long *)_xmlCreateURI();
    if (local_28 != (long *)0x0) {
      *(undefined4 *)(local_28 + 9) = 1;
      local_1c = _xmlParseURIReference(local_28,param_1);
      if (local_1c != 0) {
        _xmlFreeURI(local_28);
        return (xmlChar *)0x0;
      }
    }
    if (local_28 == (long *)0x0) {
      local_58 = (xmlChar *)0x0;
    }
    else {
      local_38 = (xmlChar *)0x0;
      if (*local_28 != 0) {
        local_30 = (xmlChar *)_xmlURIEscapeStr(*local_28,"+-.");
        if (local_30 == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"xmlURIEscape: out of memory\n");
          return (xmlChar *)0x0;
        }
        local_38 = _xmlStrcat(local_38,local_30);
        local_38 = _xmlStrcat(local_38,(xmlChar *)":");
        (*(code *)_xmlFree)(local_30);
      }
      if (local_28[2] != 0) {
        local_30 = (xmlChar *)_xmlURIEscapeStr(local_28[2],"/?;:@");
        if (local_30 == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"xmlURIEscape: out of memory\n");
          return (xmlChar *)0x0;
        }
        local_38 = _xmlStrcat(local_38,(xmlChar *)"//");
        local_38 = _xmlStrcat(local_38,local_30);
        (*(code *)_xmlFree)(local_30);
      }
      if (local_28[4] != 0) {
        local_30 = (xmlChar *)_xmlURIEscapeStr(local_28[4],";:&=+$,");
        if (local_30 == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"xmlURIEscape: out of memory\n");
          return (xmlChar *)0x0;
        }
        local_38 = _xmlStrcat(local_38,(xmlChar *)"//");
        local_38 = _xmlStrcat(local_38,local_30);
        local_38 = _xmlStrcat(local_38,(xmlChar *)"@");
        (*(code *)_xmlFree)(local_30);
      }
      if (local_28[3] != 0) {
        local_30 = (xmlChar *)_xmlURIEscapeStr(local_28[3],"/?;:@");
        if (local_30 == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"xmlURIEscape: out of memory\n");
          return (xmlChar *)0x0;
        }
        if (local_28[4] == 0) {
          local_38 = _xmlStrcat(local_38,(xmlChar *)"//");
        }
        local_38 = _xmlStrcat(local_38,local_30);
        (*(code *)_xmlFree)(local_30);
      }
      if ((int)local_28[5] != 0) {
        _snprintf((char *)local_48,10,"%d",(ulong)*(uint *)(local_28 + 5));
        local_38 = _xmlStrcat(local_38,(xmlChar *)":");
        local_38 = _xmlStrcat(local_38,local_48);
      }
      if (local_28[6] != 0) {
        local_30 = (xmlChar *)_xmlURIEscapeStr(local_28[6],":@&=+$,/?;");
        if (local_30 == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"xmlURIEscape: out of memory\n");
          return (xmlChar *)0x0;
        }
        local_38 = _xmlStrcat(local_38,local_30);
        (*(code *)_xmlFree)(local_30);
      }
      if (local_28[7] != 0) {
        local_30 = (xmlChar *)_xmlURIEscapeStr(local_28[7],";/?:@&=+,$");
        if (local_30 == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"xmlURIEscape: out of memory\n");
          return (xmlChar *)0x0;
        }
        local_38 = _xmlStrcat(local_38,(xmlChar *)"?");
        local_38 = _xmlStrcat(local_38,local_30);
        (*(code *)_xmlFree)(local_30);
      }
      if (local_28[1] != 0) {
        local_30 = (xmlChar *)_xmlURIEscapeStr(local_28[1],"");
        if (local_30 == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"xmlURIEscape: out of memory\n");
          return (xmlChar *)0x0;
        }
        local_38 = _xmlStrcat(local_38,local_30);
        (*(code *)_xmlFree)(local_30);
      }
      if (local_28[8] != 0) {
        local_30 = (xmlChar *)_xmlURIEscapeStr(local_28[8],"#");
        if (local_30 == (xmlChar *)0x0) {
          ppxVar2 = ___xmlGenericError();
          pxVar1 = *ppxVar2;
          ppvVar3 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar3,"xmlURIEscape: out of memory\n");
          return (xmlChar *)0x0;
        }
        local_38 = _xmlStrcat(local_38,(xmlChar *)"#");
        local_38 = _xmlStrcat(local_38,local_30);
        (*(code *)_xmlFree)(local_30);
      }
      _xmlFreeURI(local_28);
      local_58 = local_38;
    }
  }
  return local_58;
}

