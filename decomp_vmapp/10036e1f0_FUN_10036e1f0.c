
void FUN_10036e1f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  
  FUN_10036e2d0(param_1 + 0x1298);
  plVar2 = *(long **)(param_1 + 0x1058);
  while (plVar2 != (long *)(param_1 + 0x1060)) {
    if ((long *)plVar2[0x49] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[0x49] + 8))();
    }
    plVar1 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      do {
        plVar1 = (long *)plVar2[2];
        bVar3 = (long *)*plVar1 != plVar2;
        plVar2 = plVar1;
      } while (bVar3);
    }
    else {
      do {
        plVar2 = plVar1;
        plVar1 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  FUN_100373a50(param_1 + 0x1058,*(undefined8 *)(param_1 + 0x1060));
  *(undefined8 *)(param_1 + 0x1068) = 0;
  *(long **)(param_1 + 0x1058) = (long *)(param_1 + 0x1060);
  *(undefined8 *)(param_1 + 0x1060) = 0;
  return;
}

