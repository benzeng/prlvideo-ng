
/* WARNING: Removing unreachable block (ram,0x000100b4db04) */

undefined8 FUN_100b4daa0(ulong param_1,ulong param_2,uint param_3,uint param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_38 = lVar1;
  cVar2 = FUN_100b4b7b0(param_1,&local_78);
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_net",0,"doIPv4ioctl: failed to get bsd-name for %d",param_1 & 0xffffffff);
    uVar5 = 0x80000009;
  }
  else {
    iVar3 = _socket(2,2,0);
    uVar5 = 0x80004001;
    if (-1 < iVar3) {
      local_68 = CONCAT62(local_68._2_6_,0x210);
      local_68 = CONCAT44(param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                          param_3 << 0x18,(undefined4)local_68);
      if (param_2 == 0x8040691a) {
        param_3 = ~param_4 | param_3;
        local_48 = CONCAT62(local_48._2_6_,0x210);
        local_48 = CONCAT44(param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
                            param_4 << 0x18,(undefined4)local_48);
        local_58 = CONCAT62(local_58._2_6_,0x210);
        local_58 = CONCAT44(param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                            param_3 << 0x18,(undefined4)local_58);
      }
      uVar5 = 0;
      iVar4 = _ioctl(iVar3,param_2,&local_78);
      if (iVar4 < 0) {
        FUN_100b475f0();
        uVar5 = FUN_100b47dd0();
        FUN_100df99c0("","prl_net",0,"doIPv4ioctl: cmd %ld failed for %d: err %ld",param_2,
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

