
void FUN_1005f9d00(long param_1,undefined1 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  QArrayData *local_68;
  undefined1 local_59;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  uVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x350))();
  FUN_1005ab5b0(uVar6);
  FUN_1005b1e80(uVar6);
  FUN_1005f6bd0(param_1,param_2);
  plVar1 = (long *)(param_1 + 0xf0);
  FUN_1005f98c0(plVar1);
  if ((*(byte *)(param_1 + 0x118) & 2) == 0) {
    FUN_1005fc800();
    plVar7 = (long *)0x0;
    if (*plVar1 != 0) {
      plVar7 = *(long **)(*plVar1 + 0x10);
    }
    (**(code **)(*plVar7 + 0x198))(plVar7,&local_68);
    uVar5 = *(undefined4 *)(param_1 + 0x120);
    FUN_1007d6870(local_48);
    FUN_1005fbc60(&local_68,uVar5,local_48,0);
    plVar7 = (long *)0x0;
    if (*plVar1 != 0) {
      plVar7 = *(long **)(*plVar1 + 0x10);
    }
    (**(code **)(*plVar7 + 0x1a0))(plVar7,&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_59 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_1005f9e0a;
      }
      QArrayData::deallocate(local_68,0x20,8);
    }
  }
LAB_1005f9e0a:
  iVar4 = (**(code **)(**(long **)(*plVar1 + 0x10) + 0x1b0))(*(long **)(*plVar1 + 0x10),0);
  if (iVar4 < 0) {
    FUN_1008e3970("Backup","vdisk",0,"Session params reading failed, err = 0x%X",iVar4);
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 0x2b0))(local_58);
  uVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x2f8))();
  cVar3 = FUN_1005b15b0(uVar6,local_58,uVar5);
  if (cVar3 == '\0') {
    FUN_1008e3970("Backup","vdisk",0,"Current cache file reopen failed");
  }
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

