
void FUN_100190414(long param_1,long param_2)

{
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14c) == 0)) || (*(int *)(param_1 + 0x110) != -1)) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x88) = 2;
      *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x14c) = 1;
    }
    if (param_2 == 0) {
      ___xmlRaiseError(0,0,0,param_1,0,1,2,3,0,0,0,0,0,0,0,"Memory allocation failed\n");
    }
    else {
      ___xmlRaiseError(0,0,0,param_1,0,1,2,3,0,0,param_2,0,0,0,0,"Memory allocation failed : %s\n",
                       param_2);
    }
  }
  return;
}

