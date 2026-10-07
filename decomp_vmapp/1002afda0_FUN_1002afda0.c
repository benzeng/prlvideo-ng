
ulong FUN_1002afda0(long param_1,long param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  uint local_60;
  uint local_5c;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  lVar3 = _CGLGetPixelFormat(*(undefined8 *)(param_1 + 0x868));
  if (lVar3 == 0) {
    pcVar5 = "Pixel format not found\n";
    uVar6 = 0;
LAB_1002afe3a:
    FUN_1008e3970("","LocalDevices",uVar6,pcVar5);
  }
  else {
    iVar1 = _CGLDescribePixelFormat(lVar3,0,0x60,&local_3c);
    if (iVar1 == 0) {
      iVar1 = _CGLDescribePixelFormat(lVar3,0,0x80,&local_34);
      if (iVar1 == 0) {
        iVar1 = _CGLGetVirtualScreen(*(undefined8 *)(param_1 + 0x868),&local_38);
        if (iVar1 == 0) {
          if (local_3c == 0) {
            local_34 = local_38 + 1;
            uVar8 = local_38;
          }
          else {
            uVar8 = 0;
          }
          if ((param_3 != 0) && (uVar8 < local_34)) {
            uVar7 = 0;
            local_60 = local_34;
            local_5c = param_3;
            do {
              *(undefined4 *)(param_2 + uVar7 * 4) = 0;
              iVar1 = _CGLDescribePixelFormat(lVar3,uVar8,0x46,&local_40);
              if (iVar1 == 0) {
                iVar1 = _CGLDescribePixelFormat(lVar3,uVar8,0x49,&local_44);
                if (iVar1 != 0) {
                  pcVar5 = "error on CGLDescribePixelFormat(kCGLPFAAccelerated) = %x\n";
                  goto LAB_1002b015b;
                }
                uVar2 = local_40;
                if (local_44 == 0) {
                  if (*(int *)(param_2 + uVar7 * 4) != 0) goto LAB_1002b00b1;
                }
                else {
                  uVar4 = local_40 & 0xfe7f00;
                  if (uVar4 < 0x24000) {
                    if (uVar4 < 0x22400) {
                      if (uVar4 < 0x21b00) {
                        if (uVar4 == 0x21900) {
                          *(undefined4 *)(param_2 + uVar7 * 4) = 0x31000;
                        }
                        else if (uVar4 == 0x21a00) {
                          *(undefined4 *)(param_2 + uVar7 * 4) = 0x32000;
                        }
                        else {
LAB_1002b00a5:
                          *(undefined4 *)(param_2 + uVar7 * 4) = 0x10000;
                        }
                      }
                      else if (uVar4 == 0x21b00) {
                        *(undefined4 *)(param_2 + uVar7 * 4) = 0x36000;
                      }
                      else {
                        if (uVar4 != 0x21c00) goto LAB_1002b00a5;
                        *(undefined4 *)(param_2 + uVar7 * 4) = 0x37000;
                      }
                    }
                    else if (uVar4 == 0x22400) {
                      *(undefined4 *)(param_2 + uVar7 * 4) = 0x45000;
                    }
                    else {
                      if ((uVar4 != 0x22600) && (uVar4 != 0x22700)) goto LAB_1002b00a5;
                      if ((local_40 & 0xfe7fc0) < 0x22640) {
                        *(undefined4 *)(param_2 + uVar7 * 4) = 0x48000;
                      }
                      else {
                        *(undefined4 *)(param_2 + uVar7 * 4) = 0x4a600;
                      }
                    }
                  }
                  else if (uVar4 < 0x24200) {
                    if (uVar4 != 0x24000) goto LAB_1002b00a5;
                    *(undefined4 *)(param_2 + uVar7 * 4) = 0x20900;
                  }
                  else if (uVar4 < 0x24400) {
                    if (uVar4 == 0x24200) {
                      *(undefined4 *)(param_2 + uVar7 * 4) = 0x23000;
                    }
                    else {
                      if (uVar4 != 0x24300) goto LAB_1002b00a5;
                      *(undefined4 *)(param_2 + uVar7 * 4) = 0x2a000;
                    }
                  }
                  else if (uVar4 == 0x24400) {
                    *(undefined4 *)(param_2 + uVar7 * 4) = 0x2a400;
                  }
                  else {
                    if (uVar4 != 0x24500) goto LAB_1002b00a5;
                    if (local_40 == 0x1024501) {
                      *(undefined4 *)(param_2 + uVar7 * 4) = 0x2a515;
                      uVar2 = 0x1024501;
                    }
                    else {
                      *(undefined4 *)(param_2 + uVar7 * 4) = 0x2a500;
                    }
                  }
LAB_1002b00b1:
                  if (uVar8 == local_38) {
                    local_60 = uVar2;
                    local_5c = (uint)uVar7;
                  }
                  uVar7 = (ulong)((uint)uVar7 + 1);
                }
              }
              else {
                pcVar5 = "error on CGLDescribePixelFormat(kCGLPFARendererID) = %x\n";
LAB_1002b015b:
                FUN_1008e3970("","LocalDevices",0,pcVar5,iVar1);
              }
            } while (((uint)uVar7 < param_3) && (uVar8 = uVar8 + 1, uVar8 < local_34));
            if (local_5c != param_3) {
              if (param_4 != (uint *)0x0) {
                *param_4 = local_5c;
              }
              if (DAT_1011b55f8 < 1) {
                return uVar7;
              }
              FUN_1008e3970("","LocalDevices",1,"RendererID=%X Renderer=%X",local_60,
                            *(undefined4 *)(param_2 + (ulong)local_5c * 4));
              return uVar7;
            }
          }
          if (DAT_1011b55f8 < 1) {
            return 0;
          }
          pcVar5 = "Renderer=GLR_UNKNOWN";
          uVar6 = 1;
          goto LAB_1002afe3a;
        }
        pcVar5 = "error on CGLGetVirtualScreen() = %x\n";
      }
      else {
        pcVar5 = "error on CGLDescribePixelFormat(kCGLPFAVirtualScreenCount) = %x\n";
      }
    }
    else {
      pcVar5 = "error on CGLDescribePixelFormat(kCGLPFAAllowOfflineRenderers) = %x\n";
    }
    FUN_1008e3970("","LocalDevices",0,pcVar5,iVar1);
  }
  return 0;
}

