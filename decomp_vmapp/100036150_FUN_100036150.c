
void FUN_100036150(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    cVar1 = FUN_100038180(*param_2,param_2 + 4,(int)param_2[3]);
    if (cVar1 == '\0') {
      uVar2 = 0xf000001c;
    }
    else {
      uVar2 = 0;
    }
    FUN_1004c07d0(param_1,*param_2,uVar2);
    return;
  }
  return;
}

