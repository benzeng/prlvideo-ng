
long FUN_100c7e200(undefined4 param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  local_38 = *param_3;
  if ((param_2 == (long *)0x0) || (lVar3 = *param_2, lVar3 == 0)) {
    lVar3 = FUN_100c6d320();
    if (lVar3 == 0) {
      FUN_100c62ee0(0xd,0x9a,6,"d2i_pr.c",0x4f);
      return 0;
    }
  }
  else if (*(long *)(lVar3 + 0x18) != 0) {
    FUN_100c557e0();
    *(undefined8 *)(lVar3 + 0x18) = 0;
  }
  iVar1 = FUN_100c6d3b0(lVar3,param_1);
  if (iVar1 == 0) {
    uVar4 = 0xa3;
    uVar5 = 0x5d;
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x10);
    if (*(code **)(lVar2 + 0xb0) != (code *)0x0) {
      iVar1 = (**(code **)(lVar2 + 0xb0))(lVar3,&local_38,param_4 & 0xffffffff);
      if (iVar1 != 0) goto LAB_100c7e2d9;
      lVar2 = *(long *)(lVar3 + 0x10);
    }
    if (*(long *)(lVar2 + 0x40) != 0) {
      lVar2 = FUN_100c8d150(0,&local_38,param_4);
      if (lVar2 != 0) {
        FUN_100c6d8c0(lVar3);
        lVar3 = FUN_100c6fd10(lVar2);
        FUN_100c8d1b0(lVar2);
        if (lVar3 == 0) {
          return 0;
        }
LAB_100c7e2d9:
        *param_3 = local_38;
        if (param_2 != (long *)0x0) {
          *param_2 = lVar3;
          return lVar3;
        }
        return lVar3;
      }
      goto LAB_100c7e353;
    }
    uVar4 = 0xd;
    uVar5 = 0x6e;
  }
  FUN_100c62ee0(0xd,0x9a,uVar4,"d2i_pr.c",uVar5);
LAB_100c7e353:
  if ((param_2 != (long *)0x0) && (*param_2 == lVar3)) {
    return 0;
  }
  FUN_100c6d8c0(lVar3);
  return 0;
}

