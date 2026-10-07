
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_100754780(undefined8 param_1,long *param_2,uint param_3,undefined8 *param_4,ulong *param_5,
             longlong param_6,uint param_7,long *param_8,int *param_9,undefined4 *param_10,
             char param_11)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong extraout_XMM0_Qa;
  ulong extraout_XMM0_Qb;
  long local_1c8;
  undefined8 *local_1b8;
  ulong local_180;
  long local_178;
  undefined1 local_170 [32];
  uint local_150;
  undefined4 uStack_14c;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  ulong local_38;
  
  pvVar4 = operator_new__(0x100000,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar4 == (void *)0x0) {
    FUN_1008e3970("","dbgdump",0,"Failed to allocate memory");
    return 0;
  }
  uVar16 = (ulong)param_7;
  uVar3 = QIODevice::write((char *)param_2,param_6);
  if (uVar3 != param_7) {
    pcVar8 = "can\'t write out windbg dump header";
LAB_100755223:
    uVar15 = 0;
    FUN_1008e3970("","dbgdump",0,pcVar8);
    goto LAB_100755232;
  }
  uVar5 = *param_5;
  uVar11 = uVar5 + 0x50000000;
  if (uVar5 >> 0x1c < 0xb) {
    uVar11 = uVar5;
  }
  FUN_100753030(param_1,0x51);
  if (0 < (long)uVar11) {
    uVar5 = 0;
    uVar18 = 0;
    uVar14 = uVar11;
    do {
      uVar10 = uVar14;
      if (0x100000 < (long)uVar14) {
        uVar10 = 0x100000;
      }
      uVar13 = uVar14 & 0xffffffff;
      if (0x100000 < (long)uVar14) {
        uVar13 = 0x100000;
      }
      cVar2 = (*(code *)param_5[1])(pvVar4,uVar13,uVar5);
      if (cVar2 == '\0') {
        pcVar8 = "can\'t read data from memory";
        goto LAB_100755223;
      }
      uVar5 = QIODevice::write((char *)param_2,(longlong)pvVar4);
      if ((uVar5 & 0xffffffff) != uVar10) {
        pcVar8 = "can\'t write out windbg dump data";
        uVar15 = 0;
        goto LAB_100755267;
      }
      uVar18 = uVar18 + uVar10;
      FUN_100753030(param_1,(int)(uVar18 / *param_5) * 0xe + 0x51,uVar18 % *param_5);
      uVar5 = uVar18 + 0x50000000;
      if (uVar18 < 0xb0000000) {
        uVar5 = uVar18;
      }
      uVar14 = uVar11 - uVar5;
    } while (0 < (long)uVar14);
  }
  uVar15 = 1;
  if (param_11 == '\0') goto LAB_100755232;
  if (param_3 != 0) {
    lVar17 = 0;
    lVar7 = 0;
    uVar5 = 0;
    local_1b8 = param_4;
    do {
      local_38 = 0;
      local_40 = 0;
      iVar9 = (int)uVar5;
      if (*(short *)(param_4 + 0x44) != 0x40) {
        if (*(short *)(param_4 + 0x44) == 0x20) {
          if (*(short *)((long)param_8 + 700) != 0) {
            if ((param_8[0x43] != 0) &&
               (cVar2 = FUN_10078c4e0(param_5,param_4[0x12],param_8[0x43] + lVar17,&local_38,4),
               cVar2 == '\0')) {
              FUN_1008e3970("","dbgdump",0,
                            "Failed to read prcb address for vcpu%u using KiProcessorBlock=0x%llx",
                            uVar5 & 0xffffffff,param_8[0x43]);
            }
            if (local_38 == 0) {
              cVar2 = FUN_10078c4e0(param_5,local_1b8[0x12],local_1b8[0xd4],local_170,0x38);
              if (cVar2 == '\0') goto LAB_100754e82;
              local_38 = (ulong)local_150;
            }
            FUN_1008e3970("","dbgdump",0,"PRCB[%u]=0x%llx",uVar5 & 0xffffffff);
            local_40 = *(ushort *)((long)param_8 + 700) + local_38;
            if ((((param_9 != (int *)0x0) && (0x46 < *param_9)) && (param_8[0x67] != 0)) &&
               (cVar2 = FUN_10078c4e0(param_5,param_4[0x12],local_38 + param_8[0x67],&local_40,4),
               cVar2 == '\0')) {
              FUN_1008e3970("","dbgdump",0,"Failed to read context");
            }
            cVar2 = FUN_10078c4e0(param_5,param_4[0x12],local_40,param_10,0x2cc);
            if (cVar2 == '\0') {
              FUN_1008e3970("","dbgdump",0,"Failed to read context");
              local_1c8 = 0x2cc;
            }
            else {
              param_10[0x2e] = *(undefined4 *)local_1b8;
              param_10[0x2c] = *(undefined4 *)(local_1b8 + 1);
              param_10[0x2b] = *(undefined4 *)(local_1b8 + 2);
              param_10[0x2a] = *(undefined4 *)(local_1b8 + 3);
              param_10[0x29] = *(undefined4 *)(local_1b8 + 4);
              param_10[0x31] = *(undefined4 *)(local_1b8 + 5);
              param_10[0x2d] = *(undefined4 *)(local_1b8 + 6);
              param_10[0x28] = *(undefined4 *)(local_1b8 + 7);
              param_10[0x27] = *(undefined4 *)(local_1b8 + 8);
              param_10[0x2f] = (uint)*(ushort *)((long)local_1b8 + 0x5f1);
              uVar11 = (extraout_XMM0_Qb & 0xffff0000ffff0000 |
                        (ulong)*(ushort *)((long)local_1b8 + 0x5c1) |
                       (ulong)*(ushort *)((long)local_1b8 + 0x651) << 0x20) & _UNK_100b4add8;
              *(ulong *)(param_10 + 0x23) =
                   (extraout_XMM0_Qa & 0xffff0000ffff0000 |
                    (ulong)*(ushort *)((long)local_1b8 + 0x6b1) |
                   (ulong)*(ushort *)((long)local_1b8 + 0x681) << 0x20) & _DAT_100b4add0;
              *(ulong *)(param_10 + 0x25) = uVar11;
              param_10[0x32] = (uint)*(ushort *)((long)local_1b8 + 0x621);
              param_10[0x30] = *(undefined4 *)(local_1b8 + 0x11);
              *param_10 = 0x10007;
              local_1c8 = 0x2cc;
            }
            goto LAB_100754ebd;
          }
          FUN_1008e3970("","dbgdump",0,"Failed to get prcb ProcStateContext offset for vcpu%u",
                        uVar5 & 0xffffffff);
        }
        else {
          FUN_1008e3970("","dbgdump",0,"unknown bitness: %d");
        }
        uVar15 = 1;
        if (iVar9 != 0) {
          if (*(short *)(param_4 + 0x44) == 0x20) {
            *(int *)(param_6 + 0x24) = iVar9;
            pcVar8 = (char *)(param_6 + 0x820);
          }
          else {
            *(int *)(param_6 + 0x34) = iVar9;
            pcVar8 = (char *)(param_6 + 0xfb0);
          }
          _sprintf(pcVar8,"Generated dump. Actual processors number is %u. Truncated to %u.",
                   (ulong)param_3);
          (**(code **)(*param_2 + 0x88))(param_2,0);
          uVar3 = QIODevice::write((char *)param_2,param_6);
          if (uVar3 != param_7) {
            uVar15 = 0;
            FUN_1008e3970("","dbgdump",0,"can\'t write out windbg dump header");
          }
        }
        goto LAB_100755232;
      }
      cVar2 = FUN_10078c4e0(param_5,param_4[0x12],param_8[0x43] + lVar7,&local_38,8);
      if (cVar2 == '\0') {
        FUN_1008e3970("","dbgdump",0,
                      "Failed to read prcb address for vcpu%u using KiProcessorBlock=0x%llx",
                      uVar5 & 0xffffffff,param_8[0x43]);
      }
      if (local_38 == 0) {
        cVar2 = FUN_10078c4e0(param_5,local_1b8[0x12],local_1b8[0xda],local_170,0x110);
        if (cVar2 != '\0') {
          local_38 = CONCAT44(uStack_14c,local_150);
          goto LAB_100754a11;
        }
LAB_100754e82:
        FUN_1008e3970("","dbgdump",0,"Failed to read kpcr");
        local_1c8 = 0;
      }
      else {
LAB_100754a11:
        FUN_1008e3970("","dbgdump",0,"PRCB[%u]=0x%llx",uVar5 & 0xffffffff);
        local_40 = *(ushort *)((long)param_8 + 700) + local_38;
        if (((param_9 != (int *)0x0) && (0x46 < *param_9)) &&
           ((param_8[0x67] != 0 &&
            (cVar2 = FUN_10078c4e0(param_5,param_4[0x12],local_38 + param_8[0x67],&local_40,8),
            cVar2 == '\0')))) {
          FUN_1008e3970("","dbgdump",0,"Failed to read context");
        }
        cVar2 = FUN_10078c4e0(param_5,param_4[0x12],local_40,param_10,0x4d0);
        if (cVar2 == '\0') {
          FUN_1008e3970("","dbgdump",0,"Failed to read context");
          local_1c8 = 0x4d0;
        }
        else {
          *(undefined8 *)(param_10 + 0x3e) = *local_1b8;
          uVar1 = local_1b8[2];
          *(undefined8 *)(param_10 + 0x1e) = local_1b8[1];
          *(undefined8 *)(param_10 + 0x20) = uVar1;
          uVar1 = local_1b8[4];
          *(undefined8 *)(param_10 + 0x22) = local_1b8[3];
          *(undefined8 *)(param_10 + 0x24) = uVar1;
          uVar1 = local_1b8[6];
          *(undefined8 *)(param_10 + 0x26) = local_1b8[5];
          *(undefined8 *)(param_10 + 0x28) = uVar1;
          uVar1 = local_1b8[8];
          *(undefined8 *)(param_10 + 0x2a) = local_1b8[7];
          *(undefined8 *)(param_10 + 0x2c) = uVar1;
          uVar1 = local_1b8[10];
          *(undefined8 *)(param_10 + 0x2e) = local_1b8[9];
          *(undefined8 *)(param_10 + 0x30) = uVar1;
          uVar1 = local_1b8[0xc];
          *(undefined8 *)(param_10 + 0x32) = local_1b8[0xb];
          *(undefined8 *)(param_10 + 0x34) = uVar1;
          uVar1 = local_1b8[0xe];
          *(undefined8 *)(param_10 + 0x36) = local_1b8[0xd];
          *(undefined8 *)(param_10 + 0x38) = uVar1;
          *(undefined8 *)(param_10 + 0x3a) = local_1b8[0xf];
          *(undefined8 *)(param_10 + 0x3c) = local_1b8[0x10];
          *(undefined2 *)(param_10 + 0xe) = *(undefined2 *)((long)local_1b8 + 0x5f1);
          *(undefined2 *)((long)param_10 + 0x3a) = *(undefined2 *)((long)local_1b8 + 0x651);
          *(undefined2 *)(param_10 + 0xf) = *(undefined2 *)((long)local_1b8 + 0x5c1);
          *(undefined2 *)((long)param_10 + 0x3e) = *(undefined2 *)((long)local_1b8 + 0x681);
          *(undefined2 *)(param_10 + 0x10) = *(undefined2 *)((long)local_1b8 + 0x6b1);
          *(undefined2 *)((long)param_10 + 0x42) = *(undefined2 *)((long)local_1b8 + 0x621);
          param_10[0x11] = *(undefined4 *)(local_1b8 + 0x11);
          param_10[0xc] = 0x100007;
          local_1c8 = 0x4d0;
        }
      }
LAB_100754ebd:
      lVar19 = *(ushort *)((long)param_8 + 0x2f2) + local_38;
      uVar14 = (*(code *)param_5[4])(param_5,param_4[0x12],local_40,0);
      uVar11 = uVar14 - 0x50000000;
      if (uVar14 < 0xb0000000) {
        uVar11 = uVar14;
      }
      FUN_1008e3970("","dbgdump",0,"uContextPa[%u]=0x%llx",uVar5,uVar11);
      if ((uVar11 == 0) || (*param_5 < uVar11)) {
        FUN_1008e3970("","dbgdump",0,"Failed to write vcpu%u context. Invalid phy address=0x%llx",
                      uVar5 & 0xffffffff,uVar11);
      }
      else {
        (**(code **)(*param_2 + 0x88))(param_2,uVar11 + uVar16);
        lVar6 = QIODevice::write((char *)param_2,(longlong)param_10);
        if (local_1c8 != lVar6) {
          FUN_1008e3970("","dbgdump",0,"Failed to write vcpu%u context",uVar5);
        }
        cVar2 = FUN_10078c4e0(param_5,param_4[0x12],lVar19,local_60,0x20);
        if (cVar2 == '\0') {
          FUN_1008e3970("","dbgdump",0,"Failed to read special registers area");
        }
        else {
          if (*(short *)(param_4 + 0x44) == 0x40) {
            local_50 = local_1b8[0x12];
            uStack_48 = local_1b8[0x13];
          }
          else {
            if (*(short *)(param_4 + 0x44) != 0x20) goto LAB_100755170;
            local_58 = *(undefined4 *)(local_1b8 + 0x12);
            local_54 = *(undefined4 *)(local_1b8 + 0x13);
          }
          uVar14 = (*(code *)param_5[4])(param_5,param_4[0x12],lVar19,0);
          uVar11 = uVar14 - 0x50000000;
          if (uVar14 < 0xb0000000) {
            uVar11 = uVar14;
          }
          FUN_1008e3970("","dbgdump",0,"uSpecRegsPa[%u]=0x%llx",uVar5 & 0xffffffff,uVar11);
          if ((uVar11 == 0) || (*param_5 < uVar11)) {
            FUN_1008e3970("","dbgdump",0,
                          "Failed to write vcpu%u special registers. Invalid phy address=0x%llx",
                          uVar5 & 0xffffffff,uVar11);
          }
          else {
            (**(code **)(*param_2 + 0x88))(param_2,uVar11 + uVar16);
            lVar19 = QIODevice::write((char *)param_2,(longlong)local_60);
            if (lVar19 != 0x20) {
              FUN_1008e3970("","dbgdump",0,"Failed to write vcpu%u special registers",
                            uVar5 & 0xffffffff);
            }
          }
        }
      }
LAB_100755170:
      uVar5 = uVar5 + 1;
      local_1b8 = local_1b8 + 0xed;
      lVar7 = lVar7 + 8;
      lVar17 = lVar17 + 4;
    } while (uVar5 < param_3);
  }
  if (*param_8 == 0) {
    if (*(short *)(param_4 + 0x44) == 0x20) {
      uVar5 = (ulong)*(uint *)(param_6 + 0x60);
    }
    else {
      uVar5 = *(ulong *)(param_6 + 0x80);
    }
    uVar5 = (*(code *)param_5[4])(param_5,param_4[0x12],uVar5,0);
    if (uVar5 == 0) {
      pcVar8 = "Rewriting dbg data failed";
    }
    else {
      uVar11 = uVar5 - 0x50000000;
      if (uVar5 < 0xb0000000) {
        uVar11 = uVar5;
      }
      (**(code **)(*param_2 + 0x88))(param_2,uVar11 + uVar16);
      lVar7 = QIODevice::write((char *)param_2,(longlong)param_8);
      if (lVar7 == 0x360) goto LAB_100755418;
      pcVar8 = "Rewriting current process directory base failed";
    }
    FUN_1008e3970("","dbgdump",0,pcVar8);
  }
