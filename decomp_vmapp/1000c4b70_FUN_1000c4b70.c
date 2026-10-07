
void FUN_1000c4b70(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char local_a8 [112];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1008e3970("","vm",0,"DumpHashList for group %s and hash id 0x%x",
                (&PTR_s_VMM_100ba8d90)[param_2],param_3);
  lVar9 = (ulong)param_2 * 0x100 + param_1;
  lVar1 = *(long *)(lVar9 + 0x38 + (ulong)param_3 * 8);
  lVar8 = *(long *)(lVar1 + 8);
  if (lVar8 != lVar1) {
    do {
      plVar2 = *(long **)(lVar8 + 0x10);
      uVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
      uVar6 = (**(code **)(*plVar2 + 0x30))(plVar2);
      uVar7 = (**(code **)(*plVar2 + 0x28))(plVar2);
      iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      iVar4 = (**(code **)(*plVar2 + 0x30))(plVar2);
      _sprintf(local_a8,"sp=%p 0x%llx-0x%llx (hash 0x%x-0x%x) ",plVar2,uVar5,uVar6,
               (ulong)((uint)(uVar7 >> 0xe) & 0x1f),(uint)(iVar3 + 0x7ffff + iVar4) >> 0xe & 0x1f);
      FUN_1000c4ce0(param_1,plVar2,local_a8);
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != *(long *)(lVar9 + 0x38 + (ulong)param_3 * 8));
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

