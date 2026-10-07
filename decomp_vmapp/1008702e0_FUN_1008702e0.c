
int FUN_1008702e0(long param_1,undefined8 param_2,long *param_3,void *param_4,ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  int local_38;
  int local_34;
  
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  if (*(long *)(lVar1 + 0x20) == 0) {
    uVar6 = *(undefined4 *)(lVar1 + 0x18);
    uVar10 = param_5 & 0xffffffff;
LAB_100870386:
    local_38 = FUN_100870f80(uVar10,param_4,param_2,uVar2,uVar6);
  }
  else {
    iVar4 = FUN_1008946d0();
    if ((long)iVar4 != param_5) {
      FUN_100887ce0(4,0x8e,0x8f,"rsa_pmeth.c",0xca);
      return -1;
    }
    iVar5 = FUN_1008946b0(*(undefined8 *)(lVar1 + 0x20));
    iVar4 = *(int *)(lVar1 + 0x18);
    if (iVar5 == 0x5f) {
      if (iVar4 != 1) {
        return -1;
      }
      iVar4 = FUN_10086ce90(0x5f,param_4,param_5 & 0xffffffff,param_2,&local_34,uVar2);
      local_38 = local_34;
    }
    else {
      if (iVar4 != 1) {
        if (iVar4 == 6) {
          lVar8 = *(long *)(lVar1 + 0x38);
          if (lVar8 == 0) {
            uVar6 = FUN_100891d80(*(undefined8 *)(param_1 + 0x10));
            lVar8 = FUN_10081ddd0(uVar6,"rsa_pmeth.c",0x8c);
            *(long *)(lVar1 + 0x38) = lVar8;
            if (lVar8 == 0) {
              return -1;
            }
          }
          iVar4 = FUN_10086e6e0(uVar2,lVar8,param_4,*(undefined8 *)(lVar1 + 0x20),
                                *(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30));
          if (iVar4 == 0) {
            return -1;
          }
          uVar7 = FUN_100870f50(uVar2);
          param_4 = *(void **)(lVar1 + 0x38);
          uVar6 = 3;
          uVar10 = (ulong)uVar7;
        }
        else {
          if (iVar4 != 5) {
            return -1;
          }
          iVar4 = FUN_100891d80(*(undefined8 *)(param_1 + 0x10));
          uVar10 = param_5 + 1;
          if ((ulong)(long)iVar4 < uVar10) {
            FUN_100887ce0(4,0x8e,0x78,"rsa_pmeth.c",0xe8);
            return -1;
          }
          pvVar9 = *(void **)(lVar1 + 0x38);
          if (pvVar9 == (void *)0x0) {
            uVar6 = FUN_100891d80(*(undefined8 *)(param_1 + 0x10));
            pvVar9 = (void *)FUN_10081ddd0(uVar6,"rsa_pmeth.c",0x8c);
            *(void **)(lVar1 + 0x38) = pvVar9;
            if (pvVar9 == (void *)0x0) {
              FUN_100887ce0(4,0x8e,0x41,"rsa_pmeth.c",0xec);
              return -1;
            }
          }
          _memcpy(pvVar9,param_4,param_5);
          uVar6 = FUN_1008946b0(*(undefined8 *)(lVar1 + 0x20));
          uVar3 = FUN_10086ecb0(uVar6);
          *(undefined1 *)(*(long *)(lVar1 + 0x38) + param_5) = uVar3;
          param_4 = *(void **)(lVar1 + 0x38);
          uVar6 = 5;
        }
        goto LAB_100870386;
      }
      uVar6 = FUN_1008946b0(*(undefined8 *)(lVar1 + 0x20));
      iVar4 = FUN_10086c770(uVar6,param_4,param_5 & 0xffffffff,param_2,&local_38,uVar2);
    }
    if (iVar4 < 1) {
      return iVar4;
    }
  }
  if (-1 < local_38) {
    *param_3 = (long)local_38;
    local_38 = 1;
  }
  return local_38;
}

