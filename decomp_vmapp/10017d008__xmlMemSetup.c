
int _xmlMemSetup(xmlFreeFunc freeFunc,xmlMallocFunc mallocFunc,xmlReallocFunc reallocFunc,
                xmlStrdupFunc strdupFunc)

{
  undefined4 local_2c;
  
  if (freeFunc == (xmlFreeFunc)0x0) {
    local_2c = -1;
  }
  else if (mallocFunc == (xmlMallocFunc)0x0) {
    local_2c = -1;
  }
  else if (reallocFunc == (xmlReallocFunc)0x0) {
    local_2c = -1;
  }
  else if (strdupFunc == (xmlStrdupFunc)0x0) {
    local_2c = -1;
  }
  else {
    local_2c = 0;
    _xmlFree = freeFunc;
    _xmlMalloc = mallocFunc;
    _xmlMallocAtomic = mallocFunc;
    _xmlRealloc = reallocFunc;
    _xmlMemStrdup = strdupFunc;
  }
  return local_2c;
}

