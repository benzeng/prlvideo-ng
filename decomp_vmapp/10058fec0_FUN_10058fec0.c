
void FUN_10058fec0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  
  cVar4 = FUN_1007ea210(param_1 + 0x9c);
  if ((cVar4 == '\0') && (*(int *)(param_1 + 0xac) != -1)) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x70) + 0x350))();
    FUN_1005ad4e0(uVar5);
  }
  for (plVar6 = *(long **)(param_1 + 0xe8); plVar6 != (long *)(param_1 + 0xe0);
      plVar6 = (long *)plVar6[1]) {
    if (((int)plVar6[3] == -1) && ((long *)plVar6[2] != (long *)0x0)) {
      (**(code **)(*(long *)plVar6[2] + 0x28))();
      (**(code **)(*(long *)plVar6[2] + 0x20))();
      plVar6[2] = 0;
    }
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0);
    plVar6 = *(long **)(param_1 + 0xe8);
    lVar2 = *plVar6;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    while (plVar6 != (long *)(param_1 + 0xe0)) {
      plVar3 = (long *)plVar6[1];
      operator_delete(plVar6);
      plVar6 = plVar3;
    }
  }
  if ((*(int *)(param_1 + 200) == -1) && (*(long **)(param_1 + 0xc0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x28))();
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x20))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  FUN_100598840(param_1 + 0x98);
  return;
}

