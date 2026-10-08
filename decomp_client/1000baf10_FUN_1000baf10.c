
void FUN_1000baf10(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_28;
  
  lVar3 = *(long *)(*param_2 + 0x10);
  uVar4 = (ulong)*(uint *)(lVar3 + 0x1c) + 0x20;
  if (uVar4 == (param_3 & 0xffffffff)) {
    lVar6 = 0;
    if (*param_2 != 0) {
      lVar6 = lVar3;
    }
    if ((ulong)*(uint *)(lVar6 + 0x30) + 0x14 <= uVar4) {
      uVar5 = (**(code **)(*param_1 + 0x68))();
      uVar2 = *(undefined4 *)(lVar3 + 0x1c);
      local_28 = (long *)*param_2;
      if (local_28 != (long *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      FUN_1000e9ba0(uVar5,lVar6 + 0x20,uVar2,&local_28);
      if (local_28 != (long *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
  }
  return;
}

