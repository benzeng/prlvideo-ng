
ulong FUN_100c66830(long *param_1,void *param_2,int *param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x12) & 0x10) == 0) {
    if (param_5 < 1) {
      *param_3 = 0;
      uVar5 = (ulong)(param_5 == 0);
    }
    else {
      if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
        uVar5 = FUN_100c66640(param_1,param_2,param_3,param_4,param_5);
        return uVar5;
      }
      uVar1 = *(uint *)(lVar2 + 4);
      uVar4 = (ulong)uVar1;
      if (0x20 < uVar4) {
        FUN_100bf2cd0("evp_enc.c",0x1ba,"b <= sizeof ctx->final");
      }
      uVar5 = 0;
      bVar6 = (int)param_1[0x10] != 0;
      if (bVar6) {
        _memcpy(param_2,param_1 + 0x11,uVar4);
        param_2 = (void *)((long)param_2 + uVar4);
      }
      iVar3 = FUN_100c66640(param_1,param_2,param_3,param_4,param_5);
      if (iVar3 != 0) {
        if ((uVar1 < 2) || (*(int *)((long)param_1 + 0x14) != 0)) {
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        else {
          *param_3 = *param_3 - uVar1;
          *(undefined4 *)(param_1 + 0x10) = 1;
          _memcpy(param_1 + 0x11,(void *)((long)param_2 + (long)*param_3),uVar4);
        }
        uVar5 = 1;
        if (bVar6) {
          *param_3 = *param_3 + uVar1;
        }
      }
    }
  }
  else {
    iVar3 = (**(code **)(lVar2 + 0x20))(param_1,param_2,param_4,(long)param_5);
    if (iVar3 < 0) {
      *param_3 = 0;
      uVar5 = 0;
    }
    else {
      *param_3 = iVar3;
      uVar5 = 1;
    }
  }
  return uVar5;
}

