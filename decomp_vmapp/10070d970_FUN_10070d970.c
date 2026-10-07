
undefined8 FUN_10070d970(long param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  _func_332 **pp_Var2;
  undefined4 uVar3;
  aiocb *paVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  _func_332 **pp_Var9;
  aiocb **ppaVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  bool bVar16;
  undefined8 uStack_60;
  int aiStack_58 [2];
  aiocb *apaStack_50 [2];
  aiocb **local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar5 = -((ulong)param_3 * 8 + 0xf & 0xfffffffffffffff0);
  local_40 = (aiocb **)((long)apaStack_50 + lVar5 + 8);
  apaStack_50[1] = (aiocb *)0x1;
  if (param_3 != 0) {
    uVar12 = (ulong)param_3;
    uVar14 = 0;
    plVar15 = param_2;
    do {
      do {
        paVar4 = (aiocb *)*plVar15;
        *(undefined8 *)((long)apaStack_50 + lVar5) = 0x10070d9d8;
        iVar6 = _aio_error(paVar4);
        paVar4 = (aiocb *)*plVar15;
        if ((iVar6 == 0) || (iVar6 == 0x24)) {
          paVar4[-1].aio_sigevent.sigev_notify_function = *(_func_332 **)(param_1 + 0x38);
          *(_func_332 ***)(param_1 + 0x38) = &paVar4[-1].aio_sigevent.sigev_notify_function;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          pcVar1 = (paVar4[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x30;
          *(int *)pcVar1 = *(int *)pcVar1 + 1;
          uVar13 = uVar14;
        }
        else {
          uVar13 = (ulong)((int)uVar14 + 1);
          local_40[uVar14] = paVar4;
        }
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar11;
        uVar14 = uVar13;
        plVar15 = plVar15 + 1;
      } while (uVar11 != 0);
      iVar6 = (int)uVar13;
      if (iVar6 == 0) {
        apaStack_50[1] = (aiocb *)0x1;
        break;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      *(undefined8 *)((long)apaStack_50 + lVar5) = 0x10070da4b;
      FUN_1008e3970("","AbstractFile",0,"Resubmit pend=%u +%u",uVar3,uVar13);
      if (*(int *)(param_1 + 0x28) == 0) {
        *(undefined8 *)((long)apaStack_50 + lVar5) = 0x10070da9f;
        FUN_1008e3970("","AbstractFile",0);
        *(undefined8 *)((long)apaStack_50 + lVar5) = 0x10070daa9;
        _sleep(1);
      }
      else {
        do {
          do {
            *(undefined8 *)((long)apaStack_50 + lVar5) = 0x10070da6d;
            FUN_10070dcb0(param_1,0xffffffff);
          } while (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x28) + iVar6);
        } while (*(uint *)(param_1 + 0x40) >> 1 < *(uint *)(param_1 + 0x28));
      }
      ppaVar10 = local_40;
      *(undefined8 *)((long)apaStack_50 + lVar5) = 0x10070dabc;
      iVar7 = _lio_listio(1,ppaVar10,iVar6,(sigevent *)0x0);
      if (iVar7 == 0) {
        pp_Var9 = *(_func_332 ***)(param_1 + 0x38);
        bVar16 = (uVar13 & 1) != 0;
        if (bVar16) {
          paVar4 = *local_40;
          paVar4[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var9;
          pp_Var9 = &paVar4[-1].aio_sigevent.sigev_notify_function;
          *(_func_332 ***)(param_1 + 0x38) = pp_Var9;
          pcVar1 = (paVar4[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x30;
          *(int *)pcVar1 = *(int *)pcVar1 + 1;
        }
        apaStack_50[1] = (aiocb *)0x1;
        if (iVar6 != 1) {
          ppaVar10 = local_40 + (ulong)bVar16 + 1;
          iVar7 = (iVar6 + 1) - (bVar16 + 1);
          do {
            paVar4 = ppaVar10[-1];
            pp_Var2 = &paVar4[-1].aio_sigevent.sigev_notify_function;
            paVar4[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var9;
            *(_func_332 ***)(param_1 + 0x38) = pp_Var2;
            pcVar1 = (paVar4[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x30;
            *(int *)pcVar1 = *(int *)pcVar1 + 1;
            paVar4 = *ppaVar10;
            pp_Var9 = &paVar4[-1].aio_sigevent.sigev_notify_function;
            paVar4[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var2;
            *(_func_332 ***)(param_1 + 0x38) = pp_Var9;
            pcVar1 = (paVar4[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x30;
            *(int *)pcVar1 = *(int *)pcVar1 + 1;
            ppaVar10 = ppaVar10 + 2;
            iVar7 = iVar7 + -2;
          } while (iVar7 != 0);
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar6;
        break;
      }
      apaStack_50[1] = (aiocb *)0x1;
      *(undefined8 *)((long)apaStack_50 + lVar5) = 0x10070dad2;
      piVar8 = ___error();
      iVar7 = *piVar8;
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      *(int *)((long)aiStack_58 + lVar5) = iVar6;
      *(undefined8 *)((long)&uStack_60 + lVar5) = 0x10070db01;
      FUN_1008e3970("","AbstractFile",0,"1lio_listio %d pend=%u +%u",iVar7,uVar3);
      ppaVar10 = local_40;
      if (iVar7 != 0x23) {
        pp_Var9 = *(_func_332 ***)(param_1 + 0x30);
        bVar16 = (uVar13 & 1) != 0;
        if (bVar16) {
          paVar4 = *local_40;
          paVar4[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var9;
          pp_Var9 = &paVar4[-1].aio_sigevent.sigev_notify_function;
          *(int *)((paVar4[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x20) = iVar7;
          *(_func_332 ***)(param_1 + 0x30) = pp_Var9;
        }
        apaStack_50[1] = (aiocb *)0x0;
        if (iVar6 != 1) {
          ppaVar10 = local_40 + (ulong)bVar16 + 1;
          iVar6 = (iVar6 + 1) - (bVar16 + 1);
          do {
            paVar4 = ppaVar10[-1];
            paVar4[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var9;
            pp_Var9 = &paVar4[-1].aio_sigevent.sigev_notify_function;
            *(int *)((paVar4[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x20) = iVar7;
            *(_func_332 ***)(param_1 + 0x30) = pp_Var9;
            paVar4 = *ppaVar10;
            paVar4[-1].aio_sigevent.sigev_notify_function = (_func_332 *)pp_Var9;
            pp_Var9 = &paVar4[-1].aio_sigevent.sigev_notify_function;
            *(int *)((paVar4[-1].aio_sigevent.sigev_notify_attributes)->__opaque + 0x20) = iVar7;
            *(_func_332 ***)(param_1 + 0x30) = pp_Var9;
            ppaVar10 = ppaVar10 + 2;
            iVar6 = iVar6 + -2;
          } while (iVar6 != 0);
        }
        break;
      }
      *(undefined8 *)((long)apaStack_50 + lVar5) = 0x10070db1e;
      _memcpy(param_2,ppaVar10,uVar13 << 3);
      uVar14 = 0;
      uVar12 = uVar13;
      plVar15 = param_2;
    } while (iVar6 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)apaStack_50 + lVar5) = &UNK_10070dca5;
    ___stack_chk_fail();
  }
  return apaStack_50[1];
}

