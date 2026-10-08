
int FUN_1008c40a7(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 300) <= *(int *)(param_1 + 0x128)) {
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x130),(long)*(int *)(param_1 + 300) * 8);
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    if (*(long *)(param_1 + 0x130) == 0) {
      FUN_1008c3d3c(param_1,0);
      return 0;
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = param_2;
  *(undefined8 *)(param_1 + 0x120) = param_2;
  iVar1 = *(int *)(param_1 + 0x128);
  *(int *)(param_1 + 0x128) = iVar1 + 1;
  return iVar1;
}

