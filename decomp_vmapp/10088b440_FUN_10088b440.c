
bool FUN_10088b440(long *param_1,long param_2,uint *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar4 = *param_1;
  if ((*(byte *)(lVar4 + 0x12) & 0x10) == 0) {
    if ((int)param_5 < 1) {
      *param_3 = 0;
      return param_5 == 0;
    }
    iVar2 = *(int *)((long)param_1 + 0x14);
    lVar6 = (long)iVar2;
    if ((lVar6 == 0) && ((*(uint *)((long)param_1 + 0x84) & param_5) == 0)) {
      iVar2 = (**(code **)(lVar4 + 0x20))(param_1,param_2,param_4,(long)(int)param_5);
      if (iVar2 == 0) {
        *param_3 = 0;
        return false;
      }
      *param_3 = param_5;
    }
    else {
      uVar5 = *(uint *)(lVar4 + 4);
      lVar4 = (long)(int)uVar5;
      if (0x20 < lVar4) {
        FUN_10081d560("evp_enc.c",0x14f,"bl <= (int)sizeof(ctx->buf)");
      }
      uVar1 = 0;
      if (iVar2 != 0) {
        if ((int)(iVar2 + param_5) < (int)uVar5) {
          _memcpy((void *)((long)param_1 + lVar6 + 0x38),param_4,(long)(int)param_5);
          *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + param_5;
          *param_3 = 0;
          return true;
        }
        iVar2 = uVar5 - iVar2;
        _memcpy((void *)((long)param_1 + lVar6 + 0x38),param_4,(long)iVar2);
        iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,lVar4);
        if (iVar3 == 0) {
          return false;
        }
        param_5 = param_5 - iVar2;
        param_4 = (void *)((long)param_4 + (long)iVar2);
        param_2 = param_2 + lVar4;
        uVar1 = uVar5;
      }
      *param_3 = uVar1;
      uVar5 = uVar5 - 1 & param_5;
      iVar2 = param_5 - uVar5;
      if (iVar2 != 0 && (int)uVar5 <= (int)param_5) {
        iVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,(long)iVar2);
        if (iVar3 == 0) {
          return false;
        }
        *param_3 = *param_3 + iVar2;
      }
      if (uVar5 != 0) {
        _memcpy(param_1 + 7,(void *)((long)param_4 + (long)iVar2),(long)(int)uVar5);
      }
      *(uint *)((long)param_1 + 0x14) = uVar5;
    }
  }
  else {
    uVar5 = (**(code **)(lVar4 + 0x20))(param_1,param_2,param_4,(long)(int)param_5);
    if ((int)uVar5 < 0) {
      return false;
    }
    *param_3 = uVar5;
  }
  return true;
}

