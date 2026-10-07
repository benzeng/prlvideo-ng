
void * _xmlXPathPopExternal(long param_1)

{
  xmlXPathObjectPtr obj;
  void *local_28;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    _xmlXPatherror(param_1,"xpath.c",0x519,10);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 10;
    }
    local_28 = (void *)0x0;
  }
  else if (**(int **)(param_1 + 0x20) == 8) {
    obj = (xmlXPathObjectPtr)_valuePop(param_1);
    local_28 = obj->user;
    _xmlXPathFreeObject(obj);
  }
  else {
    _xmlXPatherror(param_1,"xpath.c",0x51d,0xb);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xb;
    }
    local_28 = (void *)0x0;
  }
  return local_28;
}

