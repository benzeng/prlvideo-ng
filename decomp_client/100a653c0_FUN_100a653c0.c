
undefined8 * FUN_100a653c0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 local_38 [24];
  
  FUN_100aafb40(local_38,param_1 + 8);
  puVar3 = (undefined8 *)0x0;
  if (*(int *)(param_1 + 0x58) == 4) {
    plVar2 = *(long **)(param_1 + 0x18);
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar2 == plVar1) {
LAB_100a65410:
      puVar3 = (undefined8 *)0x0;
      if (plVar2 != plVar1) {
        puVar3 = (undefined8 *)*plVar2;
        (**(code **)*puVar3)(puVar3);
      }
    }
    else {
      puVar3 = (undefined8 *)0x0;
      do {
        if (*plVar2 == param_2) goto LAB_100a65410;
        plVar2 = plVar2 + 1;
      } while (plVar1 != plVar2);
    }
  }
  FUN_100aafad0(local_38);
  return puVar3;
}

