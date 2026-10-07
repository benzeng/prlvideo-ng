
/* WARNING: Type propagation algorithm not settling */

void FUN_1002a8d30(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [32];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_d0[1] = 0;
  lVar6 = 0xc;
  local_38 = lVar5;
  do {
    FUN_1002a99b0(param_1,*(undefined4 *)(&UNK_100b37994 + lVar6),
                  *(undefined4 *)((long)&DAT_100b37998 + lVar6),
                  *(undefined4 *)((long)&DAT_100b37998 + lVar6 + 4),
                  *(undefined4 *)((long)&DAT_100b379a0 + lVar6),local_d0 + 1);
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x30c);
  if ((*(uint *)(DAT_1011c3698 + 0x5c0) & 0xffffff00) != 0xb00) {
    local_d0[0] = 0;
    local_c0 = *(undefined8 *)PTR__kCGDisplayShowDuplicateLowResolutionModes_100ba2408;
    local_c8 = *(undefined8 *)PTR__kCFBooleanTrue_100ba23c8;
    uVar8 = 0;
    uVar4 = _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,&local_c0,
                                &local_c8,1,0,0);
    _CGGetOnlineDisplayList(0x20,local_b8,local_d0);
    if (local_d0[0] != 0) {
      iVar7 = 0x154;
      do {
        lVar5 = _CGDisplayCopyAllDisplayModes(local_b8[uVar8],uVar4);
        if (lVar5 != 0) {
          lVar6 = _CFArrayGetCount(lVar5);
          lVar9 = 0;
          if (0 < lVar6) {
            do {
              lVar6 = _CFArrayGetValueAtIndex(lVar5,lVar9);
              if (lVar6 != 0) {
                uVar2 = _CGDisplayModeGetWidth(lVar6);
                uVar3 = _CGDisplayModeGetHeight(lVar6);
                if ((0x13f < uVar2) && (199 < uVar3)) {
                  bVar1 = FUN_1002a99b0(param_1,iVar7,uVar2,uVar3,0x20,local_d0 + 1);
                  iVar7 = iVar7 + (uint)bVar1;
                }
              }
              lVar9 = lVar9 + 1;
              lVar6 = _CFArrayGetCount(lVar5);
            } while (lVar9 < lVar6);
          }
          _CFRelease(lVar5);
        }
        uVar2 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar2;
      } while (uVar2 < local_d0[0]);
    }
    _CFRelease(uVar4);
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar5 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

