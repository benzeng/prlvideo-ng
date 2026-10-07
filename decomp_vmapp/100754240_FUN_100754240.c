
undefined8
FUN_100754240(undefined8 param_1,undefined4 param_2,undefined8 *param_3,ulong *param_4,
             undefined8 *param_5,ushort *param_6,long param_7,void *param_8,int param_9)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 local_348;
  undefined1 local_340 [44];
  ushort local_314;
  undefined4 local_dc;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_5 = 0x3436554445474150;
  param_5[0x1f8] = 0x75642079726f6d65;
  param_5[0x1f7] = 0x6d206c6c75662064;
  param_5[0x1f6] = 0x65746172656e6547;
  *(undefined1 *)((long)param_5 + 0xfca) = 0;
  *(undefined2 *)(param_5 + 0x1f9) = 0x706d;
  cVar3 = FUN_100753620(param_1,param_3,param_4,param_6,&local_348);
  if (cVar3 == '\0') {
    pcVar6 = "Failed to find DBG version block";
  }
  else {
    cVar3 = FUN_1007538c0(param_1,param_3,param_4,param_6,param_7,local_348,param_5 + 0x10,
                          (long)param_8 + 0x4d0);
    if (cVar3 == '\0') {
      pcVar6 = "Failed to read debugger data";
    }
    else {
      cVar3 = FUN_10078c4e0(param_4,param_3[0x12],*(undefined8 *)(param_7 + 0xc0),param_5 + 3,8);
      if (cVar3 == '\0') {
        FUN_1008e3970("","dbgdump",0,"Failed to read MmPfnDatabase address. Ignored");
      }
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_48 = 0;
      cVar3 = FUN_10078c4e0(param_4,param_3[0x12],*(undefined8 *)(param_7 + 0x88),&local_68,0x28);
      if (cVar3 == '\0') {
        FUN_1008e3970("","dbgdump",0,"Failed to read KiBugcheckData. Ignored");
      }
      cVar3 = FUN_10078c4e0(param_4,param_3[0x12],0xfffff78000000000,local_340,0x2d4);
      if (cVar3 != '\0') {
        *(undefined8 *)((long)param_8 + 0xf8) = *param_3;
        uVar5 = param_3[2];
        *(undefined8 *)((long)param_8 + 0x78) = param_3[1];
        *(undefined8 *)((long)param_8 + 0x80) = uVar5;
        uVar5 = param_3[4];
        *(undefined8 *)((long)param_8 + 0x88) = param_3[3];
        *(undefined8 *)((long)param_8 + 0x90) = uVar5;
        uVar5 = param_3[6];
        *(undefined8 *)((long)param_8 + 0x98) = param_3[5];
        *(undefined8 *)((long)param_8 + 0xa0) = uVar5;
        uVar5 = param_3[8];
        *(undefined8 *)((long)param_8 + 0xa8) = param_3[7];
        *(undefined8 *)((long)param_8 + 0xb0) = uVar5;
        uVar5 = param_3[10];
        *(undefined8 *)((long)param_8 + 0xb8) = param_3[9];
        *(undefined8 *)((long)param_8 + 0xc0) = uVar5;
        uVar5 = param_3[0xc];
        *(undefined8 *)((long)param_8 + 200) = param_3[0xb];
        *(undefined8 *)((long)param_8 + 0xd0) = uVar5;
        uVar5 = param_3[0xe];
        *(undefined8 *)((long)param_8 + 0xd8) = param_3[0xd];
        *(undefined8 *)((long)param_8 + 0xe0) = uVar5;
        *(undefined8 *)((long)param_8 + 0xe8) = param_3[0xf];
        *(undefined8 *)((long)param_8 + 0xf0) = param_3[0x10];
        *(undefined2 *)((long)param_8 + 0x38) = *(undefined2 *)((long)param_3 + 0x5f1);
        *(undefined2 *)((long)param_8 + 0x3a) = *(undefined2 *)((long)param_3 + 0x651);
        *(undefined2 *)((long)param_8 + 0x3c) = *(undefined2 *)((long)param_3 + 0x5c1);
        *(undefined2 *)((long)param_8 + 0x3e) = *(undefined2 *)((long)param_3 + 0x681);
        *(undefined2 *)((long)param_8 + 0x40) = *(undefined2 *)((long)param_3 + 0x6b1);
        *(undefined2 *)((long)param_8 + 0x42) = *(undefined2 *)((long)param_3 + 0x621);
        *(undefined4 *)((long)param_8 + 0x44) = *(undefined4 *)(param_3 + 0x11);
        *(undefined4 *)((long)param_8 + 0x30) = 0x100007;
        param_5[2] = param_3[0x12];
        *(undefined4 *)((long)param_5 + 0x34) = param_2;
        uVar2 = *param_4;
        uVar4 = uVar2 >> 0xc;
        param_5[0x12] = uVar4;
        param_5[0x13] = 0;
        if (uVar2 < 0xb0000001) {
          param_5[0x11] = 1;
        }
        else {
          param_5[0x11] = 2;
          param_5[0x15] = 0x100000;
          param_5[0x16] = uVar2 - 0xb0000000 >> 0xc;
          uVar4 = 0xb0000;
        }
        puVar1 = param_5 + 0x1f6;
        param_5[0x14] = uVar4;
        _memcpy(param_5 + 0x69,param_8,0x4d2);
        if (param_9 == 3) {
          param_5[0x1f8] = 0x75642079726f6d65;
          param_5[0x1f7] = 0x6d20696e696d2064;
          *puVar1 = 0x65746172656e6547;
          *(undefined1 *)((long)param_5 + 0xfca) = 0;
          *(undefined2 *)(param_5 + 0x1f9) = 0x706d;
          *(undefined4 *)(param_5 + 499) = 4;
          *(undefined4 *)(param_5 + 0x207) = 0xcff;
          param_5[500] = 0x40000;
          *(undefined4 *)(param_5 + 0x209) = 0;
          lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
        }
        else {
          lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
          if (param_9 == 2) {
            param_5[0x1f8] = 0x2079726f6d656d20;
            param_5[0x1f7] = 0x6c656e72656b2064;
            *puVar1 = 0x65746172656e6547;
            *(undefined1 *)((long)param_5 + 0xfcc) = 0;
            *(undefined4 *)(param_5 + 0x1f9) = 0x706d7564;
            *(undefined4 *)(param_5 + 499) = 2;
          }
          else {
            if (param_9 != 1) goto LAB_100754712;
            param_5[0x1f8] = 0x75642079726f6d65;
            param_5[0x1f7] = 0x6d206c6c75662064;
            *puVar1 = 0x65746172656e6547;
            *(undefined1 *)((long)param_5 + 0xfca) = 0;
            *(undefined2 *)(param_5 + 0x1f9) = 0x706d;
            *(undefined4 *)(param_5 + 499) = 1;
          }
          param_5[500] = *param_4;
        }
LAB_100754712:
        *(uint *)(param_5 + 1) = (uint)*param_6;
        *(uint *)((long)param_5 + 0xc) = (uint)param_6[1];
        *(undefined1 *)((long)param_5 + 0x104d) = *(undefined1 *)((long)param_6 + 5);
        param_5[4] = *(undefined8 *)(param_6 + 0xc);
        param_5[5] = *(undefined8 *)(param_7 + 0x50);
        *(undefined4 *)(param_5 + 7) = (undefined4)local_68;
        param_5[8] = uStack_60;
        param_5[9] = local_58;
        *(undefined4 *)(param_5 + 10) = (undefined4)uStack_50;
        *(undefined4 *)((long)param_5 + 0x54) = uStack_50._4_4_;
        *(undefined4 *)(param_5 + 0xb) = (undefined4)local_48;
        *(undefined4 *)((long)param_5 + 0x5c) = local_48._4_4_;
        *(uint *)(param_5 + 6) = (uint)local_314;
        *(undefined4 *)(param_5 + 0x208) = local_dc;
        *(undefined4 *)((long)param_5 + 0x1044) = local_70;
        uVar5 = 0;
        goto LAB_10075457d;
      }
      pcVar6 = "Failed to read User Shared data";
    }
  }
  FUN_1008e3970("","dbgdump",0,pcVar6);
  uVar5 = 0xffffffff;
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10075457d:
  if (lVar7 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

