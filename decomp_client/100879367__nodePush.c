
int _nodePush(long param_1,undefined8 param_2)

{
  long lVar1;
  int local_2c;
  
  if (param_1 == 0) {
    local_2c = 0;
  }
  else {
    if (*(int *)(param_1 + 0x5c) <= *(int *)(param_1 + 0x58)) {
      lVar1 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0x60),(long)*(int *)(param_1 + 0x5c) << 4);
      if (lVar1 == 0) {
        _xmlErrMemory(param_1,0);
        return 0;
      }
      *(long *)(param_1 + 0x60) = lVar1;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * 2;
    }
    if (_xmlParserMaxDepth < *(uint *)(param_1 + 0x58)) {
      FUN_100877ed1(param_1,1,"Excessive depth in document: change xmlParserMaxDepth = %d\n",
                    _xmlParserMaxDepth);
      *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
      local_2c = 0;
    }
    else {
      *(undefined8 *)(*(long *)(param_1 + 0x60) + (long)*(int *)(param_1 + 0x58) * 8) = param_2;
      *(undefined8 *)(param_1 + 0x50) = param_2;
      local_2c = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = local_2c + 1;
    }
  }
  return local_2c;
}

