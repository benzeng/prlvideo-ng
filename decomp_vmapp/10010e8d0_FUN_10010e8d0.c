
void FUN_10010e8d0(int *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_118 [2];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8 [5];
  undefined4 uStack_90;
  int iStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  uVar4 = _IOServiceMatching("AppleSMC");
  _IOServiceGetMatchingServices(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,uVar4,local_b8);
  uVar2 = _IOIteratorNext(local_b8[0] & 0xffffffff);
  _IOObjectRelease(local_b8[0] & 0xffffffff);
  _IOServiceOpen(uVar2,*(undefined4 *)PTR__mach_task_self__100ba25d0,0,0x1011c37a4);
  _IOObjectRelease(uVar2);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  *(undefined1 *)((long)param_1 + 0x2e) = 0;
  if (*param_1 < 0) {
    local_118[0] = param_1[1];
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_b8[4] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    _uStack_90 = CONCAT44(*param_1,0x80000);
    local_110 = 0x50;
    iVar3 = _IOConnectCallStructMethod(DAT_1011c37a0._4_4_,2,local_b8,0x50,&local_108,&local_110);
    if (iVar3 != 0) goto LAB_10010ea8c;
    local_118[0] = local_118[0] & 0xffffff00;
    _sprintf((char *)local_118,"%c%c%c%c",(uint)local_108 >> 0x18,(ulong)((uint)local_108 >> 0x10),
             (uint)local_108 >> 8);
  }
  iVar3 = FUN_10010e710(local_118,&local_68);
  if (iVar3 == 0) {
    *(char *)((long)param_1 + 0x2e) = (char)uStack_60;
    *(undefined1 *)(param_1 + 2) = local_68._4_1_;
    param_1[1] = (int)local_68;
    _memcpy((void *)((long)param_1 + 9),(void *)((long)&local_58 + 1),uStack_60 & 0xffffffff);
    *(undefined1 *)((long)param_1 + 0x2d) = (undefined1)local_58;
    *(undefined4 *)((long)param_1 + 0x29) = uStack_60._4_4_;
  }
LAB_10010ea8c:
  _IOServiceClose(DAT_1011c37a0._4_4_);
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

