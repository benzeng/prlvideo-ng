
undefined4 FUN_100d7b300(int param_1)

{
  long lVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_50 [3];
  int local_44;
  long local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar3 = 0xffffffff;
  local_44 = param_1;
  local_38 = lVar1;
  if (0 < param_1) {
    lVar4 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,9,&local_44);
    if (lVar4 != 0) {
      local_40 = lVar4;
      lVar5 = _CFArrayCreate(0,&local_40,1,PTR__kCFTypeArrayCallBacks_1021e1958);
      pcVar2 = DAT_102311b18;
      uVar3 = 0xffffffff;
      if (lVar5 != 0) {
        uVar3 = (*DAT_1023119d8)();
        lVar6 = (*pcVar2)(uVar3,7,lVar5);
        uVar3 = 0xffffffff;
        if (lVar6 != 0) {
          lVar7 = _CFArrayGetCount(lVar6);
          uVar3 = 0xffffffff;
          if (lVar7 != 0) {
            lVar7 = _CFArrayGetCount(lVar6);
            if (lVar7 < 2) {
              lVar7 = _CFArrayGetValueAtIndex(lVar6,0);
              if (lVar7 != 0) {
                lVar8 = _CFGetTypeID(lVar7);
                lVar9 = _CFNumberGetTypeID();
                if (lVar8 == lVar9) {
                  _CFNumberGetValue(lVar7,4,local_50);
                  uVar3 = local_50[0];
                }
              }
            }
          }
          _CFRelease(lVar6);
        }
        _CFRelease(lVar5);
      }
      _CFRelease(lVar4);
    }
  }
  if (lVar1 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

