
void FUN_1003ba770(long param_1,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  float fVar2;
  char *pcVar3;
  
  fVar2 = (float)param_2;
  switch(param_3) {
  case 1:
    pcVar3 = "%uu";
    break;
  case 2:
    pcVar3 = "%d";
    break;
  default:
    return;
  case 4:
    if (fVar2 == 0.0) {
      pcVar3 = "false";
    }
    else {
      pcVar3 = "true";
    }
    FUN_10038e8e0(param_1 + 0xa0,pcVar3);
    return;
  case 8:
    if (((fVar2 != -0.0) && (fVar2 != -NAN)) &&
       ((fVar2 == 0.0 ||
        ((uVar1 = (param_2 & 0xffffffff) >> 0x17, ((uint)uVar1 & 0xff) != 0xff &&
         (((uVar1 & 0xff) != 0 || ((param_2 & 0x7fffff) == 0)))))))) {
      FUN_10038e8e0((double)fVar2,param_1 + 0xa0,"%#.10g");
      return;
    }
    pcVar3 = "U2F(0x%.8xu)";
  }
  FUN_10038e8e0(param_1 + 0xa0,pcVar3,param_2 & 0xffffffff);
  return;
}

