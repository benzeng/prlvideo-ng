
void FUN_100d78820(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 in_RAX;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 local_28;
  
  local_28 = in_RAX;
  iVar4 = _PrlHandle_GetType(*param_2,(long)&local_28 + 4);
  if (iVar4 < 0) {
    piVar5 = (int *)___cxa_allocate_exception(4);
    *piVar5 = iVar4;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar5,PTR_typeinfo_1021e1790,0);
  }
  if (local_28._4_4_ != 0x10000012) {
    puVar6 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar6 = 0x80000008;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,PTR_typeinfo_1021e1790,0);
  }
  iVar4 = _PrlEvent_GetType(*param_2,&local_28);
  if (iVar4 < 0) {
    piVar5 = (int *)___cxa_allocate_exception(4);
    *piVar5 = iVar4;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar5,PTR_typeinfo_1021e1790,0);
  }
  if ((int)local_28 == 0x1897f) {
    FUN_100d78930(param_1);
  }
  else if ((int)local_28 == 0x18980) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    plVar2 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  return;
}

