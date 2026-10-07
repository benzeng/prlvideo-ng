
void FUN_100296740(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  ushort local_238;
  undefined1 local_236;
  undefined1 local_235;
  undefined1 local_234;
  undefined1 local_233;
  undefined1 local_232;
  undefined1 local_231;
  undefined1 local_230;
  undefined1 local_22f;
  undefined1 local_22e;
  undefined1 local_22c;
  undefined1 local_22b;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  if ((*(char *)(param_2 + 0x3d) == '\x10') && (uVar1 = *(uint *)(param_1 + 0x1010), uVar1 != 0)) {
    iVar6 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    if (uVar1 == 0) {
      iVar6 = -1;
    }
    *(uint *)(param_1 + 0x1010) = *(uint *)(param_1 + 0x1010) & ~(1 << ((byte)iVar6 & 0x1f));
    ___bzero(&local_238,0x200);
    local_236 = 0x41;
    local_235 = 0x40;
    uVar5 = (ushort)iVar6 & 0x1f;
    local_238 = uVar5;
    if ((iVar6 < 0) || (lVar3 = *(long *)(param_1 + 0xf0 + (long)iVar6 * 0x78), lVar3 == 0)) {
      FUN_1008e3970("","LocalDevices",0,"NCQ error invalid tag %d",iVar6);
      local_238 = uVar5 | 0x80;
    }
    else {
      local_234 = *(undefined1 *)(lVar3 + 4);
      local_233 = *(undefined1 *)(lVar3 + 5);
      local_232 = *(undefined1 *)(lVar3 + 6);
      local_230 = *(undefined1 *)(lVar3 + 8);
      local_22e = *(undefined1 *)(lVar3 + 10);
      local_22f = *(undefined1 *)(lVar3 + 9);
      local_22c = *(undefined1 *)(lVar3 + 0xc);
      local_22b = *(undefined1 *)(lVar3 + 0xd);
      local_231 = *(undefined1 *)(lVar3 + 7);
    }
    FUN_100298a20(&local_238,0x1ff);
    *(undefined2 *)(param_2 + 0x38) = 0x40;
    uVar4 = 0x200;
  }
  else {
    *(undefined1 *)(param_2 + 0x3c) = 1;
    *(undefined2 *)(param_2 + 0x38) = 0x4041;
    uVar4 = 0;
  }
  (**(code **)(param_2 + 0x50))(param_2,uVar4);
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

