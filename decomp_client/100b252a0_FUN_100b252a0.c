
void FUN_100b252a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar4 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar4 + 0x40) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar4 + 0x44) = 0;
    lVar2 = (long)param_1 + lVar4 + 0x30;
    *(long *)((long)param_1 + lVar4 + 0x30) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x38) = lVar2;
    *(undefined4 *)((long)param_1 + lVar4 + 0x58) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar4 + 0x5c) = 0;
    lVar2 = (long)param_1 + lVar4 + 0x48;
    *(long *)((long)param_1 + lVar4 + 0x48) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x50) = lVar2;
    *(undefined4 *)((long)param_1 + lVar4 + 0x70) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar4 + 0x74) = 0;
    lVar2 = (long)param_1 + lVar4 + 0x60;
    *(long *)((long)param_1 + lVar4 + 0x60) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x68) = lVar2;
    *(undefined4 *)((long)param_1 + lVar4 + 0x88) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar4 + 0x8c) = 0;
    lVar2 = (long)param_1 + lVar4 + 0x78;
    *(long *)((long)param_1 + lVar4 + 0x78) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x80) = lVar2;
    lVar4 = lVar4 + 0x60;
  } while (lVar4 != 0x18000);
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  puVar1 = param_1 + 3;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  lVar4 = 0;
  do {
    lVar2 = (long)param_1 + lVar4 + 0x30;
    *(long *)((long)param_1 + lVar4 + 0x20) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x30) = (long)param_1 + lVar4 + 0x18;
    *(undefined8 **)((long)param_1 + lVar4 + 0x38) = puVar1;
    param_1[3] = lVar2;
    lVar3 = (long)param_1 + lVar4 + 0x48;
    *(long *)((long)param_1 + lVar4 + 0x38) = lVar3;
    *(long *)((long)param_1 + lVar4 + 0x48) = lVar2;
    *(undefined8 **)((long)param_1 + lVar4 + 0x50) = puVar1;
    param_1[3] = lVar3;
    lVar4 = lVar4 + 0x30;
  } while (lVar4 != 0x18000);
  return;
}

