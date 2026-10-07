
bool FUN_10086d140(undefined2 *param_1,int param_2,void *param_3,uint param_4)

{
  bool bVar1;
  size_t sVar2;
  
  bVar1 = (int)param_4 <= param_2 + -0xb;
  if (bVar1) {
    *param_1 = 0x100;
    sVar2 = (size_t)(int)((param_2 + -3) - param_4);
    _memset(param_1 + 1,0xff,sVar2);
    *(undefined1 *)(sVar2 + 2 + (long)param_1) = 0;
    _memcpy((void *)(sVar2 + 3 + (long)param_1),param_3,(ulong)param_4);
  }
  else {
    FUN_100887ce0(4,0x6c,0x6e,"rsa_pk1.c",0x4b);
  }
  return bVar1;
}

