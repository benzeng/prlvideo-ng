
void FUN_100289b30(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_100285e00();
  *param_1 = &PTR_FUN_100bb0ca0;
  param_1[1] = &PTR_metaObject_100bb0de0;
  param_1[0xd] = &PTR_FUN_100bb0e58;
  param_1[0x7428] = &PTR_FUN_100bb0e88;
  FUN_1003ff060(param_1 + 0x7429);
  param_1[0x7457] = 0;
  FUN_100098d30(param_1 + 0x7458);
  param_1[0x7477] = PTR_shared_null_100ba20d0;
  param_1[0x7476] = 0;
  param_1[0x7475] = 0;
  param_1[0x7474] = 0;
  param_1[0x7473] = 0;
  param_1[0x7472] = 0;
  param_1[0x7471] = 0;
  param_1[0x7470] = 0;
  param_1[0x746f] = 0;
  param_1[0x746e] = 0;
  param_1[0x746d] = 0;
  param_1[0x746c] = 0;
  param_1[0x746b] = 0;
  param_1[0x746a] = 0;
  param_1[0x7469] = 0;
  param_1[0x7468] = 0;
  param_1[0x7467] = 0;
  param_1[0x7472] = 0x2020202020202020;
  param_1[0x7471] = 0x2020202020202020;
  param_1[0x7470] = 0x2020202020202020;
  param_1[0x746f] = 0x2020202020202020;
  param_1[0x746e] = 0x2020202020202020;
  param_1[0x746d] = 0x2020202020202020;
  param_1[0x746c] = 0x2020202020202020;
  param_1[0x746b] = 0x2020202020202020;
  *(undefined4 *)(param_1 + 0x7473) = 0x20202020;
  lVar2 = 0;
  do {
    lVar1 = *(long *)((long)param_1 + lVar2 + 0x188);
    *(long *)(lVar1 + 0x38) = (long)param_1 + lVar2 + 0xa8;
    *(code **)(lVar1 + 0x10) = FUN_100289d50;
    *(code **)(lVar1 + 8) = FUN_100289dd0;
    *(long *)(lVar1 + 0x28) = (long)param_1 + lVar2 + 0x188;
    lVar1 = *(long *)((long)param_1 + lVar2 + 0x270);
    *(long *)(lVar1 + 0x38) = (long)param_1 + lVar2 + 400;
    *(code **)(lVar1 + 0x10) = FUN_100289d50;
    *(code **)(lVar1 + 8) = FUN_100289dd0;
    *(long *)(lVar1 + 0x28) = (long)param_1 + lVar2 + 0x270;
    lVar2 = lVar2 + 0x1d0;
  } while (lVar2 != 0x3a000);
  return;
}

