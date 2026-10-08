
int FUN_100c48a40(long param_1,int param_2,void *param_3,int param_4)

{
  if (param_2 < param_4) {
    FUN_100c62ee0(4,0x6f,0x6d,"rsa_none.c",0x57);
    param_2 = -1;
  }
  else {
    ___bzero(param_1,(long)(param_2 - param_4));
    _memcpy((void *)(((long)param_2 - (long)param_4) + param_1),param_3,(long)param_4);
  }
  return param_2;
}

