
undefined8 FUN_100dfa8e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_28;
  
  if ((param_3 & 1) != 0) {
    local_28 = in_RAX;
    _Gestalt(0x73797331,(long)&local_28 + 4);
    _Gestalt(0x73797332,&local_28);
    if ((local_28._4_4_ == 10) && ((int)local_28 == 6)) {
      return 0;
    }
  }
  uVar1 = FUN_100dfa940(param_1,param_2,0,param_3);
  return uVar1;
}

