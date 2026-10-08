
undefined8 FUN_100cb4010(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100bf7220(*param_1);
  uVar2 = 0;
  if (iVar1 == 0x99) {
    iVar1 = FUN_100bf7220(*(undefined8 *)param_1[1]);
    uVar2 = 0;
    if (iVar1 == 0xa0) {
      uVar2 = FUN_100c8c7a0(*(undefined8 *)(param_1[1] + 8),&DAT_102252420);
    }
  }
  return uVar2;
}

