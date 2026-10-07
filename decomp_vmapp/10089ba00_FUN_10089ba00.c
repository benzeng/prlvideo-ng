
ulong FUN_10089ba00(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    if (iVar1 == *param_2) {
      if (iVar1 == 1) {
        uVar2 = (ulong)(uint)(param_1[2] - param_2[2]);
      }
      else {
        uVar2 = 0;
        if (iVar1 != 5) {
          if (iVar1 == 6) {
            uVar2 = FUN_1008230a0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
            return uVar2;
          }
          uVar2 = FUN_1008afeb0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}

