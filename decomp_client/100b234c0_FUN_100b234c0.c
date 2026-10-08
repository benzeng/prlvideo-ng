
void FUN_100b234c0(long *param_1,code *UNRECOVERED_JUMPTABLE,long param_3,long param_4,int param_5,
                  long *param_6,ulong param_7)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_6;
  if (plVar6 != (long *)0x0) {
LAB_100b2357e:
    plVar6[0x113] = 0;
    plVar6[0x114] = plVar6[0x112];
    if (0xfff < (ulong)plVar6[0x112]) {
      plVar6[0x114] =
           (ulong)(0x1000 - *(uint *)((long)plVar6 + 0x8ac) / *(uint *)((long)plVar6 + 0x88c));
    }
    *(undefined4 *)(plVar6 + 6) = 0;
    plVar6[5] = 0;
    plVar1 = (long *)*plVar6;
    if (param_7 == 0xffffffffffffffff) {
      param_7 = *(ulong *)(*(long *)(*plVar1 + -0x18) + 0x58 + (long)plVar1);
    }
    lVar2 = plVar1[4];
    uVar3 = *(ulong *)(*(long *)(**(long **)(lVar2 + 0x38) + -0x18) + 0x38 +
                      (long)*(long **)(lVar2 + 0x38));
    *(int *)((long)plVar6 + 0x8bc) =
         (int)((((param_7 / uVar3 - 1) - *(ulong *)(lVar2 + 0x20) / uVar3) +
               (ulong)*(uint *)(lVar2 + 0x10)) / (ulong)*(uint *)(lVar2 + 0x10));
    if (plVar6[0xb] != param_4) {
      FUN_100df99c0("Compact","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "req->m_Dio.di_worker == worker","StructuredBase.cpp",0x50b,
                    "StartBatScanningOnline");
    }
    *(int *)(plVar6 + 0x117) = param_5;
    plVar6[3] = (long)UNRECOVERED_JUMPTABLE;
    plVar6[4] = param_3;
    (**(code **)(*param_1 + 0x80))(param_1);
    if (param_5 == 2) {
      plVar6[1] = (long)FUN_100b24100;
      plVar6[2] = (long)FUN_100b24270;
      if ((long *)param_1[0xd] != param_1 + 0xd) {
        do {
          plVar1 = (long *)param_1[0xe];
          *(undefined4 *)(plVar1 + 2) = 0xffffffff;
          *(undefined4 *)((long)plVar1 + 0x14) = 0;
          lVar2 = *plVar1;
          plVar4 = (long *)plVar1[1];
          *(long **)(lVar2 + 8) = plVar4;
          *plVar4 = lVar2;
          lVar2 = param_1[0xf];
          *(long **)(lVar2 + 8) = plVar1;
          *plVar1 = lVar2;
          plVar1[1] = (long)(param_1 + 0xf);
          param_1[0xf] = (long)plVar1;
        } while ((long *)param_1[0xd] != param_1 + 0xd);
      }
      *(undefined4 *)(param_1 + 0x11) = 0;
    }
    else {
      if (param_5 != 1) {
        FUN_100df99c0("Compact","dimg",0,"[%p] Warning: Unknown operation %d",param_1,param_5);
                    /* WARNING: Could not recover jumptable at 0x000100b23796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_3,0x80000003);
        return;
      }
      *(undefined4 *)(plVar6 + 0x117) = 1;
      plVar6[1] = (long)FUN_100b23ae0;
      plVar6[2] = (long)FUN_100b23eb0;
    }
    plVar1 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                    /* WARNING: Could not recover jumptable at 0x000100b23754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,plVar6 + 5);
    return;
  }
  cVar5 = FUN_100b23830(param_1 + 7,param_1);
  if (cVar5 != '\0') {
    plVar6 = operator_new(0x8c0,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar6 == (long *)0x0) {
      FUN_100df99c0("Compact","dimg",0,"[%p]Error: no memory for request creation",param_1);
    }
    else {
      FUN_100b244f0(plVar6,param_1,param_4);
      if (*(char *)((long)plVar6 + 0x8b4) != '\0') {
        if (3 < DAT_10230ffd0) {
          FUN_100df99c0("Compact","dimg",4,"[%p] New BATScanReq(%p) constructed",param_1,plVar6);
        }
        *param_6 = (long)plVar6;
        goto LAB_100b2357e;
      }
      FUN_100df99c0("Compact","dimg",0,"[%p]Error: BATScanReq constructor failed",param_1);
      if ((void *)plVar6[0x110] != (void *)0x0) {
        _free((void *)plVar6[0x110]);
      }
      operator_delete(plVar6);
    }
    *param_6 = 0;
  }
  return;
}

