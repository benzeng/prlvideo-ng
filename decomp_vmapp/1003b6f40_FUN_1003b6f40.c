
undefined8 FUN_1003b6f40(long *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_3;
  uVar2 = 8;
  switch(*param_2) {
  case 1:
    lVar1 = *(long *)(param_2 + 2);
    uVar2 = (**(code **)(*param_1 + 0x18))
                      (param_1,lVar1,lVar1 + (ulong)(*(byte *)(lVar1 + 3) & 0x7f) * 4);
    break;
  case 2:
    lVar1 = *(long *)(param_2 + 2);
    uVar2 = (**(code **)(*param_1 + 0x20))
                      (param_1,lVar1,lVar1 + (ulong)(*(byte *)(lVar1 + 3) & 0x7f) * 4);
    break;
  case 3:
    lVar1 = *(long *)(param_2 + 2);
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1,lVar1,lVar1 + (ulong)*(uint *)(lVar1 + 4) * 4);
    break;
  case 4:
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1,**(undefined4 **)(param_2 + 2));
  }
  param_1[1] = 0;
  return uVar2;
}

