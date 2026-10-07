
undefined8 FUN_100289270(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_1011c3698;
  uVar3 = 0x80000001;
  if (*(long *)(param_1 + 0xa0) != 0) {
    lVar2 = FUN_1000e9a40(*(undefined8 *)(DAT_1011c3698 + 0x1158),0xaf,0);
    if (lVar2 == 0) {
      FUN_1000e9b50(*(undefined8 *)(lVar1 + 0x1158),0xaf,1,0x2040,0,0x801);
    }
    FUN_1000a4cd0(lVar1,0xaf,0,0);
    DAT_1011c3ca0 = FUN_1000e99d0(*(undefined8 *)(lVar1 + 0x1158),0xaf,0);
    if (DAT_1011c3ca0 != 0) {
      DAT_1011c3ca8 = FUN_1002f0000(0xb,0,0xffff);
      if (DAT_1011c3ca8 == 0) {
        FUN_1008e3970("","LocalDevices",0,"Failed to create monev for LSI");
      }
      else {
        FUN_100257c20(param_1);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

