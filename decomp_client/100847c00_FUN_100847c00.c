
void FUN_100847c00(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  
  if (param_2 == 0xc) {
    if (param_3 == 3) {
      puVar1 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar1 = 0xffffffff;
        return;
      }
    }
    else {
      if (param_3 != 4) {
        *(undefined4 *)*param_4 = 0xffffffff;
        return;
      }
      puVar1 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar1 = 0xffffffff;
        return;
      }
    }
    *puVar1 = 2;
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1006331a0();
      return;
    case 1:
      FUN_100633320(param_1,*(undefined1 *)param_4[1]);
      return;
    case 2:
      FUN_100633510();
      return;
    case 3:
      FUN_100633780(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_100633ac0(param_1,*(undefined4 *)param_4[1]);
      return;
    }
  }
  return;
}

