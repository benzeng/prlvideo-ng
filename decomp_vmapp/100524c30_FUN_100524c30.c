
undefined8 FUN_100524c30(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = 0xf0000014;
  if ((*(int *)(param_1 + 0x6c) != 0) && (uVar6 = 0xf0000003, 0xf < *(ushort *)(param_2 + 0x14))) {
    plVar4 = (long *)FUN_1002a6010(param_2);
    QMutex::lock();
    plVar1 = *(long **)(param_1 + 0x98);
    if (plVar1 != (long *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    QMutex::unlock();
    uVar6 = 0xf0000014;
    if (plVar1 != (long *)0x0) {
      piVar2 = (int *)plVar1[2];
      uVar6 = 0xf0000014;
      if ((piVar2 != (int *)0x0) && (piVar2[1] != 0)) {
        lVar5 = 0;
        piVar3 = piVar2;
        do {
          if ((*(long *)(piVar3 + 2) == *plVar4) && (piVar3[4] == (int)plVar4[1])) {
            *(short *)((long)plVar4 + 0xc) = (short)piVar2[lVar5 * 4 + 5];
            *(undefined2 *)((long)plVar4 + 0xe) =
                 *(undefined2 *)((long)piVar2 + lVar5 * 0x10 + 0x16);
            uVar6 = 0;
            break;
          }
          lVar5 = lVar5 + 1;
          piVar3 = piVar3 + 4;
        } while ((uint)lVar5 < (uint)piVar2[1]);
      }
      LOCK();
      plVar4 = plVar1 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  return uVar6;
}

