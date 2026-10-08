
undefined * FUN_100df98e0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = PTR_DAT_10230fff0;
  puVar1 = PTR_FUN_10230ffd8;
  PTR_FUN_10230ffd8 = param_1;
  if (PTR_DAT_10230fff0 != (undefined *)0x0) {
    bVar3 = (undefined4 *)PTR_DAT_10230fff0 != &DAT_10230fffc;
    PTR_DAT_10230fff0 = &DAT_102310000;
    if (bVar3) {
      PTR_DAT_10230fff0 = (undefined *)&DAT_10230fffc;
    }
    while (*(int *)puVar2 != 0) {
      _usleep(1000);
    }
  }
  return puVar1;
}

