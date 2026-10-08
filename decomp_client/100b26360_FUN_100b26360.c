
void FUN_100b26360(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  undefined8 in_stack_ffffffffffffffb8;
  long lVar10;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
  plVar1 = *(long **)(param_1 + 0x10);
  uVar9 = *(uint *)(param_1 + 8) & 0xfc;
  if (uVar9 == 0) {
    if (3 < DAT_10230ffd0) {
      lVar10 = plVar1[0x115];
      FUN_100df99c0("CountReclaimed","dimg",4,"[%p] Range [%u, %llu[",plVar1[0x113],
                    *(undefined4 *)((long)plVar1 + 0x1c),lVar10);
      uVar11 = (undefined4)((ulong)lVar10 >> 0x20);
    }
    if (plVar1[0x115] == plVar1[0x114]) {
                    /* WARNING: Could not recover jumptable at 0x000100b2646b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar1[6])(plVar1,0);
      return;
    }
    cVar3 = (*(code *)plVar1[6])(plVar1,0x80021017,plVar1[7]);
    if (cVar3 != '\0') {
      lVar10 = *(long *)(plVar1[0x113] + 0x20);
      *(undefined4 *)(plVar1 + 4) = 0;
      iVar4 = (**(code **)(*plVar1 + 8))(plVar1);
      iVar5 = (**(code **)*plVar1)(plVar1);
      uVar9 = iVar5 + iVar4;
      *(uint *)((long)plVar1 + 0x1c) = uVar9;
      iVar5 = (**(code **)(*plVar1 + 8))(plVar1);
      iVar4 = *(int *)(lVar10 + 8);
      plVar7 = (long *)plVar1[0x113];
      lVar8 = *plVar7;
      plVar1[8] = ((ulong)(uint)(iVar5 * iVar4) + *(long *)(lVar10 + 0x18) & 0xfffffffffffff000) /
                  *(ulong *)(*(long *)(lVar8 + -0x18) + 0x38 + (long)plVar7);
      *(undefined4 *)(plVar1 + 3) = 0x1000;
      lVar2 = plVar1[0x115];
      plVar1[0x115] = lVar2 + 0x1000U;
      uVar6 = plVar1[0x114];
      if (uVar6 < lVar2 + 0x1000U) {
        plVar1[0x115] = uVar6;
        if (uVar6 < uVar9) {
          FUN_100df99c0("CountReclaimed","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "cntx->m_BatEntryCount >= startIdx","StructuredBase.cpp",
                        CONCAT44(uVar11,0x9a1),"DioCompletionCb");
          plVar7 = (long *)plVar1[0x113];
          uVar6 = plVar1[0x114];
          iVar4 = *(int *)(lVar10 + 8);
          lVar8 = *plVar7;
        }
        iVar5 = (int)uVar6 - uVar9;
        *(int *)(plVar1 + 3) = iVar5;
        iVar5 = iVar5 * iVar4;
        *(int *)(plVar1 + 0x14) = iVar5;
        *(int *)(plVar1 + 0x12) = iVar5;
      }
      plVar7 = *(long **)(*(long *)(lVar8 + -0x18) + 8 + (long)plVar7);
                    /* WARNING: Could not recover jumptable at 0x000100b265a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0xb8))(plVar7,plVar1 + 8);
      return;
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("CountReclaimed","dimg",3,"[%p] Scan terminated by callback",plVar1[0x113]);
    }
  }
  else {
    FUN_100df99c0("CountReclaimed","dimg",0,"Error: process error, req=%p dio_err=0x%X, sys_err=%u",
                  plVar1,uVar9,*(undefined4 *)(param_1 + 0x28));
    (**(code **)(**(long **)(plVar1[0x113] + 0x20) + 0x10))();
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (*(code *)plVar1[6])(plVar1,0x80021000,plVar1[7]);
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100b265eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

