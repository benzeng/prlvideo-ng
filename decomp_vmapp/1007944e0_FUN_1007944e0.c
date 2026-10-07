
undefined8 FUN_1007944e0(undefined8 param_1,long *param_2,uint param_3,undefined1 *param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  ulong uVar5;
  QReadWriteLock local_60 [24];
  _func_void_Node_ptr *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  *param_4 = 0;
  if (param_3 < 9) {
LAB_100794578:
    FUN_100792e00(param_1,&DAT_1011ccbb8);
    return param_1;
  }
  puVar4 = *(undefined4 **)(*param_2 + 0x10);
  bVar2 = *(byte *)(puVar4 + 2);
  if ((0x14 < bVar2) || (((uint)bVar2 << 4 | 9) != param_3)) goto LAB_100794578;
  FUN_100792ab0(local_60,*puVar4,puVar4[1]);
  if (bVar2 != 0) {
    puVar4 = (undefined4 *)((long)puVar4 + 0x15);
    uVar5 = 0;
    do {
      cVar3 = FUN_100793e80(local_60,puVar4[-3],puVar4[-2],puVar4[-1],*puVar4);
      if (cVar3 == '\0') {
        FUN_100792e00(param_1,&DAT_1011ccbb8);
        goto LAB_1007945a8;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar5 < bVar2);
  }
  *param_4 = 1;
  FUN_100792e00(param_1,local_60);
LAB_1007945a8:
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007945d7;
    }
    QHashData::free_helper(local_40);
  }
LAB_1007945d7:
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100794606;
    }
    QHashData::free_helper(local_48);
  }
LAB_100794606:
  QReadWriteLock::~QReadWriteLock(local_60);
  return param_1;
}

