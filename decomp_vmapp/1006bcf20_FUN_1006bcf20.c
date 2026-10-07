
int FUN_1006bcf20(long *param_1,long param_2)

{
  long lVar1;
  undefined2 *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_2048 [2];
  undefined1 *local_2040;
  undefined1 local_2038 [8192];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_2048[0] = 0;
  local_2048[1] = 0;
  local_2040 = local_2038;
  uVar6 = *(uint *)(param_2 + 0x1c);
  uVar4 = *(uint *)(param_2 + 0x20);
  iVar7 = 0;
  local_38 = lVar1;
  if (uVar4 != uVar6) {
    iVar7 = 0;
    do {
      puVar2 = (undefined2 *)(local_2040 + 10);
      uVar3 = 0;
      do {
        *(undefined1 *)(puVar2 + -1) = 2;
        *(ulong *)(puVar2 + -5) = param_2 + 0x40a02 + (ulong)(uVar6 & 0x3ffff);
        uVar5 = *(ushort *)(param_2 + 0x40a00 + (ulong)(uVar6 & 0x3ffff)) & 0x3fff;
        *puVar2 = (short)uVar5;
        uVar6 = (uVar5 + 0x11 & 0x7ff0) + uVar6;
        uVar3 = uVar3 + 1;
        if (0x1ff < uVar3) break;
        puVar2 = puVar2 + 8;
      } while (uVar6 != uVar4);
      local_2048[0] = (int)uVar3;
      (**(code **)(*param_1 + 0xa0))(param_1,local_2048);
      *(uint *)(param_2 + 0x1c) = uVar6;
      iVar7 = iVar7 + local_2048[0];
      uVar4 = *(uint *)(param_2 + 0x20);
    } while (uVar4 != uVar6);
    lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

