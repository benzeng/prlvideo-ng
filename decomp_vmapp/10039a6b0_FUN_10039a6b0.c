
void FUN_10039a6b0(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  *param_1 = param_2;
  puVar3 = param_1 + 4;
  do {
    puVar3[1] = 0;
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 2) = 0xffff;
    *(undefined2 *)((long)puVar3 + 0x12) = 0xffff;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *(undefined2 *)(puVar3 + 6) = 0xffff;
    *(undefined2 *)((long)puVar3 + 0x32) = 0xffff;
    puVar3[9] = 0;
    puVar3[8] = 0;
    *(undefined2 *)(puVar3 + 10) = 0xffff;
    *(undefined2 *)((long)puVar3 + 0x52) = 0xffff;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    *(undefined2 *)(puVar3 + 0xe) = 0xffff;
    *(undefined2 *)((long)puVar3 + 0x72) = 0xffff;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    *(undefined2 *)(puVar3 + 0x12) = 0xffff;
    *(undefined2 *)((long)puVar3 + 0x92) = 0xffff;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    *(undefined2 *)(puVar3 + 0x16) = 0xffff;
    *(undefined2 *)((long)puVar3 + 0xb2) = 0xffff;
    puVar3[0x19] = 0;
    puVar3[0x18] = 0;
    *(undefined2 *)(puVar3 + 0x1a) = 0xffff;
    *(undefined2 *)((long)puVar3 + 0xd2) = 0xffff;
    puVar3[0x1d] = 0;
    puVar3[0x1c] = 0;
    *(undefined2 *)(puVar3 + 0x1e) = 0xffff;
    *(undefined2 *)((long)puVar3 + 0xf2) = 0xffff;
    puVar3 = puVar3 + 0x20;
  } while (puVar3 != param_1 + 0x604);
  param_1[0x604] = 0;
  *(undefined4 *)(param_1 + 0x605) = 0;
  param_1[0x608] = 0;
  param_1[0x607] = 0;
  param_1[0x606] = 0;
  *(undefined4 *)(param_1 + 0x609) = 0;
  param_1[0x60c] = 0;
  param_1[0x60b] = 0;
  param_1[0x60a] = 0;
  *(undefined4 *)(param_1 + 0x60d) = 0;
  param_1[0x60f] = 0;
  param_1[0x60e] = 0;
  uVar4 = *(uint *)(DAT_1011c8478 + 4);
  *(bool *)(param_1 + 0x610) = uVar4 < 400;
  *(bool *)((long)param_1 + 0x3081) = uVar4 < 0x19a;
  pvVar2 = operator_new(0x5c);
  FUN_1003418f0(pvVar2,&DAT_10111946c);
  param_1[0x611] = pvVar2;
  pvVar2 = operator_new(0x5c);
  FUN_1003418f0(pvVar2,&DAT_1011194a4);
  param_1[0x612] = pvVar2;
  puVar1 = (uint *)*param_1;
  uVar4 = *puVar1;
  if (0x80 < uVar4) {
    uVar4 = 0x80;
  }
  param_1[0x617] = param_1 + 0x613;
  *(uint *)(param_1 + 0x618) = uVar4;
  *(undefined1 *)((long)param_1 + 0x30c4) = 1;
  ___bzero(param_1 + 0x613,uVar4 + 7 >> 3);
  uVar4 = *puVar1;
  if (0x80 < uVar4) {
    uVar4 = 0x80;
  }
  param_1[0x619] = param_1 + 0x615;
  *(uint *)(param_1 + 0x61a) = uVar4;
  *(undefined1 *)((long)param_1 + 0x30d4) = 1;
  ___bzero(param_1 + 0x615,uVar4 + 7 >> 3);
  param_1[0x604] = param_1 + 4;
  *(undefined4 *)(param_1 + 0x605) = 0x80;
  param_1[0x607] = 0;
  param_1[0x606] = 0;
  param_1[0x608] = param_1 + 0x204;
  *(undefined4 *)(param_1 + 0x609) = 0x80;
  param_1[0x60b] = 0;
  param_1[0x60a] = 0;
  param_1[0x60c] = param_1 + 0x404;
  *(undefined4 *)(param_1 + 0x60d) = 0x80;
  param_1[0x60f] = 0;
  param_1[0x60e] = 0;
  return;
}

