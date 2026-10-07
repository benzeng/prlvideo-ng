
undefined8 FUN_1002e7770(long param_1)

{
  char cVar1;
  long lVar2;
  char cVar4;
  undefined8 uVar3;
  ulong uVar5;
  char *pcVar6;
  size_t sVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  long local_20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  cVar4 = (char)((ushort)*(undefined2 *)(param_1 + 0x132) >> 8);
  uVar5 = (ulong)CONCAT11((char)*(undefined2 *)(param_1 + 0x132),cVar4);
  *(ulong *)(param_1 + 0x168) = uVar5;
  uVar3 = 7;
  local_20 = lVar2;
  if ((*(uint *)(param_1 + 0x128) < uVar5) || (-1 < *(char *)(param_1 + 300))) goto LAB_1002e784d;
  if (*(char *)(param_1 + 0x130) == '\0') {
    cVar1 = *(char *)(param_1 + 0x131);
    if (cVar1 == '\0') {
      local_48 = (ulong)*(byte *)(param_1 + 0x181) << 0xf | 0x2040000;
      if (3 < uVar5) {
        local_48 = (ulong)CONCAT14(cVar4 + -5,(undefined4)local_48);
      }
      uStack_40 = 0x2020202020202020;
      local_38 = *(undefined8 *)(param_1 + 0xdc);
      uStack_30 = *(undefined8 *)(param_1 + 0xe4);
      local_28 = *(undefined4 *)(param_1 + 0xd4);
      sVar7 = 0x24;
      if (uVar5 < 0x24) {
        sVar7 = uVar5;
      }
      *(size_t *)(param_1 + 0x168) = sVar7;
      _memcpy(*(void **)(param_1 + 0x50),&local_48,sVar7);
      uVar3 = 2;
      goto LAB_1002e784d;
    }
    if (0 < DAT_1011c568c) {
      pcVar6 = "[MSC] Inquiry: invalid page code: 0x%02X";
      goto LAB_1002e7824;
    }
  }
  else if (0 < DAT_1011c568c) {
    cVar1 = *(char *)(param_1 + 0x131);
    pcVar6 = "[MSC] Inquiry: EVPD 0x%02X";
LAB_1002e7824:
    FUN_1008e3970("","USB",0,pcVar6,cVar1);
  }
  FUN_1004103f0(0x52400,param_1 + 0x150,0x12,0);
  uVar3 = 5;
LAB_1002e784d:
  if (lVar2 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

