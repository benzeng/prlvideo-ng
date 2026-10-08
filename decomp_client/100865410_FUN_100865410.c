
void FUN_100865410(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0xb) {
    if (param_3 == 0) {
      uVar1 = FUN_10083f2e0();
      *(undefined4 *)*param_4 = uVar1;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) {
      param_4 = (undefined8 *)*param_4;
      uVar2 = FUN_1007dd3c0();
      *param_4 = uVar2;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1007dd010(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1007de5e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1007dea00(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1007dd3e0(param_1,param_4[1]);
      return;
    case 4:
      FUN_1007de5b0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1007ddf40(param_1,*(undefined4 *)param_4[1]);
      return;
    }
  }
  return;
}

