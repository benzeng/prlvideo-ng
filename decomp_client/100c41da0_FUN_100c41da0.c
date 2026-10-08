
undefined4 FUN_100c41da0(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar3 = FUN_100c3fad0(*(undefined8 *)(param_2 + 0x20));
  uVar4 = FUN_100c3fb70(*(undefined8 *)(param_1 + 0x20));
  uVar5 = FUN_100c3fb70(*(undefined8 *)(param_2 + 0x20));
  iVar1 = FUN_100c371c0(uVar3,uVar4,uVar5,0);
  uVar6 = 0xfffffffe;
  if (iVar1 == 1) {
    uVar6 = 0;
  }
  uVar2 = 1;
  if (iVar1 != 0) {
    uVar2 = uVar6;
  }
  return uVar2;
}

