
ulong FUN_1003341e0(long param_1,ulong param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar7 = (uint)*(ushort *)(param_2 + 2) * 8 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar3 = uVar7 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar3)) {
    puVar2 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar2 = param_2;
    *(uint *)(puVar2 + 1) = uVar7;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar2,&PTR_vtable_101117a68,0);
  }
  if (*(ushort *)(param_2 + 2) != 0) {
    piVar9 = (int *)(param_2 + 4);
    iVar5 = 0;
    do {
      iVar1 = *piVar9;
      uVar7 = piVar9[1];
      if ((iVar1 < 0x100) && (1 < iVar1 - 0xcfU || uVar7 - 1 < 0xf)) {
        piVar6 = piVar9;
        if (((iVar1 == 0x13) || (uVar8 = 1, iVar1 == 0xcf)) &&
           (uVar8 = 1, (uVar7 & 0xfffffffe) == 0xc)) {
          local_48 = iVar1;
          local_44 = (uVar7 != 0xc) + 5;
          local_40 = 0xd0;
          if (iVar1 == 0x13) {
            local_40 = 0x14;
          }
          local_3c = (uVar7 == 0xc) + 5;
          uVar8 = 2;
          piVar6 = &local_48;
        }
        uVar10 = 0;
        do {
          (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                    (*(long **)(param_1 + 0xbbb8),piVar6[uVar10 * 2],piVar6[uVar10 * 2 + 1]);
          if (*(uint *)(param_1 + 0x160) < 0x70000) {
            FUN_100339ed0(param_1,piVar6[uVar10 * 2],piVar6[uVar10 * 2 + 1]);
          }
          iVar4 = 0x121;
          if (piVar6[uVar10 * 2] == 0x29) {
            do {
              (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x60))
                        (*(long **)(param_1 + 0xbbb8),iVar4,piVar6[uVar10 * 2 + 1] == 0);
              iVar4 = iVar4 + 0x40;
            } while (iVar4 != 0x621);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar8);
        if ((iVar1 == 0x3e) && (uVar7 == 0)) {
          FUN_100362370(*(undefined8 *)(param_1 + 48000),param_1);
        }
      }
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 2;
    } while (iVar5 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

