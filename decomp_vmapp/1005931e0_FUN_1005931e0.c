
undefined8
FUN_1005931e0(long param_1,long param_2,long *param_3,int param_4,int param_5,long param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 8;
  lVar5 = *param_3;
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x10);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (*(long *)(lVar6 + 0x1130) == 0) {
    *(long *)(lVar6 + 0x1128) = param_2;
  }
  else {
    *(long *)(*(long *)(lVar6 + 0x1130) + 0x20) = param_2;
  }
  *(long *)(lVar6 + 0x1130) = param_2;
  if (*(int *)(*(long *)(lVar5 + 0x10) + 0x1170) != 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "AsyncBlockReq::ReqCow == req->mode","Storage.cpp",0x1100,"PrepareNewCowReq");
  }
  if (param_4 < param_5) {
    lVar5 = *param_3;
    lVar6 = *(long *)(lVar5 + 0x10);
    *(undefined4 *)(lVar6 + 0x1170) = 1;
  }
  else {
    if (*(int *)(param_1 + 0xac) != -1) {
      lVar5 = *param_3;
      lVar6 = *(long *)(lVar5 + 0x10);
      *(long *)(lVar6 + 0x10f0) = param_6;
      if (param_6 == -1) {
        *(undefined4 *)(lVar6 + 0x1170) = 1;
        goto LAB_100593302;
      }
    }
    lVar5 = *param_3;
    lVar6 = *(long *)(lVar5 + 0x10);
    if ((((param_4 == param_5) && (param_4 != -1)) && (*(int *)(param_2 + 0x50) == 0)) &&
       (*(long *)(lVar6 + 0x10f0) == -1)) {
      *(undefined4 *)(lVar6 + 0x1170) = 2;
    }
  }
LAB_100593302:
  if (*(int *)(lVar6 + 0x1170) - 1U < 2) {
    puVar1 = (undefined8 *)(lVar6 + 0x10);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    iVar3 = (**(code **)(*(long *)*puVar1 + 0xb0))((long *)*puVar1,lVar6 + 0x10f0);
    if (iVar3 < 0) {
      uVar4 = FUN_100768f60();
      *(undefined4 *)(param_2 + 0x28) = uVar4;
      FUN_1008e3970("","vdisk",0,"Error: EnlargeOnOneBlock failed: err=0x%x, sys_err=%u",iVar3);
      goto LAB_100593400;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0x1320);
    if (lVar5 != 0) {
      plVar2 = (long *)(lVar5 + 0xf0);
      *plVar2 = *plVar2 + 1;
    }
  }
  if (*(long *)(*(long *)(*param_3 + 0x10) + 0x10f0) != -1) {
    return CONCAT71((int7)((ulong)*param_3 >> 8),1);
  }
  FUN_1008e3970("","vdisk",0,"WriteAsync: offset is incorrect");
  FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",0x1126,
                "PrepareNewCowReq");
  *(undefined4 *)(param_2 + 0x28) = 0xe;
LAB_100593400:
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
  return 0;
}

