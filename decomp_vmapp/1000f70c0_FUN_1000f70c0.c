
undefined1 FUN_1000f70c0(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  uint uVar5;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  lVar1 = *(long *)(param_1 + 0xbd00);
  if (lVar1 != *(long *)(param_1 + 0xbcf8)) {
    *(ulong *)(param_1 + 0xbd00) =
         lVar1 + ~((ulong)((lVar1 + -0x18) - *(long *)(param_1 + 0xbcf8)) / 0x18) * 0x18;
  }
  uVar3 = *(ushort *)(param_1 + 8);
  if (uVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    uVar5 = 0;
    do {
      if (*(short *)((long)puVar4 + 0x222) != 0) {
        FUN_1000f7500(param_1,puVar4[1],0);
        FUN_1000f7500(param_1,puVar4[4],0);
        FUN_1000f7500(param_1,puVar4[2],0);
        FUN_1000f7500(param_1,puVar4[3],0);
        FUN_1000f7500(param_1,puVar4[8],0);
        FUN_1000f7500(param_1,puVar4[7],0);
        FUN_1000f7500(param_1,puVar4[5],2);
        FUN_1000f7500(param_1,puVar4[6],2);
        FUN_1000f7500(param_1,*puVar4,1);
        FUN_1000f7500(param_1,puVar4[9],0);
        FUN_1000f7500(param_1,puVar4[10],0);
        FUN_1000f7500(param_1,puVar4[0xb],0);
        FUN_1000f7500(param_1,puVar4[0xc],0);
        FUN_1000f7500(param_1,puVar4[0xd],0);
        FUN_1000f7500(param_1,puVar4[0xe],0);
        FUN_1000f7500(param_1,puVar4[0xf],0);
        FUN_1000f7500(param_1,puVar4[0x10],0);
        uVar3 = *(ushort *)(param_1 + 8);
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0xb7;
    } while (uVar5 < uVar3);
  }
  if (*(short *)(param_1 + 0xb94a) != 0) {
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb730),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb748),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb738),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb740),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb768),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb760),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb750),2);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb758),2);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb728),1);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb770),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb778),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb780),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb788),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb790),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 47000),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb7a0),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb7a8),0);
    FUN_1000f7500(param_1,*(undefined8 *)(param_1 + 0xb960),1);
  }
  local_30 = *(QArrayData **)(param_1 + 0xbce0);
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_23 = *(int *)local_30 != 0;
    UNLOCK();
  }
  uVar2 = FUN_1000f7ab0(param_1,&local_30,param_1 + 0xbcf8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar2;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar2;
}

