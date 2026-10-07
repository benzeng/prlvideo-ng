
bool FUN_1000ae880(ulong param_1,code *param_2,undefined4 param_3,long param_4,int param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  
  uVar1 = DAT_1011c3688;
  uVar5 = param_1;
  if (0xafffffff < param_1) {
    uVar5 = 0xffffffffffffffff;
    if (0xffffffff < param_1) {
      uVar5 = param_1 - 0x50000000;
    }
  }
  bVar6 = false;
  lVar4 = FUN_10008c320(DAT_1011c3688,uVar5,param_3,0,0);
  if (lVar4 != 0) {
    cVar2 = (*param_2)(lVar4,param_3);
    uVar5 = param_1;
    if (0xafffffff < param_1) {
      uVar5 = 0xffffffffffffffff;
      if (0xffffffff < param_1) {
        uVar5 = param_1 - 0x50000000;
      }
    }
    bVar6 = false;
    FUN_10008c640(uVar1,uVar5,param_3,0,0,0);
    if (((cVar2 != '\0') && (bVar6 = true, param_4 != 0)) && (param_5 != 0)) {
      iVar3 = FUN_10008cba0(uVar1,param_4,param_1,param_5);
      bVar6 = iVar3 == param_5;
    }
  }
  return bVar6;
}

