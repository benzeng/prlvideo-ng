
undefined8 FUN_100537ac0(long param_1,long param_2)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  long local_38;
  
  lVar2 = *(long *)(param_1 + 0x30);
  ppVar1 = (pthread_mutex_t *)(lVar2 + 0x10);
  local_38 = param_2;
  _pthread_mutex_lock(ppVar1);
  iVar4 = FUN_100046530(lVar2 + 8,&local_38);
  _pthread_mutex_unlock(ppVar1);
  cVar3 = '\x01';
  if (iVar4 == 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    QMutex::lock();
    if (*(long *)(lVar2 + 0x20) == param_2) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
      QMutex::unlock();
    }
    else {
      QMutex::unlock();
      cVar3 = FUN_100537c50(*(long *)(param_1 + 0x40) + 0x30,param_2);
    }
  }
  uVar8 = 0;
  if (3 < *(ushort *)(param_2 + 0x14)) {
    puVar5 = (undefined4 *)FUN_1002a6010(param_2);
    uVar8 = *puVar5;
  }
  if (1 < DAT_1011b55f8) {
    pcVar7 = "pending";
    if (cVar3 != '\0') {
      pcVar7 = "cancelled";
    }
    FUN_1008e3970("","InvSharingHost",2,"request 0x%08x, opid = %u %s",*(undefined4 *)(param_2 + 8),
                  uVar8,pcVar7);
  }
  uVar6 = 0xffffffff;
  if (cVar3 != '\0') {
    uVar6 = 0xf0000000;
  }
  return uVar6;
}

