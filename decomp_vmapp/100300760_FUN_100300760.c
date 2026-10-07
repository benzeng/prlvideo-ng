
void FUN_100300760(long param_1,undefined1 param_2,uint param_3)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x38) = param_2;
  *(short *)(param_1 + 0xa62c) = (short)param_3;
  if (param_3 < 300) {
    *(undefined8 *)(param_1 + 8) = DAT_1011c7420;
    *(undefined8 *)(param_1 + 0x10) = DAT_1011c7428;
    *(undefined8 *)(param_1 + 0x18) = DAT_1011c7430;
    puVar1 = &DAT_1011c7438;
  }
  else {
    *(undefined8 *)(param_1 + 8) = DAT_1011c74d8;
    *(undefined8 *)(param_1 + 0x10) = DAT_1011c7548;
    *(undefined8 *)(param_1 + 0x18) = DAT_1011c75e8;
    puVar1 = &DAT_1011c76e0;
  }
  *(undefined8 *)(param_1 + 0x20) = *puVar1;
  return;
}

