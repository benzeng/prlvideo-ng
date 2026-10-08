
int FUN_100c669e0(long *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x12) & 0x10) != 0) {
    uVar3 = (**(code **)(lVar2 + 0x20))(param_1,param_2,0,0);
    if ((int)uVar3 < 0) {
      return 0;
    }
    *param_3 = uVar3;
    return 1;
  }
  uVar3 = *(uint *)(lVar2 + 4);
  if (uVar3 < 0x21) {
    if (uVar3 == 1) goto LAB_100c66ac5;
  }
  else {
    FUN_100bf2cd0("evp_enc.c",0x186,"b <= sizeof ctx->buf");
  }
  uVar1 = *(uint *)((long)param_1 + 0x14);
  if ((*(byte *)((long)param_1 + 0x71) & 1) == 0) {
    if (uVar1 < uVar3) {
      _memset((void *)((ulong)uVar1 + 0x38 + (long)param_1),uVar3 - uVar1,
              (ulong)((uVar3 - 1) - uVar1) + 1);
    }
    iVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,uVar3);
    if (iVar4 == 0) {
      return 0;
    }
    *param_3 = uVar3;
    return iVar4;
  }
  if (uVar1 != 0) {
    FUN_100c62ee0(6,0x7f,0x8a,"evp_enc.c",399);
    return 0;
  }
LAB_100c66ac5:
  *param_3 = 0;
  return 1;
}

