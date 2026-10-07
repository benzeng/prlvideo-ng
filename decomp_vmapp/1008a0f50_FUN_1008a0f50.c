
ulong FUN_1008a0f50(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_40;
  ulong local_38;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(puVar1 + 1) == 0) {
LAB_1008a10a7:
    uVar4 = *(ulong *)puVar1[2];
    if (param_2 != (long *)0x0) {
      _memcpy((void *)*param_2,(void *)((ulong *)puVar1[2])[1],(long)(int)uVar4);
      *param_2 = *param_2 + (long)(int)uVar4;
    }
  }
  else {
    uVar4 = FUN_100884e10();
    uVar8 = 0;
    uVar9 = uVar8;
    local_38 = uVar4;
    if (uVar4 != 0) {
      iVar2 = FUN_100885600(*puVar1);
      if (0 < iVar2) {
        iVar2 = -1;
        lVar6 = 0;
        do {
          lVar5 = FUN_100885620(*puVar1,uVar8);
          uVar9 = uVar4;
          if (*(int *)(lVar5 + 0x10) != iVar2) {
            lVar6 = FUN_100884e10();
            if ((lVar6 == 0) || (iVar2 = FUN_1008852e0(uVar4,lVar6), iVar2 == 0))
            goto LAB_1008a10e1;
            iVar2 = *(int *)(lVar5 + 0x10);
          }
          iVar3 = FUN_1008852e0(lVar6,lVar5);
          if (iVar3 == 0) goto LAB_1008a10e1;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar7;
          iVar3 = FUN_100885600(*puVar1);
        } while ((int)uVar7 < iVar3);
      }
      uVar7 = FUN_1008a5390(&local_38,0,&DAT_100be1650,0xffffffff,0xffffffff);
      uVar4 = (ulong)uVar7;
      iVar2 = FUN_10087cd60(puVar1[2],(long)(int)uVar7);
      uVar9 = local_38;
      if (iVar2 != 0) {
        local_40 = *(undefined8 *)(puVar1[2] + 8);
        FUN_1008a5390(&local_38,&local_40,&DAT_100be1650,0xffffffff,0xffffffff);
        FUN_100885590(local_38,FUN_1008a1700);
        *(undefined4 *)(puVar1 + 1) = 0;
        if ((int)uVar7 < 0) goto LAB_1008a1116;
        uVar7 = FUN_1008a1250(puVar1);
        uVar4 = (ulong)uVar7;
        if ((int)uVar7 < 0) goto LAB_1008a1116;
        goto LAB_1008a10a7;
      }
    }
LAB_1008a10e1:
    FUN_100885590(uVar9,FUN_1008a1700);
    FUN_100887ce0(0xd,0xcb,0x41,"x_name.c",0x13a);
    uVar4 = 0xffffffff;
  }
LAB_1008a1116:
  return uVar4 & 0xffffffff;
}

