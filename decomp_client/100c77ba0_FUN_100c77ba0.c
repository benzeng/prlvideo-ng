
undefined8 FUN_100c77ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  long local_30;
  
  uVar3 = FUN_100c59ee0();
  lVar4 = FUN_100c58530(uVar3);
  if (lVar4 == 0) {
    FUN_100c62ee0(0xd,0xce,7,"a_d2i_fp.c",0x85);
    return 0;
  }
  FUN_100c58d60(lVar4,0x6a,0,param_2);
  local_30 = 0;
  iVar2 = FUN_100c77790(lVar4,&local_30);
  lVar1 = local_30;
  if (iVar2 < 0) {
    uVar3 = 0;
    if (local_30 == 0) goto LAB_100c77c51;
  }
  else {
    local_38 = *(undefined8 *)(local_30 + 8);
    uVar3 = FUN_100c81490(param_3,&local_38,(long)iVar2,param_1);
  }
  FUN_100c57f20(lVar1);
LAB_100c77c51:
  FUN_100c586e0(lVar4);
  return uVar3;
}

