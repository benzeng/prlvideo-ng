
undefined1 FUN_100a30050(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = _PasteboardPutItemFlavor(*param_1,(long)param_2,param_3,0,0);
  uVar2 = 1;
  if (iVar1 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_100df99c0("CPTOOL","CPInterceptor",1,"PasteboardPutItemFlavor failed with status %d");
    }
  }
  return uVar2;
}

