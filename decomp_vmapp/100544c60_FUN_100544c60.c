
int FUN_100544c60(long *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)*param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = param_4;
  iVar2 = FUN_100544b80(param_1,param_2,param_5);
  iVar3 = 0;
  if (iVar2 != 0) {
    *(undefined4 *)*param_1 = 0xffffffff;
    iVar3 = iVar2;
  }
  return iVar3;
}

