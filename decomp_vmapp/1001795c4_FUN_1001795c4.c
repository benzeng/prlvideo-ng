
undefined4 FUN_1001795c4(int *param_1,long param_2)

{
  undefined4 local_25c;
  xmlChar local_248 [512];
  char *local_48;
  long local_40;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  char *local_20;
  long local_18;
  long local_10;
  
  local_34 = 0xffffffff;
  local_30 = 0;
  local_2c = 0;
  local_40 = 0;
  local_20 = (char *)0x0;
  local_48 = "text/xml";
  local_18 = 0;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    local_25c = 0xffffffff;
  }
  else {
    local_28 = param_1;
    if (*param_1 < 1) {
      local_10 = *(long *)(param_1 + 4);
      local_40 = **(long **)(local_10 + 0x20);
      local_2c = *(uint *)(*(long *)(local_10 + 0x20) + 8);
    }
    else {
      local_2c = FUN_1001790b9(*(undefined8 *)(param_1 + 4),&local_40);
      local_20 = "Content-Encoding: gzip";
    }
    if (local_40 == 0) {
      _xmlStrPrintf(local_248,500,(xmlChar *)"xmlIOHTTPCloseWrite:  %s \'%s\' %s \'%s\'.\n",
                    "Error retrieving content.\nUnable to",param_2,"data to URI",
                    *(undefined8 *)(local_28 + 2));
      FUN_100177e16(0x60a,local_248);
    }
    else {
      local_18 = _xmlNanoHTTPMethod(*(undefined8 *)(local_28 + 2),param_2,local_40,&local_48,
                                    local_20,local_2c);
      if (local_18 != 0) {
        local_30 = _xmlNanoHTTPReturnCode(local_18);
        if ((local_30 < 200) || (299 < local_30)) {
          _xmlStrPrintf(local_248,500,
                        (xmlChar *)"xmlIOHTTPCloseWrite: HTTP \'%s\' of %d %s\n\'%s\' %s %d\n",
                        param_2,(ulong)local_2c,"bytes to URI",*(undefined8 *)(local_28 + 2),
                        "failed.  HTTP return code:",local_30);
          FUN_100177e16(0x60a,local_248);
        }
        else {
          local_34 = 0;
        }
        _xmlNanoHTTPClose(local_18);
        (*(code *)_xmlFree)(local_48);
      }
    }
    FUN_10017923d(local_28);
    local_25c = local_34;
  }
  return local_25c;
}

