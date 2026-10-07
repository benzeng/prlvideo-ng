
undefined8 FUN_10032d900(long param_1,int param_2,uint param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((*(ushort *)(param_1 + 0xb0) & 0x400) == 0) {
    if (*(long **)(param_1 + 0x70) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x70);
      plVar3 = (long *)(param_1 + 0x70);
      do {
        while ((plVar4 = plVar2, param_2 <= *(int *)((long)plVar4 + 0x1c) &&
               ((*(int *)((long)plVar4 + 0x1c) != param_2 || (param_3 <= *(uint *)(plVar4 + 4))))))
        {
          plVar2 = (long *)*plVar4;
          plVar3 = plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_10032d961;
        }
        plVar1 = plVar4 + 1;
        plVar4 = plVar3;
        plVar2 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_10032d961:
      if (plVar4 == (long *)(param_1 + 0x70)) {
        uVar5 = 0;
      }
      else if (param_2 < *(int *)((long)plVar4 + 0x1c)) {
        uVar5 = 0;
      }
      else if ((*(int *)((long)plVar4 + 0x1c) == param_2) && (param_3 < *(uint *)(plVar4 + 4))) {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT71((int7)((ulong)plVar4 >> 8),param_4 <= *(uint *)((long)plVar4 + 0x24));
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

