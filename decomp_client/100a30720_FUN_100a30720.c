
int FUN_100a30720(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _PasteboardPutItemFlavor();
  if ((iVar1 != 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("CPTOOL","CPInterceptor",1,"PasteboardPutItemFlavor(item = %p) status = %d",
                  param_2,iVar1);
  }
  return iVar1;
}

