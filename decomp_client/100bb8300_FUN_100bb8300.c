
void FUN_100bb8300(long param_1,undefined8 *param_2,int param_3,undefined8 *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  
  puVar5 = param_4;
  iVar3 = param_3;
  if (param_3 < param_5) {
    puVar5 = param_2;
    iVar3 = param_5;
  }
  iVar2 = param_5;
  if (param_3 <= param_5) {
    iVar2 = param_3;
  }
  if (param_3 < param_5) {
    param_2 = param_4;
  }
  if (iVar2 < 1) {
    FUN_100bb6ca0(param_1,param_2,iVar3,0);
    return;
  }
  uVar4 = FUN_100bb6ca0(param_1,param_2,iVar3,*puVar5);
  *(undefined8 *)(param_1 + (long)iVar3 * 8) = uVar4;
  if (1 < iVar2) {
    if (param_3 <= param_5) {
      param_3 = param_5;
    }
    lVar1 = param_1 + 0x20 + (long)param_3 * 8;
    lVar7 = 0;
    do {
      uVar4 = FUN_100bb8a70(param_1 + 8 + lVar7,param_2,iVar3,
                            *(undefined8 *)((long)puVar5 + lVar7 + 8));
      *(undefined8 *)(lVar1 + -0x18 + lVar7) = uVar4;
      if (iVar2 < 3) {
        return;
      }
      uVar4 = FUN_100bb8a70(param_1 + 0x10 + lVar7,param_2,iVar3,
                            *(undefined8 *)((long)puVar5 + lVar7 + 0x10));
      *(undefined8 *)(lVar1 + -0x10 + lVar7) = uVar4;
      if (iVar2 < 4) {
        return;
      }
      uVar4 = FUN_100bb8a70(param_1 + 0x18 + lVar7,param_2,iVar3,
                            *(undefined8 *)((long)puVar5 + lVar7 + 0x18));
      *(undefined8 *)(lVar1 + -8 + lVar7) = uVar4;
      iVar6 = iVar2 + -4;
      if (iVar6 == 0 || iVar2 < 4) {
        return;
      }
      uVar4 = FUN_100bb8a70(param_1 + 0x20 + lVar7,param_2,iVar3,
                            *(undefined8 *)((long)puVar5 + lVar7 + 0x20));
      *(undefined8 *)(lVar1 + lVar7) = uVar4;
      lVar7 = lVar7 + 0x20;
      iVar2 = iVar6;
    } while (1 < iVar6);
  }
  return;
}

