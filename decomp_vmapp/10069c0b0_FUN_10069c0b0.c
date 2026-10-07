
void FUN_10069c0b0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  ulong uVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  plVar1 = *(long **)(param_1 + 0x10);
  uVar9 = *(uint *)(param_1 + 8) & 0xfc;
  if (uVar9 == 0) {
    if (3 < DAT_1011b55f8) {
      FUN_1008e3970("Compact","dimg",4,"[%p] Range [%llu, %llu[",*plVar1,plVar1[0x113],plVar1[0x114]
                   );
    }
    if ((code *)plVar1[1] != (code *)0x0) {
      cVar4 = (*(code *)plVar1[1])(plVar1);
      if (cVar4 == '\0') {
        *(undefined1 *)((long)plVar1 + 0x8b4) = 0;
        UNRECOVERED_JUMPTABLE = (code *)plVar1[3];
        lVar8 = plVar1[4];
        uVar7 = 0x80021025;
        goto LAB_10069c21d;
      }
    }
    uVar2 = plVar1[0x112];
    uVar5 = plVar1[0x114];
    if (uVar5 != uVar2) {
      plVar1[0x113] = uVar5;
      uVar6 = uVar5 + 0x1000;
      if (uVar2 < uVar5 + 0x1000) {
        uVar6 = uVar2;
      }
      plVar1[0x114] = uVar6;
      uVar5 = *(uint *)((long)plVar1 + 0x88c) * uVar5 + 0xfff & 0xfffffffffffff000;
      uVar2 = *(ulong *)(*(long *)(*(long *)*plVar1 + -0x18) + 0x38 + *plVar1);
      plVar1[5] = uVar5 / uVar2;
      cVar4 = (*(code *)plVar1[3])(plVar1[4],0x80021017,uVar5 % uVar2);
      if (cVar4 != '\0') {
        plVar3 = *(long **)(*(long *)(*(long *)*plVar1 + -0x18) + 8 + *plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010069c207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0xb8))(plVar3,plVar1 + 5);
        return;
      }
      return;
    }
    if ((code *)plVar1[2] != (code *)0x0) {
      (*(code *)plVar1[2])(plVar1);
    }
    UNRECOVERED_JUMPTABLE = (code *)plVar1[3];
    lVar8 = plVar1[4];
    uVar7 = 0;
  }
  else {
    FUN_1008e3970("Compact","dimg",0,"Error: process error, req=%p dio_err=0x%X, sys_err=%u",plVar1,
                  uVar9,*(undefined4 *)(param_1 + 0x28));
    UNRECOVERED_JUMPTABLE = (code *)plVar1[3];
    lVar8 = plVar1[4];
    uVar7 = 0x80021000;
  }
LAB_10069c21d:
                    /* WARNING: Could not recover jumptable at 0x00010069c223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar8,uVar7);
  return;
}

