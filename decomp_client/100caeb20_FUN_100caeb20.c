
undefined8 FUN_100caeb20(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 == 0x17) {
    plVar3 = (long *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  else {
    if (iVar2 != 0x18) {
      uVar4 = 0x71;
      uVar5 = 0x24d;
      goto LAB_100caeba6;
    }
    plVar3 = (long *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  lVar1 = *plVar3;
  iVar2 = FUN_100c6fa60(param_2);
  if (iVar2 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    return 1;
  }
  uVar4 = 0x90;
  uVar5 = 0x255;
LAB_100caeba6:
  FUN_100c62ee0(0x21,0x6c,uVar4,"pk7_lib.c",uVar5);
  return 0;
}

