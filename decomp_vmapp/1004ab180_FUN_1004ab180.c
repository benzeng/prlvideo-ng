
int FUN_1004ab180(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  
  iVar6 = 0;
  lVar7 = _CGWindowListCopyWindowInfo(param_2,0);
  if (lVar7 == 0) {
    if (0 < DAT_1011b55f8) {
      iVar6 = 0;
      FUN_1008e3970("CHRSRV_DESKTOP_IMAGE","ChrToolSrv",1,"Unable to create window info list");
    }
  }
  else {
    lVar8 = _CFArrayGetCount(lVar7);
    if (0 < lVar8) {
      uVar1 = *(undefined8 *)PTR__kCGWindowNumber_100ba2438;
      uVar2 = *(undefined8 *)PTR__kCGWindowLayer_100ba2430;
      lVar10 = 0;
      do {
        lVar9 = _CFArrayGetValueAtIndex(lVar7,lVar10);
        if (lVar9 != 0) {
          local_3c = 0;
          cVar4 = _CFDictionaryGetValueIfPresent(lVar9,uVar1,&local_38);
          if (cVar4 != '\0') {
            _CFNumberGetValue(local_38,9,&local_3c);
            local_4c = -1;
            cVar4 = _CFDictionaryGetValueIfPresent(lVar9,uVar2,&local_48);
            if ((cVar4 != '\0') &&
               (_CFNumberGetValue(local_48,3,&local_4c), pcVar3 = DAT_1011cce08,
               local_4c == -0x7fffffe8)) {
              local_58 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 0x18);
              local_60 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 0x10);
              local_70 = *(undefined8 *)PTR__CGRectNull_100ba2058;
              local_68 = *(undefined8 *)(PTR__CGRectNull_100ba2058 + 8);
              uVar5 = (*DAT_1011ccc38)();
              iVar6 = (*pcVar3)(uVar5,local_3c,&local_70);
              if ((iVar6 == 0) && (cVar4 = _CGRectEqualToRect(), iVar6 = local_3c, cVar4 != '\0')) {
                _CFRelease(lVar7);
                if (iVar6 != 0) {
                  return iVar6;
                }
                goto LAB_1004ab334;
              }
            }
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar8);
    }
    _CFRelease(lVar7);
LAB_1004ab334:
    if (param_2 == '\0') {
      iVar6 = 0;
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970(*param_1,param_1[1],param_1[2],param_1[3],"CHRSRV_DESKTOP_IMAGE","ChrToolSrv",
                      1,"Unable to find desktop window for rect [%f;%f] w=%f; h=%f");
      }
    }
    else {
      iVar6 = FUN_1004ab180(param_1,0);
    }
  }
  return iVar6;
}

