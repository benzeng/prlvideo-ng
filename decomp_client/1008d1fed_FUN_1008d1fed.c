
void FUN_1008d1fed(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = FUN_1008d1b91(param_2,param_3);
  if (iVar1 == -2) {
    if (*(long *)(param_3 + 0x18) == 0) {
      FUN_1008d1dc3(param_1,0x13a6,"Reference to default namespace not in scope\n");
    }
    else {
      FUN_1008d1f2f(param_1,0x13a6,"Reference to namespace \'%s\' not in scope\n",
                    *(undefined8 *)(param_3 + 0x18));
    }
  }
  if (iVar1 == -3) {
    if (*(long *)(param_3 + 0x18) == 0) {
      FUN_1008d1dc3(param_1,0x13a7,"Reference to default namespace not on ancestor\n");
    }
    else {
      FUN_1008d1f2f(param_1,0x13a7,"Reference to namespace \'%s\' not on ancestor\n",
                    *(undefined8 *)(param_3 + 0x18));
    }
  }
  return;
}

