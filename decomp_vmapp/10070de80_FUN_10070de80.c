
undefined8 FUN_10070de80(long param_1,long param_2,aiocb **param_3,uint param_4)

{
  aiocb *paVar1;
  int iVar2;
  undefined8 in_RAX;
  int *piVar3;
  long lVar4;
  _func_332 **pp_Var5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulong)in_RAX >> 0x20);
  iVar2 = _lio_listio(1,param_3,param_4,(sigevent *)0x0);
  if (iVar2 == 0) {
    if (param_4 != 0) {
      pp_Var5 = *(_func_332 ***)(param_1 + 0x38);
      lVar4 = 0;
      if ((param_4 & 3) != 0) {
        lVar4 = 0;
        do {
          paVar1 = param_3[lVar4];
          paVar1[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var5;
          pp_Var5 = &paVar1[-1].aio_sigevent.sigev_notify_function;
          *(_func_332 ***)(param_1 + 0x38) = pp_Var5;
          lVar4 = lVar4 + 1;
        } while ((param_4 & 3) != (uint)lVar4);
      }
      if (2 < param_4 - 1) {
        param_3 = param_3 + lVar4 + 3;
        iVar2 = (param_4 + 3) - ((int)lVar4 + 3);
        do {
          paVar1 = param_3[-3];
          paVar1[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var5;
          pp_Var5 = &paVar1[-1].aio_sigevent.sigev_notify_function;
          *(_func_332 ***)(param_1 + 0x38) = pp_Var5;
          paVar1 = param_3[-2];
          paVar1[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var5;
          pp_Var5 = &paVar1[-1].aio_sigevent.sigev_notify_function;
          *(_func_332 ***)(param_1 + 0x38) = pp_Var5;
          paVar1 = param_3[-1];
          paVar1[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var5;
          pp_Var5 = &paVar1[-1].aio_sigevent.sigev_notify_function;
          *(_func_332 ***)(param_1 + 0x38) = pp_Var5;
          paVar1 = *param_3;
          paVar1[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var5;
          pp_Var5 = &paVar1[-1].aio_sigevent.sigev_notify_function;
          *(_func_332 ***)(param_1 + 0x38) = pp_Var5;
          param_3 = param_3 + 4;
          iVar2 = iVar2 + -4;
        } while (iVar2 != 0);
      }
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_4;
    *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + param_4;
  }
  else {
    piVar3 = ___error();
    iVar2 = *piVar3;
    FUN_1008e3970("","AbstractFile",0,"lio_listio %d pend=%u +%u",iVar2,
                  *(undefined4 *)(param_1 + 0x28),CONCAT44(uVar8,param_4));
    if (iVar2 != 0x23) {
      if (param_4 == 0) {
        return 0;
      }
      pp_Var5 = *(_func_332 ***)(param_1 + 0x30);
      bVar7 = (param_4 & 1) != 0;
      if (bVar7) {
        paVar1 = *param_3;
        paVar1[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var5;
        pp_Var5 = &paVar1[-1].aio_sigevent.sigev_notify_function;
        *(int *)((paVar1[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x20) = iVar2;
        *(_func_332 ***)(param_1 + 0x30) = pp_Var5;
      }
      if (param_4 == 1) {
        return 0;
      }
      param_3 = param_3 + (ulong)bVar7 + 1;
      iVar6 = (param_4 + 1) - (bVar7 + 1);
      do {
        paVar1 = param_3[-1];
        paVar1[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var5;
        pp_Var5 = &paVar1[-1].aio_sigevent.sigev_notify_function;
        *(int *)((paVar1[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x20) = iVar2;
        *(_func_332 ***)(param_1 + 0x30) = pp_Var5;
        paVar1 = *param_3;
        paVar1[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var5;
        pp_Var5 = &paVar1[-1].aio_sigevent.sigev_notify_function;
        *(int *)((paVar1[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x20) = iVar2;
        *(_func_332 ***)(param_1 + 0x30) = pp_Var5;
        param_3 = param_3 + 2;
        iVar6 = iVar6 + -2;
      } while (iVar6 != 0);
      return 0;
    }
    iVar2 = FUN_10070d970(param_1,param_3,param_4);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

