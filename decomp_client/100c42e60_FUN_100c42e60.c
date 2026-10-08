
ulong FUN_100c42e60(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100c62ee0(0x10,0xd9,0x8c,"ec_pmeth.c",0xac);
    uVar3 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar2 = FUN_100c3fad0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20));
      iVar1 = FUN_100c36e50(uVar2);
      uVar3 = (ulong)(uint)((int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3);
    }
    else {
      uVar2 = FUN_100c3fb70(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20));
      uVar3 = FUN_100c53600(param_2,*param_3,uVar2,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20)
                            ,0);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
    }
    *param_3 = (long)(int)uVar3;
    uVar3 = 1;
  }
  return uVar3;
}

