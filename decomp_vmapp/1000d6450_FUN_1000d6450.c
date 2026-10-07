
bool FUN_1000d6450(char *param_1,undefined4 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = lVar1;
  if (param_3 == 0) {
    bVar6 = false;
  }
  else {
    local_58 = 0x6974704f;
    local_4c = 0;
    local_54 = param_2;
    local_50 = param_4;
    lVar2 = QIODevice::write(param_1,(longlong)&local_58);
    bVar6 = false;
    uVar5 = 0;
    if (lVar2 == 0x10) {
      uVar3 = QIODevice::write(param_1,param_3);
      if ((param_4 & 0xf) != 0) {
        uVar5 = 0x10 - (param_4 & 0xf);
        uVar4 = QIODevice::write(param_1,(longlong)&local_48);
        if (uVar5 != uVar4) {
          bVar6 = false;
          goto LAB_1000d64fb;
        }
        uVar3 = uVar3 + uVar5;
      }
      bVar6 = uVar3 == uVar5 + param_4;
    }
  }
LAB_1000d64fb:
  if (lVar1 == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