LAB_100755418:
  uVar15 = 1;
  if (((param_9 != (int *)0x0) && (*(char *)(param_10 + 0x134) != '\0')) && (param_8[10] != 0)) {
    local_178 = 0;
    lVar7 = 4;
    if (*(short *)(param_4 + 0x44) != 0x20) {
      lVar7 = 8;
    }
    cVar2 = FUN_10078c4e0(param_5,param_4[0x12],param_8[10],&local_180,lVar7);
    if ((cVar2 != '\0') && (uVar5 = local_180 - (uint)param_9[2], (uint)param_9[2] <= local_180)) {
      plVar12 = param_4 + 0x12;
      local_180 = uVar5;
      cVar2 = FUN_10078c4e0(param_5,*plVar12,*(ushort *)((long)param_8 + 0x2ae) + uVar5,&local_178,
                            lVar7);
      if ((cVar2 != '\0') && (local_178 != *plVar12)) {
        FUN_1008e3970("","dbgdump",0,"Rewriting current process Directory base (0x%llx->0x%llx)...")
        ;
        uVar5 = (*(code *)param_5[4])
                          (param_5,*plVar12,*(ushort *)((long)param_8 + 0x2ae) + local_180,0);
        if (uVar5 != 0) {
          uVar11 = uVar5 - 0x50000000;
          if (uVar5 < 0xb0000000) {
            uVar11 = uVar5;
          }
          (**(code **)(*param_2 + 0x88))(param_2,uVar11 + uVar16);
          lVar17 = QIODevice::write((char *)param_2,(longlong)plVar12);
          if (lVar7 == lVar17) goto LAB_100755232;
        }
        pcVar8 = "Rewriting current process directory base failed";
        uVar15 = 1;
LAB_100755267:
        FUN_1008e3970("","dbgdump",0,pcVar8);
      }
    }
  }
LAB_100755232:
  operator_delete__(pvVar4);
  return uVar15;
}

