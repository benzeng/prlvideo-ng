
size_t FUN_1004116e0(void *param_1,uint param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  undefined1 local_68 [7];
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
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
  _local_68 = CONCAT17(*(undefined1 *)(param_5 + 0x6a),
                       CONCAT16(0,CONCAT24(CONCAT11((char)*(undefined2 *)(param_5 + 0x68),
                                                    (char)((ushort)*(undefined2 *)(param_5 + 0x68)
                                                          >> 8)),0x3c00b100)));
  uStack_60 = 0;
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
    _memcpy(param_1,local_68,sVar3);
  }
  if (lVar1 == local_20) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

