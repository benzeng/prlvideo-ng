
void FUN_1000dddb0(long param_1,int *param_2)

{
  long *plVar1;
  undefined8 in_RAX;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  QMutex::lock();
  uVar6 = (undefined4)((ulong)in_RAX >> 0x20);
  puVar2 = *(uint **)(param_1 + 0x58);
  if ((int)puVar2[2] < (int)puVar2[3]) {
    plVar1 = (long *)(param_1 + 0x58);
    uVar5 = 0;
    do {
      if (1 < *puVar2) {
        FUN_1000e6e10(plVar1,puVar2[1]);
        puVar2 = (uint *)*plVar1;
      }
      uVar6 = (undefined4)((ulong)in_RAX >> 0x20);
      uVar3 = puVar2[2];
      if ((*(int *)(*(long *)(puVar2 + (uVar5 + (long)(int)uVar3) * 2 + 4) + 0x30) == *param_2) &&
         (*(int *)(*(long *)(puVar2 + (uVar5 + (long)(int)uVar3) * 2 + 4) + 0x34) == param_2[1])) {
        iVar4 = (int)uVar5;
        if (-1 < iVar4) {
          if (1 < *puVar2) {
            FUN_1000e6e10(plVar1,puVar2[1]);
            puVar2 = (uint *)*plVar1;
            uVar3 = puVar2[2];
          }
          if (*(int *)(*(long *)(*(long *)(puVar2 + ((long)iVar4 + (long)(int)uVar3) * 2 + 4) + 0x38
                                ) + 0xc) ==
              *(int *)(*(long *)(*(long *)(puVar2 + ((long)iVar4 + (long)(int)uVar3) * 2 + 4) + 0x38
                                ) + 8)) {
            if (2 < DAT_10230ffd0) {
              FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                            *param_2,param_2[1],CONCAT44(uVar6,0xf10));
            }
            FUN_1000c6a60(param_1,param_2);
            if (iVar4 < *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8)) {
              FUN_1000e53a0(plVar1,uVar5 & 0xffffffff);
              FUN_1000df020(param_1);
              FUN_1000df110(param_1);
            }
          }
          goto LAB_1000ddf2e;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)puVar2[3] - (long)(int)uVar3);
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                  param_2[1],CONCAT44(uVar6,0xf08));
  }
  FUN_1000c6a60(param_1,param_2);
LAB_1000ddf2e:
  QMutex::unlock();
  return;
}

