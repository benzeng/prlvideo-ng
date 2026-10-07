
void FUN_1003334f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  
  FUN_100333730(param_1,*(undefined8 *)(param_1 + 48000));
  plVar2 = *(long **)(param_1 + 0xbbc8);
  while (plVar2 != (long *)(param_1 + 0xbbd0)) {
    if ((void *)plVar2[5] != (void *)0x0) {
      operator_delete((void *)plVar2[5]);
    }
    plVar2[5] = 0;
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
  FUN_10033fa30(param_1 + 0xbbc8,*(undefined8 *)(param_1 + 0xbbd0));
  *(undefined8 *)(param_1 + 0xbbd8) = 0;
  *(long **)(param_1 + 0xbbc8) = (long *)(param_1 + 0xbbd0);
  *(undefined8 *)(param_1 + 0xbbd0) = 0;
  plVar2 = *(long **)(param_1 + 0xbbe0);
  while (plVar2 != (long *)(param_1 + 0xbbe8)) {
    FUN_10035ff00(*(undefined8 *)(param_1 + 48000),plVar2[5]);
    if ((void *)plVar2[5] != (void *)0x0) {
      operator_delete((void *)plVar2[5]);
    }
    plVar2[5] = 0;
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
  FUN_10033f9f0(param_1 + 0xbbe0,*(undefined8 *)(param_1 + 0xbbe8));
  *(undefined8 *)(param_1 + 0xbbf0) = 0;
  *(long **)(param_1 + 0xbbe0) = (long *)(param_1 + 0xbbe8);
  *(undefined8 *)(param_1 + 0xbbe8) = 0;
  FUN_10033f9f0(param_1 + 0xbbe0,0);
  FUN_10033fa30(param_1 + 0xbbc8,*(undefined8 *)(param_1 + 0xbbd0));
  *(undefined ***)(param_1 + 0xbb90) = &PTR_FUN_100bbbbc8;
  FUN_10033fa70(param_1 + 0xbba0,*(undefined8 *)(param_1 + 0xbba8));
  FUN_10033d2b0(param_1);
  return;
}

