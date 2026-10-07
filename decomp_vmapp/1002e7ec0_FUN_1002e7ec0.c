
undefined8 FUN_1002e7ec0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (*(long *)(param_1 + 0x168) != 0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x98))
                      (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
                       *(long *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170));
    if (iVar1 < 0) {
      FUN_1004103f0(0x31100,param_1 + 0x150,0x12,0);
      uVar2 = 5;
    }
  }
  return uVar2;
}

