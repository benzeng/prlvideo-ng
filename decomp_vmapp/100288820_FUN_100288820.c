
void FUN_100288820(undefined8 param_1,int param_2,char param_3,undefined4 param_4,long param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined1 **)(param_5 + 0x88);
  *(undefined1 *)(param_5 + 8) = *puVar1;
  *(undefined1 *)(param_5 + 9) = puVar1[1];
  *(undefined1 *)(param_5 + 10) = 9;
  *(undefined1 *)(param_5 + 0xb) = puVar1[3];
  *(undefined1 *)(param_5 + 0xc) = puVar1[4];
  *(undefined1 *)(param_5 + 0xd) = puVar1[5];
  *(undefined1 *)(param_5 + 0xe) = puVar1[6];
  *(undefined1 *)(param_5 + 0xf) = puVar1[7];
  *(undefined4 *)(param_5 + 0x10) = *(undefined4 *)(puVar1 + 8);
  *(short *)(param_5 + 0x16) = (short)param_2;
  *(undefined4 *)(param_5 + 0x18) = 0;
  *(char *)(param_5 + 0x14) = param_3;
  uVar3 = 0x12;
  if (param_2 != 0x48 && param_3 == '\0') {
    uVar3 = 0;
  }
  *(bool *)(param_5 + 0x15) = param_2 == 0x48 || param_3 != '\0';
  *(undefined4 *)(param_5 + 0x1c) = param_4;
  *(undefined4 *)(param_5 + 0x20) = uVar3;
  *(undefined4 *)(param_5 + 0x24) = 0;
  *(undefined2 *)(param_5 + 0x28) = 0xffff;
  *(undefined2 *)(param_5 + 0x2a) = 0;
  cVar2 = FUN_1002878f0(param_1,param_5);
  if (cVar2 != '\0') {
    FUN_100287ba0();
    return;
  }
  FUN_100287ac0(param_1,param_5);
  return;
}

