
undefined8 FUN_100a300b0(undefined8 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = 0;
  iVar1 = _PasteboardGetItemCount(*param_1,&local_20);
  if (iVar1 == 0) {
    if (local_20 == 0) {
      if (DAT_10230ffd0 < 1) {
        return 0;
      }
      FUN_100df99c0("CPTOOL","CPInterceptor",1,"There is no items in the pasteboard");
      return 0;
    }
    iVar1 = _PasteboardGetItemIdentifier(*param_1,1,&local_28);
    if (iVar1 == 0) {
      iVar1 = _PasteboardCopyItemFlavors(*param_1,local_28,&local_30);
      if (iVar1 == 0) {
        return local_30;
      }
      if (DAT_10230ffd0 < 1) {
        return 0;
      }
      pcVar2 = "PasteboardCopyItemFlavors failed with status = %d";
    }
    else {
      if (DAT_10230ffd0 < 1) {
        return 0;
      }
      pcVar2 = "PasteboardGetItemIdentifier with status = %d";
    }
  }
  else {
    if (DAT_10230ffd0 < 1) {
      return 0;
    }
    pcVar2 = "PasteboardGetItemCount failed with status=%d";
  }
  FUN_100df99c0("CPTOOL","CPInterceptor",1,pcVar2,iVar1);
  return 0;
}

