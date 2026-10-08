
int _xmlGcMemSetup(xmlFreeFunc freeFunc,xmlMallocFunc mallocFunc,xmlMallocFunc mallocAtomicFunc,
                  xmlReallocFunc reallocFunc,xmlStrdupFunc strdupFunc)

{
  undefined4 local_34;
  
  if (freeFunc == (xmlFreeFunc)0x0) {
    local_34 = -1;
  }
  else if (mallocFunc == (xmlMallocFunc)0x0) {
    local_34 = -1;
  }
  else if (mallocAtomicFunc == (xmlMallocFunc)0x0) {
    local_34 = -1;
  }
  else if (reallocFunc == (xmlReallocFunc)0x0) {
    local_34 = -1;
  }
  else if (strdupFunc == (xmlStrdupFunc)0x0) {
    local_34 = -1;
  }
  else {
    local_34 = 0;
    _xmlFree = freeFunc;
    _xmlMalloc = mallocFunc;
    _xmlMallocAtomic = mallocAtomicFunc;
    _xmlRealloc = reallocFunc;
    _xmlMemStrdup = strdupFunc;
  }
  return local_34;
}

