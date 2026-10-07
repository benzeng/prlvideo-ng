
void FUN_1000da2b0(undefined4 *param_1,uint param_2,char param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  long lVar6;
  
  param_1[1] = 0x216;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *param_1 = 0x43495041;
  *(undefined2 *)((long)param_1 + 0xe) = 0x2020;
  *(undefined4 *)((long)param_1 + 10) = 0x534c5250;
  *(undefined8 *)(param_1 + 4) = 0x4d454f5f534c5250;
  param_1[6] = 1;
  param_1[7] = 0x4c544e49;
  param_1[8] = 0x20051216;
  param_1[9] = 0xfee00000;
  param_1[10] = 1;
  puVar1 = param_1 + 0xb;
  do {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 1) = 8;
    *(undefined1 *)((long)puVar1 + 2) = 0;
    *(undefined1 *)((long)puVar1 + 3) = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((long)puVar1 + 9) = 8;
    *(undefined1 *)((long)puVar1 + 10) = 0;
    *(undefined1 *)((long)puVar1 + 0xb) = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *(undefined1 *)((long)puVar1 + 0x11) = 8;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    *(undefined1 *)((long)puVar1 + 0x13) = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *(undefined1 *)((long)puVar1 + 0x19) = 8;
    *(undefined1 *)((long)puVar1 + 0x1a) = 0;
    *(undefined1 *)((long)puVar1 + 0x1b) = 0;
    puVar1[7] = 0;
    puVar1 = puVar1 + 8;
  } while (puVar1 != param_1 + 0x4b);
  *(undefined1 *)(param_1 + 0x4b) = 1;
  *(undefined1 *)((long)param_1 + 0x12d) = 0xc;
  *(undefined1 *)((long)param_1 + 0x12e) = 0;
  *(undefined1 *)((long)param_1 + 0x12f) = 0;
  param_1[0x4c] = 0xfec00000;
  param_1[0x4d] = 0;
  puVar1 = param_1 + 0x4e;
  do {
    *(undefined1 *)puVar1 = 4;
    *(undefined1 *)((long)puVar1 + 1) = 6;
    *(undefined1 *)((long)puVar1 + 2) = 0;
    *(undefined2 *)((long)puVar1 + 3) = 5;
    *(undefined1 *)((long)puVar1 + 5) = 1;
    *(undefined1 *)((long)puVar1 + 6) = 4;
    *(undefined1 *)((long)puVar1 + 7) = 6;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined2 *)((long)puVar1 + 9) = 5;
    *(undefined1 *)((long)puVar1 + 0xb) = 1;
    *(undefined1 *)(puVar1 + 3) = 4;
    *(undefined1 *)((long)puVar1 + 0xd) = 6;
    *(undefined1 *)((long)puVar1 + 0xe) = 0;
    *(undefined2 *)((long)puVar1 + 0xf) = 5;
    *(undefined1 *)((long)puVar1 + 0x11) = 1;
    *(undefined1 *)((long)puVar1 + 0x12) = 4;
    *(undefined1 *)((long)puVar1 + 0x13) = 6;
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined2 *)((long)puVar1 + 0x15) = 5;
    *(undefined1 *)((long)puVar1 + 0x17) = 1;
    puVar1 = puVar1 + 6;
  } while (puVar1 != param_1 + 0x7e);
  *(undefined1 *)(param_1 + 0x7e) = 2;
  *(undefined1 *)((long)param_1 + 0x1f9) = 10;
  *(undefined8 *)((long)param_1 + 0x1fa) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 2;
  *(undefined1 *)((long)param_1 + 0x203) = 10;
  *(undefined8 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x83) = 2;
  *(undefined1 *)((long)param_1 + 0x20d) = 10;
  *(undefined8 *)((long)param_1 + 0x20e) = 0;
  puVar2 = (undefined1 *)((long)param_1 + 0x13a);
  lVar6 = 0;
  do {
    uVar3 = (undefined1)lVar6;
    *(undefined1 *)((long)param_1 + lVar6 * 8 + 0x2e) = uVar3;
    *(undefined1 *)((long)param_1 + lVar6 * 8 + 0x2f) = uVar3;
    if ((param_2 >> ((uint)lVar6 & 0x1f) & 1) != 0) {
      param_1[lVar6 * 2 + 0xc] = 1;
    }
    *puVar2 = uVar3;
    lVar6 = lVar6 + 1;
    puVar2 = puVar2 + 6;
  } while (lVar6 != 0x20);
  *(undefined1 *)((long)param_1 + 0x1fa) = 0;
  *(undefined1 *)((long)param_1 + 0x1fb) = 0;
  param_1[0x7f] = 2;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)((long)param_1 + 0x205) = 0xe;
  *(undefined4 *)((long)param_1 + 0x206) = 0xe;
  *(undefined1 *)((long)param_1 + 0x20e) = 0;
  *(undefined1 *)((long)param_1 + 0x20f) = 0xf;
  param_1[0x84] = 0xf;
  uVar5 = 4;
  if (param_3 != '\0') {
    uVar5 = 0xc;
  }
  *(undefined2 *)((long)param_1 + 0x20a) = uVar5;
  *(undefined2 *)(param_1 + 0x85) = uVar5;
  cVar4 = '\0';
  lVar6 = 2;
  do {
    cVar4 = *(char *)((long)param_1 + lVar6) +
            *(char *)((long)param_1 + lVar6 + -1) + *(char *)((long)param_1 + lVar6 + -2) + cVar4;
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x218);
  *(char *)((long)param_1 + 9) = -cVar4;
  return;
}

