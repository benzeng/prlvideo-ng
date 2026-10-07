
void FUN_100288630(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x48;
  if (*(int *)(param_3 + 0xd8) == 0) {
    uVar4 = 0;
  }
  param_2 = param_2 & 0xffffffff;
  *(undefined2 *)(&DAT_1011c3cc0 + param_2 * 0x12) = *(undefined2 *)(param_3 + 0xd0);
  uVar1 = *(undefined8 *)(param_3 + 0xc0);
  *(undefined8 *)(&DAT_1011c3cb8 + param_2 * 0x12) = *(undefined8 *)(param_3 + 200);
  *(undefined8 *)(&DAT_1011c3cb0 + param_2 * 0x12) = uVar1;
  cVar2 = FUN_100288ab0(param_1,param_3);
  uVar3 = 4;
  if (cVar2 != '\0') {
    uVar3 = uVar4;
  }
  FUN_100288820(param_1,uVar3,2,0,param_3);
  return;
}

