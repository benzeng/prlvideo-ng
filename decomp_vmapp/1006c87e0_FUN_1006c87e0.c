
/* WARNING: Removing unreachable block (ram,0x0001006c8867) */

undefined8 FUN_1006c87e0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
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
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_38 = lVar1;
  cVar2 = FUN_1006c6360(param_1,&local_b8);
  if (cVar2 == '\0') {
    FUN_1008e3970("","prl_net",0,"doIPv6ioctl: failed to get bsd-name for %d",param_1 & 0xffffffff);
    uVar5 = 0x80000009;
  }
  else {
    iVar3 = _socket(0x1e,2,0);
    uVar5 = 0x80004001;
    if (-1 < iVar3) {
      local_a8 = CONCAT62(local_a8._2_6_,0x1e1c);
      uStack_a0 = *param_3;
      local_98 = param_3[1];
      if (param_2 == 0x8080691a) {
        uStack_70 = CONCAT62(uStack_70._2_6_,0x1e1c);
        local_68 = *param_4;
        uStack_60 = param_4[1];
        uStack_40 = 0xffffffffffffffff;
      }
      uVar5 = 0;
      iVar4 = _ioctl(iVar3,param_2,&local_b8);
      if (iVar4 < 0) {
        FUN_1006c21a0();
        uVar5 = FUN_1006c2980();
        FUN_1008e3970("","prl_net",0,"doIPv6ioctl, cmd %ld failed for %d: err %ld",param_2,
                      param_1 & 0xffffffff,uVar5);
        uVar5 = 0x80004001;
      }
      _close(iVar3);
    }
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

