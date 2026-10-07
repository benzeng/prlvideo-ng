
int FUN_1005f9bc0(long param_1,long *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(long **)(param_1 + 0xf0);
  *(long *)(param_1 + 0xf0) = lVar3;
  local_38 = lVar2;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0xf8) = param_3;
  plVar4 = *(long **)(*(long *)(param_1 + 0xf0) + 0x10);
  iVar6 = (**(code **)(*plVar4 + 0x1a8))(plVar4,param_1 + 0x100);
  if (iVar6 < 0) {
    FUN_1008e3970("Backup","vdisk",0,"Session params reading failed, err = 0x%X",iVar6);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x130))(&local_48);
    cVar5 = FUN_1007ea210(&local_48);
    if (cVar5 == '\0') {
      *(undefined8 *)(param_1 + 0x7a) = local_40;
      *(undefined8 *)(param_1 + 0x72) = local_48;
      *(undefined1 *)(param_1 + 0x82) = 1;
      iVar6 = FUN_1005f6710(param_1,param_4,param_5);
    }
    else {
      FUN_1008e3970("","vdisk",0,"Snapshot uuid not specified");
      iVar6 = -0x7ffffffd;
    }
  }
  if (lVar2 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

