
undefined8 * FUN_1008c5cb0(undefined8 param_1)

{
  undefined8 *local_28;
  
  local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x68);
  if (local_28 == (undefined8 *)0x0) {
    FUN_1008c3d3c(param_1,"couldn\'t allocate a new input stream\n");
    local_28 = (undefined8 *)0x0;
  }
  else {
    _memset(local_28,0,0x68);
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 0;
    *local_28 = 0;
    *(undefined4 *)((long)local_28 + 0x34) = 1;
    *(undefined4 *)(local_28 + 7) = 1;
    *local_28 = 0;
    local_28[9] = 0;
    local_28[0xb] = 0;
    local_28[8] = 0;
    *(undefined4 *)(local_28 + 6) = 0;
  }
  return local_28;
}

