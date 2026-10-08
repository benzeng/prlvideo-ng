
undefined8
FUN_100da9960(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined4 param_5,
             uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  iVar1 = FUN_100da99f0();
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    uVar3 = param_4 | 0x800;
    if ((param_6 & 4) == 0) {
      uVar3 = param_4;
    }
    if ((param_4 & 0x200) == 0) {
      uVar3 = param_4;
    }
    uVar2 = (*(code *)**(undefined8 **)*param_1)(param_2,uVar3,param_5);
    *(undefined8 *)(*param_1 + 0x10) = uVar2;
    uVar2 = 0;
    if (*(long *)(*param_1 + 0x10) == -1) {
      _free((void *)*param_1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

