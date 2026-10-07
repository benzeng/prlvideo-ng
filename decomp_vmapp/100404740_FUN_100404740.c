
void FUN_100404740(undefined8 *param_1,void *param_2)

{
  long lVar1;
  long *plVar2;
  
  while (*(int *)((long)param_2 + 0x14) == 2) {
    (**(code **)(*(long *)*param_1 + 0x110))((long *)*param_1,0xffffffff);
  }
  if ((void *)param_1[6] == param_2) {
    param_1[6] = 0;
  }
  if ((void *)param_1[7] == param_2) {
    param_1[7] = 0;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - *(int *)((long)param_2 + 0x1c);
  lVar1 = *(long *)((long)param_2 + 0x48);
  plVar2 = *(long **)((long)param_2 + 0x50);
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *(undefined8 *)((long)param_2 + 0x48) = 0x112233;
  *(undefined1 **)((long)param_2 + 0x50) = &DAT_00445566;
  FUN_1007d9880(param_1 + 1,(long)param_2 + 0x30);
  if (*(long *)((long)param_2 + 0x58) != 0) {
    FUN_1007daa30(param_1[0xd]);
  }
  _free(param_2);
  return;
}

