
char * FUN_1009d9840(char *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long local_38;
  
  lVar1 = _CFStringGetLength(param_2);
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  if (lVar1 != 0) {
    lVar2 = _CFStringGetMaximumSizeForEncoding(lVar1,0x8000100);
    uVar4 = 0xffffffffffffffff;
    if (-2 < lVar2) {
      uVar4 = lVar2 + 1;
    }
    pvVar3 = operator_new__(uVar4);
    _CFStringGetBytes(param_2,0,lVar1,0x8000100,0,0,pvVar3,lVar2,&local_38);
    *(undefined1 *)((long)pvVar3 + local_38) = 0;
    std::string::assign(param_1);
    operator_delete__(pvVar3);
  }
  return param_1;
}

