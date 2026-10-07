
undefined8 FUN_10080d740(undefined8 *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  *param_1 = param_2;
  if (*param_2 == 2) {
    pcVar3 = "SSLv2";
  }
  else {
    pcVar3 = "ALL:!EXPORT:!aNULL:!eNULL:!SSLv2";
  }
  lVar2 = FUN_100815300(param_2,param_1 + 1,param_1 + 2,pcVar3);
  if ((lVar2 != 0) && (iVar1 = FUN_100885600(lVar2), 0 < iVar1)) {
    return 1;
  }
  FUN_100887ce0(0x14,0xaa,0xe6,"ssl_lib.c",0x117);
  return 0;
}

