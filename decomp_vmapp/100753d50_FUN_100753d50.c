
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100753d50(undefined8 param_1,undefined4 param_2,undefined4 *param_3,ulong *param_4,
             undefined8 *param_5,ushort *param_6,long param_7,undefined4 *param_8,int param_9)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  ulong extraout_XMM0_Qa;
  ulong extraout_XMM0_Qb;
  ulong uVar5;
  undefined8 local_340;
  undefined4 local_338 [2];
  undefined1 local_330 [44];
  ushort local_304;
  undefined4 local_cc;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_5 = 0x504d554445474150;
  cVar1 = FUN_100753620(param_1,param_3,param_4,param_6,&local_340);
  if (cVar1 == '\0') {
    pcVar3 = "Failed to find DBG version block";
  }
  else {
    cVar1 = FUN_1007538c0(param_1,param_3,param_4,param_6,param_7,local_340,local_338,
                          param_8 + 0x134);
    if (cVar1 == '\0') {
      pcVar3 = "Failed to read debugger data";
    }
    else {
      local_58 = (undefined1  [16])0x0;
      local_48 = 0;
      cVar1 = FUN_10078c4e0(param_4,*(undefined8 *)(param_3 + 0x24),*(undefined8 *)(param_7 + 0x88),
                            local_58,0x14);
      if (cVar1 == '\0') {
        FUN_1008e3970("","dbgdump",0,"Failed to read KiBugcheckData. Ignored");
      }
      cVar1 = FUN_10078c4e0(param_4,*(undefined8 *)(param_3 + 0x24),0xffdf0000,local_330,0x2d4);
      if (cVar1 != '\0') {
        param_8[0x2e] = *param_3;
        param_8[0x2c] = param_3[2];
        param_8[0x2b] = param_3[4];
        param_8[0x2a] = param_3[6];
        param_8[0x29] = param_3[8];
        param_8[0x31] = param_3[10];
        param_8[0x2d] = param_3[0xc];
        param_8[0x28] = param_3[0xe];
        param_8[0x27] = param_3[0x10];
        param_8[0x2f] = (uint)*(ushort *)((long)param_3 + 0x5f1);
        uVar5 = (extraout_XMM0_Qb & 0xffff0000ffff0000 | (ulong)*(ushort *)((long)param_3 + 0x5c1) |
                (ulong)*(ushort *)((long)param_3 + 0x651) << 0x20) & _UNK_100b4add8;
        *(ulong *)(param_8 + 0x23) =
             (extraout_XMM0_Qa & 0xffff0000ffff0000 | (ulong)*(ushort *)((long)param_3 + 0x6b1) |
             (ulong)*(ushort *)((long)param_3 + 0x681) << 0x20) & _DAT_100b4add0;
        *(ulong *)(param_8 + 0x25) = uVar5;
        param_8[0x32] = (uint)*(ushort *)((long)param_3 + 0x621);
        param_8[0x30] = param_3[0x22];
        *param_8 = 0x10007;
        *(undefined4 *)(param_5 + 2) = param_3[0x24];
        *(byte *)((long)param_5 + 0x5c) = *(byte *)(param_3 + 0x26) >> 5 & 1;
        *(undefined4 *)((long)param_5 + 0x24) = param_2;
        *(undefined1 *)((long)param_5 + 0x3c) = 0;
        uVar5 = *param_4;
        uVar4 = (undefined4)(uVar5 >> 0xc);
        *(undefined4 *)(param_5 + 0xd) = uVar4;
        *(undefined4 *)((long)param_5 + 0x6c) = 0;
        if (uVar5 < 0xb0000001) {
          *(undefined4 *)((long)param_5 + 100) = 1;
        }
        else {
          *(undefined4 *)((long)param_5 + 100) = 2;
          *(undefined4 *)((long)param_5 + 0x74) = 0x100000;
          *(int *)(param_5 + 0xf) = (int)(uVar5 + 0xfff50000000 >> 0xc);
          uVar4 = 0xb0000;
        }
        *(undefined4 *)(param_5 + 0xe) = uVar4;
        if (param_9 == 3) {
          param_5[0x106] = 0x75642079726f6d65;
          param_5[0x105] = 0x6d20696e696d2064;
          param_5[0x104] = 0x65746172656e6547;
          *(undefined1 *)((long)param_5 + 0x83a) = 0;
          *(undefined2 *)(param_5 + 0x107) = 0x706d;
          *(undefined4 *)(param_5 + 0x1f1) = 4;
          *(undefined4 *)((long)param_5 + 0xf8c) = 0xcff;
          param_5[500] = 0x40000;
          *(undefined4 *)((long)param_5 + 0xf9c) = 0;
        }
        else {
          if (param_9 == 2) {
            param_5[0x106] = 0x2079726f6d656d20;
            param_5[0x105] = 0x6c656e72656b2064;
            param_5[0x104] = 0x65746172656e6547;
            *(undefined1 *)((long)param_5 + 0x83c) = 0;
            *(undefined4 *)(param_5 + 0x107) = 0x706d7564;
            *(undefined4 *)(param_5 + 0x1f1) = 2;
          }
          else {
            if (param_9 != 1) goto LAB_10075418c;
            param_5[0x106] = 0x75642079726f6d65;
            param_5[0x105] = 0x6d206c6c75662064;
            param_5[0x104] = 0x65746172656e6547;
            *(undefined1 *)((long)param_5 + 0x83a) = 0;
            *(undefined2 *)(param_5 + 0x107) = 0x706d;
            *(undefined4 *)(param_5 + 0x1f1) = 1;
          }
          param_5[500] = *param_4;
        }
LAB_10075418c:
        _memcpy(param_5 + 100,param_8,0x4d2);
        *(uint *)(param_5 + 1) = (uint)*param_6;
        *(uint *)((long)param_5 + 0xc) = (uint)param_6[1];
        *(undefined1 *)((long)param_5 + 0x5d) = *(undefined1 *)((long)param_6 + 5);
        *(undefined4 *)(param_5 + 0xc) = local_338[0];
        *(undefined4 *)(param_5 + 3) = *(undefined4 *)(param_6 + 0xc);
        *(undefined4 *)((long)param_5 + 0x1c) = *(undefined4 *)(param_7 + 0x50);
        *(undefined4 *)((long)param_5 + 0x14) = *(undefined4 *)(param_7 + 0xc0);
        *(int *)(param_5 + 5) = local_58._0_4_;
        *(int *)((long)param_5 + 0x2c) = local_58._4_4_;
        *(int *)(param_5 + 6) = local_58._8_4_;
        *(int *)((long)param_5 + 0x34) = local_58._12_4_;
        *(undefined4 *)(param_5 + 7) = local_48;
        *(uint *)(param_5 + 4) = (uint)local_304;
        *(undefined4 *)((long)param_5 + 0xf94) = local_cc;
        *(undefined4 *)(param_5 + 499) = local_60;
        uVar2 = 0;
        goto LAB_100754001;
      }
      pcVar3 = "Failed to read USER_SHARED_DATA";
    }
  }
  FUN_1008e3970("","dbgdump",0,pcVar3);
  uVar2 = 0xffffffff;
LAB_100754001:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

