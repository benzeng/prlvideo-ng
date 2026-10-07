
void * _xmlIOHTTPOpenW(char *post_uri,int compression)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  xmlOutputBufferPtr pxVar3;
  int *local_30;
  int *local_10;
  
  if (post_uri == (char *)0x0) {
    local_30 = (int *)0x0;
  }
  else {
    local_10 = (int *)(*(code *)_xmlMalloc)(0x18);
    if (local_10 == (int *)0x0) {
      FUN_10017789f("creating HTTP output context");
      local_30 = (int *)0x0;
    }
    else {
      local_10[0] = 0;
      local_10[1] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
      local_10[4] = 0;
      local_10[5] = 0;
      pxVar1 = _xmlStrdup((xmlChar *)post_uri);
      *(xmlChar **)(local_10 + 2) = pxVar1;
      if (*(long *)(local_10 + 2) == 0) {
        FUN_10017789f("copying URI");
        FUN_10017923d(local_10);
        local_30 = (int *)0x0;
      }
      else {
        if ((compression < 1) || (9 < compression)) {
          pxVar3 = _xmlAllocOutputBuffer((xmlCharEncodingHandlerPtr)0x0);
          *(xmlOutputBufferPtr *)(local_10 + 4) = pxVar3;
        }
        else {
          *local_10 = compression;
          uVar2 = FUN_100178b77(compression);
          *(undefined8 *)(local_10 + 4) = uVar2;
        }
        if (*(long *)(local_10 + 4) == 0) {
          FUN_10017923d(local_10);
          local_10 = (int *)0x0;
        }
        local_30 = local_10;
      }
    }
  }
  return local_30;
}

