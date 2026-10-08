
undefined8 FUN_100c77650(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_100c62ee0(0xd,0x6d,7,"a_d2i_fp.c",0x4c);
    return 0;
  }
  FUN_100c58d60(lVar4,0x6a,0,param_3);
  local_30 = 0;
  iVar2 = FUN_100c77790(lVar4,&local_30);
  lVar1 = local_30;
  if (iVar2 < 0) {
    uVar3 = 0;
    if (local_30 == 0) goto LAB_100c776fc;
  }
  else {
    local_38 = *(undefined8 *)(local_30 + 8);
    uVar3 = (*param_2)(param_4,&local_38,(long)iVar2);
  }
  FUN_100c57f20(lVar1);
LAB_100c776fc:
  FUN_100c586e0(lVar4);
  return uVar3;
}

