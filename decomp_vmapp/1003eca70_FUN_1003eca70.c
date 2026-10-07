
ulong FUN_1003eca70(long *param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  size_t sVar8;
  int local_b4;
  undefined1 local_b0 [12];
  byte local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined1 local_4c;
  byte local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar4 = *(uint *)(param_1 + 0x19), uVar4 == 0xffffffff)) {
    uVar4 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                           (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
  }
  if ((*(byte *)(param_1[0xb] + 2) & 0x20) == 0) {
LAB_1003ecc42:
                    /* WARNING: Could not recover jumptable at 0x0001003ecc6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
    return uVar7;
  }
  bVar1 = *(byte *)(param_1[0xb] + 3);
  uVar6 = 0x18;
  if (1 < bVar1 - 2) {
    if (bVar1 != 1) goto LAB_1003ecc42;
    cVar3 = (**(code **)(*(long *)param_1[0x27] + 0x98))();
    uVar6 = 0x10;
    if (cVar3 != '\0') {
      (**(code **)(*(long *)param_1[0x27] + 0x60))((long *)param_1[0x27],param_1[0x26] * 0x60,0);
      cVar3 = (**(code **)(*(long *)param_1[0x27] + 0x30))
                        ((long *)param_1[0x27],local_b0,0x60,&local_b4);
      if ((local_b4 == 0x60) && (cVar3 == '\x01')) {
        local_4c = 1;
        local_4b = local_a4 << 4 | local_a4 >> 4;
        local_4a = local_a3;
        local_49 = local_a2;
        local_48 = 0;
        local_47 = local_9f;
        local_46 = local_a0;
        local_45 = local_a1;
        local_44 = 0;
        local_43 = local_9b;
        local_42 = local_9c;
        local_41 = local_9d;
      }
    }
  }
  sVar2 = (short)uVar4;
  if (uVar6 <= (uVar4 & 0xffff)) {
    sVar2 = (short)uVar6;
  }
  uVar5 = (**(code **)(*param_1 + 0x278))(param_1,sVar2,(ulong)(uVar4 & 0xffff),sVar2);
  local_50 = 0;
  local_4f = 0x15;
  if ((int)param_1[0x12] != 0) {
    local_4f = 0x11;
  }
  uVar6 = (int)(short)uVar6 - 4U & 0xffff;
  local_4e = CONCAT11((char)uVar6,(char)(uVar6 >> 8));
  sVar8 = 0x18;
  if ((uVar4 & 0xffff) < 0x19) {
    sVar8 = (ulong)(uVar4 & 0xffff);
  }
  _memcpy((void *)param_1[9],&local_50,sVar8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return (ulong)uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

