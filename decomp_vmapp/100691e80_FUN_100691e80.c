
undefined8 FUN_100691e80(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  
  (**(code **)(*param_1 + 0x70))(param_1,1);
  uVar2 = 0;
  plVar3 = (long *)*param_2;
  if ((long *)*param_2 != param_2 + 1) {
    do {
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1,(int)plVar3[4],plVar3[5]);
      plVar1 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar3[2];
          bVar5 = (long *)*plVar4 != plVar3;
          plVar3 = plVar4;
        } while (bVar5);
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    } while ((plVar4 != param_2 + 1) && (plVar3 = plVar4, -1 < (int)uVar2));
  }
  return uVar2;
}

