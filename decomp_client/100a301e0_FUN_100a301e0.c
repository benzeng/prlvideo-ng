
long * FUN_100a301e0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  ulong uVar9;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  iVar3 = _PasteboardGetItemCount(*param_2,&local_38);
  if (iVar3 == 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("CPTOOL","CPInterceptor",2,"pasteboard items count = %d",local_38);
    }
    if (CONCAT44(uStack_34,local_38) != 0) {
      uVar1 = *(undefined8 *)PTR__kUTTypeFileURL_1021e1bf8;
      uVar9 = 1;
      do {
        iVar3 = _PasteboardGetItemIdentifier(*param_2,uVar9,&local_40);
        if (iVar3 == 0) {
          local_48 = 0;
          iVar3 = _PasteboardCopyItemFlavors(*param_2,local_40,&local_48);
          if (iVar3 == 0) {
            lVar4 = _CFArrayGetCount(local_48);
            if (0 < lVar4) {
              lVar4 = lVar4 + 1;
              bVar8 = false;
              do {
                uVar5 = _CFArrayGetValueAtIndex(local_48,lVar4 + -2);
                lVar6 = _CFStringCompare(uVar5,uVar1,0);
                bVar2 = true;
                if (lVar6 != 0) {
                  bVar2 = bVar8;
                }
                lVar4 = lVar4 + -1;
                bVar8 = bVar2;
              } while (1 < lVar4);
              if (bVar2) {
                local_50 = 0;
                iVar3 = _PasteboardCopyItemFlavorData(*param_2,local_40,uVar1,&local_50);
                if (iVar3 == 0) {
                  plVar7 = operator_new(0x18);
                  plVar7[2] = local_50;
                  if (local_50 != 0) {
                    _CFRetain();
                  }
                  plVar7[1] = (long)param_1;
                  lVar4 = *param_1;
                  *plVar7 = lVar4;
                  *(long **)(lVar4 + 8) = plVar7;
                  *param_1 = (long)plVar7;
                  param_1[2] = param_1[2] + 1;
                }
                else if (0 < DAT_10230ffd0) {
                  FUN_100df99c0("CPTOOL","CPInterceptor",1,
                                "PasteboardCopyItemFlavorData failed with status = %d");
                }
                if (local_50 != 0) {
                  _CFRelease();
                }
              }
            }
          }
          if (local_48 != 0) {
            _CFRelease();
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 <= CONCAT44(uStack_34,local_38));
    }
  }
  else if (0 < DAT_10230ffd0) {
    FUN_100df99c0("CPTOOL","CPInterceptor",1,"failed to get pasteboard items count with error %d",
                  iVar3);
  }
  return param_1;
}

