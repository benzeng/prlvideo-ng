
void FUN_10003a710(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *local_80;
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("SSO_TOOL","vm",3,"New client attached");
  }
  QMutex::lock();
  lVar2 = *(long *)(param_1 + 0x40);
  if (*(int *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
    uVar3 = 0;
    do {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("SSO_TOOL","vm",3,"Send packet to client %d",uVar3 & 0xffffffff);
        lVar2 = *(long *)(param_1 + 0x40);
      }
      FUN_1007ea6d0(*(long *)(lVar2 + 0x10 + ((long)*(int *)(lVar2 + 8) + uVar3) * 8) + 8,local_78);
      FUN_100791380(&local_80,0x18981,0,local_78,0x40,&DAT_1011ccb98,1);
      FUN_100433970(*(undefined8 *)(*(long *)(DAT_1011c3650 + 0x10) + 0x18),param_2,&local_80,1);
      if (local_80 != (long *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      uVar3 = uVar3 + 1;
      lVar2 = *(long *)(param_1 + 0x40);
    } while ((long)uVar3 < (long)*(int *)(lVar2 + 0xc) - (long)*(int *)(lVar2 + 8));
  }
  QMutex::unlock();
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

