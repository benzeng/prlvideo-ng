
char FUN_100c4db90(int param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  
  if (param_1 == 2) {
    FUN_100c4d5f0(*param_2);
    *param_2 = 0;
    cVar1 = '\x02';
  }
  else {
    cVar1 = '\x01';
    if (param_1 == 0) {
      lVar2 = FUN_100c4d390();
      *param_2 = lVar2;
      cVar1 = (lVar2 != 0) * '\x02';
    }
  }
  return cVar1;
}

