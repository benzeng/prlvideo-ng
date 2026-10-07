
undefined8
FUN_100365a60(undefined4 param_1,long param_2,undefined8 param_3,long param_4,uint param_5,
             undefined1 param_6)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  long local_38;
  
  cVar2 = FUN_1003651d0(param_2,param_3,&local_38);
  if (((cVar2 != '\0') && (*(uint *)(param_4 + 0x18) < 6)) &&
     ((0x2cU >> (*(uint *)(param_4 + 0x18) & 0x1f) & 1) != 0)) {
    lVar1 = *(long *)(param_4 + 0x20);
    if (lVar1 == 0) {
      local_40 = 0;
      local_44 = 1;
      local_48 = 0;
    }
    else {
      local_48 = *(undefined4 *)(lVar1 + 8);
      local_40 = *(undefined4 *)(lVar1 + 0xc);
      local_44 = *(undefined4 *)(lVar1 + 0x10);
    }
    if ((local_38 != 0) && (*(int *)(local_38 + 8) != 0)) {
      uVar3 = 0x8e14;
      if (*(int *)(local_38 + 4) != 5) {
        uVar3 = 0x8e13;
      }
      (*DAT_1011c74a0)(*(int *)(local_38 + 8),uVar3);
    }
    FUN_10039e680(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_2 + 0xa8));
    (**(code **)(**(long **)(param_2 + 0x20) + 0x20))
              (param_1,*(long **)(param_2 + 0x20),*(undefined8 *)(param_4 + 8),0,local_40,local_44,
               local_48,param_5 & 1,(param_5 & 2) >> 1,param_6);
    if ((local_38 != 0) && (*(int *)(local_38 + 8) != 0)) {
      (*DAT_1011c7588)();
    }
  }
  return 0;
}

