
void FUN_10055f480(long param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10055e2a0(param_1);
      return;
    case 1:
      FUN_10055eda0(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    case 2:
      iVar1 = **(int **)(param_4 + 8);
      uVar2 = FUN_100708300(param_1 + 0x28);
      if (iVar1 == 2) {
        uVar2 = uVar2 | 2;
      }
      else {
        uVar2 = uVar2 & 0xfffffffd;
      }
      FUN_100708310(param_1 + 0x28,uVar2);
      FUN_10083d580(*(undefined8 *)(param_1 + 0x10));
      return;
    case 3:
      FUN_10055ef50();
      return;
    }
  }
  return;
}

