
void FUN_100877370(long param_1,long param_2,undefined8 param_3)

{
  if (((param_1 == 0) || (*(int *)(param_1 + 0x14c) == 0)) || (*(int *)(param_1 + 0x110) != -1)) {
    *(undefined4 *)(param_1 + 0x88) = 0x2a;
    if (param_2 == 0) {
      ___xmlRaiseError(0,0,0,param_1,0,1,*(undefined4 *)(param_1 + 0x88),3,0,0,param_3,0,0,0,0,
                       "Attribute %s redefined\n",param_3);
    }
    else {
      ___xmlRaiseError(0,0,0,param_1,0,1,*(undefined4 *)(param_1 + 0x88),3,0,0,param_2,param_3,0,0,0
                       ,"Attribute %s:%s redefined\n",param_2,param_3);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c0) == 0) {
      *(undefined4 *)(param_1 + 0x14c) = 1;
    }
  }
  return;
}

