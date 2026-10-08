
undefined8 FUN_100b20920(long *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x100))();
  (**(code **)(*param_1 + 0x48))(param_1);
  pvVar1 = _valloc(0x1000);
  param_1[0x3014] = (long)pvVar1;
  if (pvVar1 == (void *)0x0) {
    FUN_100df99c0("","dimg",0,"Error allocating memory for BAT entries.");
    (**(code **)(*param_1 + 0x108))(param_1);
    uVar3 = 0x80000002;
  }
  else {
    ___bzero(pvVar1,0x1000);
    *(undefined4 *)(param_1 + 0x3015) = 0x1000;
    uVar3 = 0;
    *(int *)(param_1 + 0x3016) = (int)(0x1000 / (ulong)*(uint *)((long)param_1 + 0x180ac));
    (**(code **)(*param_1 + 0x108))(param_1);
    lVar2 = FUN_100db9be0(*(long *)(*param_1 + -0x18) + 0x10 + (long)param_1);
    param_1[6] = lVar2;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return uVar3;
}

