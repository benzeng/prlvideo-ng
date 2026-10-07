
bool FUN_1004aed70(long param_1,long param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    bVar3 = false;
  }
  else {
    lVar2 = FUN_1002a6010(param_2);
    uVar1 = *(undefined4 *)(lVar2 + 4);
    FUN_1004c07d0(param_1 + 0x10,param_2,param_3);
    bVar3 = (*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2;
    if ((bVar3) && (param_4 == '\x01')) {
      FUN_1004b6c40(*(undefined8 *)(param_1 + 0xf0),uVar1);
      bVar3 = true;
    }
  }
  return bVar3;
}

