
void FUN_100baa340(void *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((param_1 != (void *)0x0) &&
     (iVar1 = *(int *)((long)param_1 + 0x28), *(int *)((long)param_1 + 0x28) = iVar1 + -1, iVar1 < 2
     )) {
    if (*(long *)((long)param_1 + 8) != 0) {
      FUN_100baa410();
    }
    plVar2 = *(long **)((long)param_1 + 0x10);
    if (plVar2 != (long *)0x0) {
      if (*(code **)(*plVar2 + 0x50) != (code *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2);
      }
      FUN_100bf3910(plVar2);
    }
    if (*(long *)((long)param_1 + 0x18) != 0) {
      FUN_100bac7b0();
    }
    puVar4 = *(undefined8 **)((long)param_1 + 0x30);
    while (puVar4 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar4;
      (*(code *)puVar4[3])(puVar4[1]);
      FUN_100bf3910(puVar4);
      puVar4 = puVar3;
    }
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    _OPENSSL_cleanse(param_1,0x38);
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

