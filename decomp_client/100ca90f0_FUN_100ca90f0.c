
int * FUN_100ca90f0(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  
  if ((param_1 != (undefined8 *)0x0) || (piVar4 = (int *)0x0, param_2 != 0)) {
    lVar1 = 0;
    if ((param_2 != 0) && (lVar1 = FUN_100bf8640(param_2), lVar1 == 0)) {
      return (int *)0x0;
    }
    piVar2 = (int *)FUN_100bf3540(0x20,"pcy_data.c",99);
    piVar4 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      lVar3 = FUN_100c60010();
      *(long *)(piVar2 + 6) = lVar3;
      if (lVar3 == 0) {
        FUN_100bf3910(piVar2);
        piVar4 = (int *)0x0;
        if (lVar1 != 0) {
          FUN_100c74e10(lVar1);
          piVar4 = (int *)0x0;
        }
      }
      else {
        *piVar2 = (uint)(param_3 != 0) << 4;
        if (lVar1 == 0) {
          *(undefined8 *)(piVar2 + 2) = *param_1;
          *param_1 = 0;
        }
        else {
          *(long *)(piVar2 + 2) = lVar1;
        }
        piVar4 = piVar2;
        if (param_1 == (undefined8 *)0x0) {
          piVar2[4] = 0;
          piVar2[5] = 0;
        }
        else {
          *(undefined8 *)(piVar2 + 4) = param_1[1];
          param_1[1] = 0;
        }
      }
    }
  }
  return piVar4;
}

