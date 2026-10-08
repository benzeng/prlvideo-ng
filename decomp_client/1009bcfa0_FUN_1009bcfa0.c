
void FUN_1009bcfa0(long param_1,int param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
LAB_1009bcfe4:
      FUN_1009bc8b0(param_1);
      return;
    }
    if (param_3 == 1) {
      FUN_1009bc7f0(param_1);
      return;
    }
    if (param_3 == 0) {
      uVar1 = *(undefined8 *)(param_4 + 8);
      cVar2 = FUN_100da2630(uVar1);
      if (cVar2 != '\0') {
        FUN_1000341d0(param_1 + 0x40,uVar1);
        goto LAB_1009bcfe4;
      }
    }
  }
  return;
}

