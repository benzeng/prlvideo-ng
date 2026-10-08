
void FUN_100ac4fe0(long param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0xb89) = 0;
  }
  else if (param_3 == 2) {
    *(undefined1 *)(param_1 + 0xb89) = 1;
    *(undefined4 *)(param_1 + 0xb8c) = 0;
  }
  cVar2 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if ((cVar2 != '\0') && (param_3 - 2U < 5)) {
    uVar1 = *(undefined8 *)(param_1 + 0xa30);
    switch(param_3) {
    case 2:
      FUN_100ac91b0(uVar1,param_4);
      FUN_100adafa0(*(undefined8 *)(param_1 + 0xa30),param_4);
      FUN_100ae3240(param_1);
      return;
    case 3:
      FUN_100ac9220(uVar1,param_4);
      FUN_100adb030(*(undefined8 *)(param_1 + 0xa30),param_4);
      return;
    case 4:
      FUN_100ac92f0(uVar1,param_2,param_4);
      return;
    case 5:
      FUN_100ac9360(uVar1,param_2,param_4);
      return;
    case 6:
      FUN_100ac9390(uVar1,param_2,param_4);
      return;
    }
  }
  return;
}

