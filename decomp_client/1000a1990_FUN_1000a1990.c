
void FUN_1000a1990(long param_1,int *param_2,uint param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  
  if (3 < param_3) {
    *(bool *)(param_1 + 0x29) = *param_2 == 1;
  }
  uVar1 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar1,param_1 + 0x20);
  if (lVar3 != 0) {
    lVar3 = FUN_10018d490(lVar3);
    if (lVar3 != 0) {
      uVar1 = FUN_10016f500(lVar3);
      cVar2 = FUN_10061c2b0(uVar1,0x10080);
      if ((cVar2 != '\0') && (*(char *)(param_1 + 0x29) != '\0')) {
        FUN_1000a1a00(param_1);
        return;
      }
    }
  }
  return;
}

