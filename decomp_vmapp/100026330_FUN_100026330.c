
undefined8 FUN_100026330(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *local_28;
  long *local_20;
  
  uVar2 = DAT_1011c3698;
  if (*(int *)(param_2 + 8) == 0x8201) {
    uVar5 = 0xf0000002;
    if (7 < *(ushort *)(param_2 + 0x14)) {
      lVar3 = FUN_1002a6010(param_2);
      uVar2 = DAT_1011c3698;
      local_28 = *(long **)(param_1 + 0x30);
      if (local_28 != (long *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      uVar4 = 0x80000009;
      if ((ulong)(long)*(int *)(lVar3 + 4) < 6) {
        uVar4 = *(undefined4 *)(&DAT_100b2d2c0 + (long)*(int *)(lVar3 + 4) * 4);
      }
      FUN_1000a0a70(uVar2,&local_28,uVar4);
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
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_2 + 8) == 0x8200) {
      local_20 = *(long **)(param_1 + 0x30);
      if (local_20 != (long *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      uVar5 = 0;
      FUN_1000a0a70(uVar2,&local_20,0);
      if (local_20 != (long *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_20 + 0x10))();
        }
      }
    }
  }
  return uVar5;
}

