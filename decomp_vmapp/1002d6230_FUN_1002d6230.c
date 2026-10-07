
undefined4 FUN_1002d6230(long *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  if (1 < DAT_1011c568c) {
    in_RAX = *(undefined8 *)(*param_1 + 0x18);
    FUN_1008e3970("","USB",0,"[%s] SetConfiguration(%u) %p",param_1 + 0x107,param_2,in_RAX);
  }
  param_1[0x10a] = 0;
  lVar3 = 9;
  do {
    pvVar1 = (void *)param_1[lVar3];
    if (pvVar1 != (void *)0x0) {
      FUN_1002d7cd0(pvVar1);
      operator_delete(pvVar1);
      param_1[lVar3] = 0;
    }
    uVar5 = (undefined4)((ulong)in_RAX >> 0x20);
    uVar4 = lVar3 - 7;
    lVar3 = lVar3 + 1;
  } while (uVar4 < 0xff);
  *(undefined4 *)(param_1 + 0x10b) = 0xffffffff;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x48))((long *)*param_1,param_2);
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] SetConfiguration(%u) finished, ret %d",param_1 + 0x107,param_2,
                  CONCAT44(uVar5,uVar2));
  }
  return uVar2;
}

