
undefined8
FUN_1008b1c50(int *param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined8 param_5,
             long param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((-1 < param_3) &&
     (iVar1 = FUN_10089b2a0(*(undefined8 *)(param_1 + 2),(long)param_3), iVar1 == 0)) {
    return 0;
  }
  puVar4 = (undefined8 *)0x0;
  if (param_6 != 0) {
    puVar2 = (undefined4 *)FUN_1008a8380();
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    *(long *)(puVar2 + 2) = param_6;
    *puVar2 = param_7;
    uVar3 = 0x10;
    if (*param_1 != 1) {
      uVar3 = 4;
    }
    puVar4 = (undefined8 *)(puVar2 + 2);
    FUN_10089b8d0(*(undefined8 *)(param_1 + 6),uVar3,puVar2);
  }
  iVar1 = FUN_10089f940(*(undefined8 *)(param_1 + 4),param_2,param_4,param_5);
  if (iVar1 == 0) {
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
    }
    return 0;
  }
  return 1;
}

