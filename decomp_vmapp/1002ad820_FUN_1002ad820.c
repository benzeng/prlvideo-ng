
int FUN_1002ad820(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint local_c8;
  int local_c4;
  int local_c0;
  uint local_bc;
  undefined4 local_b8 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_bc = 0;
  local_c0 = 0;
  iVar1 = 0;
  if ((*(long *)(param_1 + 0x868) != 0) && (lVar6 = _CGLGetPixelFormat(), lVar6 != 0)) {
    iVar1 = _CGLDescribePixelFormat(lVar6,0,0x80,&local_c0);
    if (iVar1 == 0) {
      uVar2 = _CGMainDisplayID();
      uVar3 = _CGDisplayIDToOpenGLDisplayMask(uVar2);
      _CGGetOnlineDisplayList(0x20,local_b8,&local_bc);
      uVar8 = 0;
      if (local_bc != 0) {
        lVar7 = 0;
        uVar8 = 0;
        do {
          uVar4 = _CGDisplayIDToOpenGLDisplayMask(local_b8[lVar7]);
          uVar8 = uVar4 | uVar8;
          lVar7 = lVar7 + 1;
        } while ((uint)lVar7 < local_bc);
      }
      iVar1 = 0;
      if (0 < local_c0) {
        iVar10 = 0;
        iVar9 = 0;
        do {
          iVar5 = _CGLDescribePixelFormat(lVar6,iVar10,0x49,&local_c4);
          iVar1 = iVar9;
          if (iVar5 == 0) {
            if (local_c4 != 0) {
              iVar5 = _CGLDescribePixelFormat(lVar6,iVar10,0x54,&local_c8);
              if (iVar5 == 0) {
                iVar1 = iVar10;
                if ((uVar3 & local_c8) != 0) break;
                iVar1 = iVar9;
                if ((uVar8 & local_c8) != 0) {
                  iVar1 = iVar10;
                }
              }
              else {
                FUN_1008e3970("","LocalDevices",0,"CGLDescribePixelFormat(kCGLPFADisplayMask): %x\n"
                             );
              }
            }
          }
          else {
            FUN_1008e3970("","LocalDevices",0,"CGLDescribePixelFormat(kCGLPFAAccelerated): %x\n");
          }
          iVar10 = iVar10 + 1;
          iVar9 = iVar1;
        } while (iVar10 < local_c0);
      }
    }
    else {
      FUN_1008e3970("","LocalDevices",0,
                    "error on CGLDescribePixelFormat(kCGLPFAVirtualScreenCount)\n");
      iVar1 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

