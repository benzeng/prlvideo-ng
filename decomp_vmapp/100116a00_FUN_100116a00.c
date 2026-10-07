
void FUN_100116a00(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *local_28;
  long *local_20;
  long *local_18;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100061010(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 1:
      local_18 = (long *)**(long **)(param_4 + 8);
      if (local_18 != (long *)0x0) {
        LOCK();
        *(int *)(local_18 + 1) = (int)local_18[1] + 1;
        UNLOCK();
      }
      FUN_100061e60(param_1,&local_18);
      if (local_18 == (long *)0x0) {
        return;
      }
      LOCK();
      plVar3 = local_18 + 1;
      iVar2 = (int)*plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = local_18;
      break;
    case 2:
      local_20 = (long *)**(long **)(param_4 + 8);
      if (local_20 != (long *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      local_28 = (long *)**(long **)(param_4 + 0x10);
      if (local_28 != (long *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      FUN_100064620(param_1,&local_20,&local_28);
      if (local_28 != (long *)0x0) {
        LOCK();
        plVar3 = local_28 + 1;
        lVar1 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
      if (local_20 == (long *)0x0) {
        return;
      }
      LOCK();
      plVar3 = local_20 + 1;
      iVar2 = (int)*plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = local_20;
      break;
    case 3:
      FUN_100060d00(param_1,**(undefined1 **)(param_4 + 8));
      return;
    default:
      goto switchD_100116a2a_default;
    }
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
switchD_100116a2a_default:
  return;
}

