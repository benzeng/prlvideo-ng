
bool FUN_100c97450(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_100c62ee0(0xb,0x73,0x43,"x509name.c",0x160);
    bVar2 = false;
  }
  else {
    FUN_100c74e10(*param_1);
    lVar1 = FUN_100bf8640(param_2);
    *param_1 = lVar1;
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}

