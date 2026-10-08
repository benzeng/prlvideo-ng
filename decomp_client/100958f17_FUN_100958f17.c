
xmlChar * FUN_100958f17(long param_1)

{
  int iVar1;
  xmlBufferPtr buf;
  xmlChar *str;
  xmlChar *local_30;
  long local_20;
  
  buf = _xmlBufferCreate();
  local_20 = param_1;
  if (buf == (xmlBufferPtr)0x0) {
    local_30 = (xmlChar *)0x0;
  }
  else {
    for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x30)) {
      iVar1 = *(int *)(local_20 + 8);
      if (iVar1 == 1) {
        str = (xmlChar *)FUN_100958f17(*(undefined8 *)(local_20 + 0x18));
        _xmlBufferCat(buf,str);
      }
      else if ((iVar1 != 0) && (iVar1 - 3U < 2)) {
        _xmlBufferCat(buf,*(xmlChar **)(local_20 + 0x50));
      }
    }
    local_30 = buf->content;
    buf->content = (xmlChar *)0x0;
    _xmlBufferFree(buf);
  }
  return local_30;
}

