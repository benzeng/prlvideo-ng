
void FUN_100848240(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  
  if (param_2 == 0xc) {
    if (param_3 == 6) {
      puVar1 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar1 = 0xffffffff;
        return;
      }
    }
    else if (param_3 == 7) {
      puVar1 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar1 = 0xffffffff;
        return;
      }
    }
    else {
      if (param_3 != 8) {
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
      FUN_100645210();
      return;
    case 1:
      FUN_100645250();
      return;
    case 2:
      FUN_100643fd0();
      return;
    case 3:
      FUN_100644010();
      return;
    case 4:
      FUN_100644100();
      return;
    case 5:
      FUN_100644130();
      return;
    case 6:
      FUN_100644620(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_100644e30(param_1,*(undefined4 *)param_4[1]);
      return;
    case 8:
      FUN_100645020(param_1,*(undefined4 *)param_4[1]);
      return;
    }
  }
  return;
}

