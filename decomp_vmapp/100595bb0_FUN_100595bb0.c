
void FUN_100595bb0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
  
  QMutex::lock();
  if ((long *)param_1[0x1f] == param_1 + 0x20) {
    QMutex::unlock();
    lVar3 = -1;
  }
  else {
    uVar4 = 0xffffffffffffffff;
    plVar2 = (long *)param_1[0x1f];
    do {
      plVar1 = (long *)plVar2[5];
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      if (*(ulong *)(plVar1[2] + 0x10f0) < uVar4) {
        uVar4 = *(ulong *)(plVar1[2] + 0x10f0);
      }
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar5 = plVar1 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar1 + 0x10))();
        }
      }
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar2[2];
          bVar6 = (long *)*plVar5 != plVar2;
          plVar2 = plVar5;
        } while (bVar6);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar2 = plVar5;
    } while (plVar5 != param_1 + 0x20);
    QMutex::unlock();
    lVar3 = -1;
    if (uVar4 != 0xffffffffffffffff) {
      lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
      lVar3 = lVar3 * uVar4;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1[8] +
                               ((param_1[0xc] + 0xffffffffU & 0xffffffff) + param_1[0xb] >> 9) * 8)
                     + ((ulong)(uint)((int)param_1[0xb] + (int)(param_1[0xc] + 0xffffffffU)) & 0x1ff
                       ) * 8);
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_2,param_3,param_4,param_5,param_6,lVar3);
  return;
}

