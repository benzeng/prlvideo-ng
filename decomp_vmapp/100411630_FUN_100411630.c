
size_t FUN_100411630(void *param_1,uint param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  local_68 = 0x3c00b000;
  sVar3 = 0x40;
  if (param_2 < 0x41) {
    sVar3 = (size_t)param_2;
  }
  local_20 = lVar1;
  if (param_2 < 4) {
    uVar2 = FUN_1004103f0(0x52400,param_3,param_4,0);
    sVar3 = (size_t)uVar2;
  }
  else {
    if (*(short *)(param_5 + 0x68) == 1) {
      uVar2 = *(uint *)(param_5 + 0x6c);
      local_58 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                        uVar2 << 0x18) << 0x20;
      uVar2 = *(uint *)(param_5 + 0x70);
      uStack_50 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18);
    }
    _memcpy(param_1,&local_68,sVar3);
  }
  if (lVar1 == local_20) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

