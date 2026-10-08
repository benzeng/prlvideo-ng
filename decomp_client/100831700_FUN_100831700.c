
void FUN_100831700(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
switchD_10083171f_default:
    return;
  }
  switch(param_3) {
  case 0:
    FUN_10035a0f0(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
    return;
  case 1:
    FUN_10035a3d0(param_1,*(undefined8 *)(param_4 + 8));
    return;
  case 2:
    FUN_10035a7a0(param_1,*(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                  **(undefined4 **)(param_4 + 0x18));
    return;
  case 3:
    FUN_10035a780(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
    return;
  case 4:
    FUN_10035a6b0(param_1,**(undefined1 **)(param_4 + 8));
    return;
  case 5:
    FUN_10035a6b0(param_1,1);
    return;
  case 6:
    FUN_10035a010(param_1,**(undefined4 **)(param_4 + 8),**(undefined1 **)(param_4 + 0x10));
    return;
  case 7:
    uVar1 = **(undefined4 **)(param_4 + 8);
    break;
  case 8:
    uVar1 = 6;
    break;
  default:
    goto switchD_10083171f_default;
  }
  FUN_10035a010(param_1,uVar1,0);
  return;
}

