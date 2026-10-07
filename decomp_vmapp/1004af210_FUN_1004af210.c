
void FUN_1004af210(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 in_stack_ffffffffffffff58;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  if (param_1 != 0) {
    if (0 < DAT_1011b55f8) {
      uVar1 = *(undefined2 *)(param_1 + 0x14);
      uVar4 = FUN_1002a6010(param_1);
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                    "pTgReq = %p: InlineByteCount=%d; InlineBytes(ref)=%p; BufferCount=%d; ",param_1
                    ,uVar1,uVar4,*(undefined2 *)(param_1 + 0x16));
      uVar10 = (undefined4)((ulong)uVar4 >> 0x20);
    }
    piVar5 = (int *)FUN_1002a6010(param_1);
    if (piVar5 != (int *)0x0) {
      if (*(ushort *)(param_1 + 0x14) < 4) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                        "  InlineByteCount must be grater or equal to %ld",4);
          return;
        }
      }
      else {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"  Coherence cmd = 0x%08X",*piVar5);
        }
        if (*piVar5 == 6) {
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                          "  HIDE_WINDOW. InlineByteCount must be %ld. WndId(hwnd=0x%08X;tid=%d;pid=%d)"
                          ,0x10,piVar5[1],CONCAT44(uVar10,piVar5[2]),piVar5[3]);
          }
        }
        else if (*piVar5 == 5) {
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"  SHOW_WINDOW. InlineByteCount must be %ld.",8
                         );
          }
          uVar7 = 0;
          lVar6 = FUN_1002a6120(param_1,0,0);
          if (0 < DAT_1011b55f8) {
            if (lVar6 != 0) {
              uVar7 = *(undefined4 *)(lVar6 + 8);
            }
            uVar10 = 0;
            FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                          "  Buffer 0 [main window data](%p): size=%d (need more than %ld)",lVar6,
                          uVar7,0x30);
          }
          if ((lVar6 != 0) && (0x2f < *(uint *)(lVar6 + 8))) {
            FUN_1002a5990(lVar6,0,&local_58,0x30);
            if (0 < DAT_1011b55f8) {
              uVar4 = CONCAT44(uVar10,local_50);
              FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"  WndData: WndId(hwnd=0x%08X;tid=%d;pid=%d)"
                            ,local_58,local_54,uVar4);
              uVar10 = (undefined4)((ulong)uVar4 >> 0x20);
              if (0 < DAT_1011b55f8) {
                uVar8 = local_48 >> 3 & 1;
                uVar2 = local_48 >> 4 & 1;
                uVar9 = CONCAT44(uVar10,local_48 >> 1) & 0xffffffff00000001;
                FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                              "     owner=0x%08X; min=%d; max=%d; activate=%d; topmost=%d; tool=%d",
                              local_4c,local_48 & 1,uVar9,local_48 >> 2 & 1,uVar8,uVar2);
                uVar10 = (undefined4)(uVar9 >> 0x20);
                if (0 < DAT_1011b55f8) {
                  uVar3 = local_48 >> 8 & 1;
                  uVar9 = CONCAT44(uVar10,local_48 >> 7) & 0xffffffff00000001;
                  FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                                "     layered=%d; hidden=%d; transparent=%d; noactivate=%d",
                                local_48 >> 5 & 1,local_48 >> 6 & 1,uVar9,uVar3,uVar8,uVar2);
                  uVar10 = (undefined4)(uVar9 >> 0x20);
                  if (0 < DAT_1011b55f8) {
                    uVar4 = CONCAT44(uVar10,local_3c);
                    FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                                  "     nrects=%u; ncaption=%u; nzorder=%u",local_44,local_40,uVar4,
                                  uVar3,uVar8,uVar2);
                    uVar10 = (undefined4)((ulong)uVar4 >> 0x20);
                    if (0 < DAT_1011b55f8) {
                      uVar4 = CONCAT44(uVar10,local_30);
                      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"     bounds[%d;%d;%d;%d]",local_38,
                                    local_34,uVar4,local_2c,uVar8,uVar2);
                      uVar10 = (undefined4)((ulong)uVar4 >> 0x20);
                    }
                  }
                }
              }
            }
            if ((*(int *)(lVar6 + 8) != local_44 * 0x10 + local_40 * 2 + 0x30 + local_3c * 4) &&
               (0 < DAT_1011b55f8)) {
              FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                            "  First buffer size (%d) is incorrect (need %d)");
            }
            uVar7 = 0;
            lVar6 = FUN_1002a6120(param_1,1,0);
            if (0 < DAT_1011b55f8) {
              if (lVar6 != 0) {
                uVar7 = *(undefined4 *)(lVar6 + 8);
              }
              uVar10 = 0;
              FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                            "  Buffer 1 [bitmap data](%p): size=%d (need more than %ld)",lVar6,uVar7
                            ,0x20);
            }
            if ((lVar6 != 0) && (0x1f < *(uint *)(lVar6 + 8))) {
              FUN_1002a5990(lVar6,0,&local_78,0x20);
              if (0 < DAT_1011b55f8) {
                uVar9 = CONCAT44(uVar10,local_70) & 0xffffffff00000001;
                FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                              "     w=%u; h=%u; key=%d; blend=%d bgra=%d; bits=%d; bigicon=%d;",
                              local_78,local_74,uVar9,local_70 >> 1 & 1,local_70 >> 2 & 1,
                              local_70 >> 3 & 1,local_70 >> 4 & 1);
                if (0 < DAT_1011b55f8) {
                  FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                                "     keyR=%u keyG=%u keyB=%u; alpha=%u view[%d;%d;%d;%d]",
                                local_6c & 0xff,local_6c >> 8 & 0xff,
                                CONCAT44((int)(uVar9 >> 0x20),local_6c >> 0x10) & 0xffffffff000000ff
                                ,local_6c >> 0x18,local_68,local_64,local_60,local_5c);
                }
              }
            }
          }
        }
        else if (0 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                        "  This type of coherence package (0x%08X) is unsupported by dumping function"
                       );
          return;
        }
      }
    }
  }
  return;
}

