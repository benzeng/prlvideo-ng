
int _xmlMemGet(xmlFreeFunc *freeFunc,xmlMallocFunc *mallocFunc,xmlReallocFunc *reallocFunc,
              xmlStrdupFunc *strdupFunc)

{
  if (freeFunc != (xmlFreeFunc *)0x0) {
    *freeFunc = (xmlFreeFunc)_xmlFree;
  }
  if (mallocFunc != (xmlMallocFunc *)0x0) {
    *mallocFunc = (xmlMallocFunc)_xmlMalloc;
  }
  if (reallocFunc != (xmlReallocFunc *)0x0) {
    *reallocFunc = (xmlReallocFunc)_xmlRealloc;
  }
  if (strdupFunc != (xmlStrdupFunc *)0x0) {
    *strdupFunc = (xmlStrdupFunc)_xmlMemStrdup;
  }
  return 0;
}

