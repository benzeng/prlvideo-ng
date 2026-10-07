
undefined * FUN_1008e3890(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = PTR_DAT_1011b5618;
  puVar1 = PTR_FUN_1011b5600;
  PTR_FUN_1011b5600 = param_1;
  if (PTR_DAT_1011b5618 != (undefined *)0x0) {
    bVar3 = (undefined4 *)PTR_DAT_1011b5618 != &DAT_1011b5624;
    PTR_DAT_1011b5618 = &DAT_1011b5628;
    if (bVar3) {
      PTR_DAT_1011b5618 = (undefined *)&DAT_1011b5624;
    }
    while (*(int *)puVar2 != 0) {
      _usleep(1000);
    }
  }
  return puVar1;
}

