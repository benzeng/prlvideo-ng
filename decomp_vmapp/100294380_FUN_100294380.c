
void FUN_100294380(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_10028e810();
  *param_1 = &PTR_FUN_100bb15f0;
  param_1[1] = &PTR_metaObject_100bb1750;
  param_1[0xd] = &PTR_FUN_100bb17c8;
  param_1[0x20d] = &PTR_FUN_100bb17f8;
  lVar4 = 0;
  do {
    lVar2 = DAT_1011c3688;
    *(long *)((long)param_1 + lVar4 + 0x1138) = DAT_1011c3688;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1140) =
         *(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x20);
    *(long *)((long)param_1 + lVar4 + 0x1148) = (long)param_1 + lVar4 + 0x1150;
    *(undefined4 *)((long)param_1 + lVar4 + 0x1150) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1158) = 0;
    lVar2 = DAT_1011c3688;
    *(long *)((long)param_1 + lVar4 + 0x1a70) = DAT_1011c3688;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1a78) =
         *(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x20);
    *(long *)((long)param_1 + lVar4 + 0x1a80) = (long)param_1 + lVar4 + 0x1a88;
    *(undefined4 *)((long)param_1 + lVar4 + 0x1a88) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1a90) = 0;
    lVar4 = lVar4 + 0x1270;
  } while (lVar4 != 0x12700);
  FUN_1003ff060(param_1 + 0x26f7);
  FUN_1003fd230(param_1 + 0x2725);
  param_1[0x2838] = 0;
  param_1[0x2839] = PTR_shared_null_100ba20d0;
  param_1[0x283a] = 0x80;
  if (DAT_101115f88 == -1) {
    DAT_101115f88 = FUN_1007da300("devices.ahci.ata_pio",1);
  }
  *(bool *)(param_1 + 0x26f6) = *(int *)(DAT_1011c3698 + 0x590) != 0;
  puVar1 = param_1 + 0x26ee;
  param_1[0x26ee] = puVar1;
  param_1[0x26ef] = puVar1;
  param_1[0x26f4] = param_1 + 0x26f4;
  param_1[0x26f5] = param_1 + 0x26f4;
  param_1[0x26f0] = param_1 + 0x26f0;
  param_1[0x26f1] = param_1 + 0x26f0;
  param_1[0x26f2] = param_1 + 0x26f2;
  param_1[0x26f3] = param_1 + 0x26f2;
  lVar4 = 0;
  do {
    lVar2 = (long)param_1 + lVar4 + 0x1998;
    *(long *)((long)param_1 + lVar4 + 0x1998) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x19a0) = lVar2;
    lVar3 = param_1[0x26ee];
    lVar2 = (long)param_1 + lVar4 + 0x1988;
    *(long *)(lVar3 + 8) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x1988) = lVar3;
    *(undefined8 **)((long)param_1 + lVar4 + 0x1990) = puVar1;
    param_1[0x26ee] = lVar2;
    lVar2 = (long)param_1 + lVar4 + 0x22d0;
    *(long *)((long)param_1 + lVar4 + 0x22d0) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x22d8) = lVar2;
    lVar3 = param_1[0x26ee];
    lVar2 = (long)param_1 + lVar4 + 0x22c0;
    *(long *)(lVar3 + 8) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x22c0) = lVar3;
    *(undefined8 **)((long)param_1 + lVar4 + 0x22c8) = puVar1;
    param_1[0x26ee] = lVar2;
    lVar4 = lVar4 + 0x1270;
  } while (lVar4 != 0x12700);
  return;
}

