
void * FUN_100787060(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint local_3c;
  long local_38 [2];
  void *local_28;
  
  if (param_2 == 0) {
    pvVar3 = (void *)0x0;
    FUN_100df99c0("","prl_client_app",0,"Invalid perf counter %d",0);
  }
  else {
    local_38[1] = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)((long)puVar1 + 0x14) != 0) {
      puVar6 = puVar1;
      if (*(uint *)(puVar1 + 4) != 0) {
        uVar4 = *(uint *)((long)puVar1 + 0x24) ^ param_2;
        for (puVar2 = *(undefined8 **)
                       (puVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar1 + 4)) * 8);
            (puVar6 = puVar1, puVar2 != puVar1 &&
            ((*(uint *)(puVar2 + 1) != uVar4 ||
             (puVar6 = puVar2, *(uint *)((long)puVar2 + 0xc) != param_2))));
            puVar2 = (undefined8 *)*puVar2) {
        }
      }
      plVar5 = local_38 + 1;
      if (puVar6 != puVar1) {
        plVar5 = puVar6 + 2;
      }
      if ((void *)*plVar5 != (void *)0x0) {
        return (void *)*plVar5;
      }
    }
    local_28 = (void *)0x0;
    pvVar3 = operator_new(0x18);
    FUN_100786470(pvVar3,param_2,*(undefined8 *)(param_1 + 0x18));
    local_28 = pvVar3;
    QObject::connect(local_38,pvVar3,"2hasSubscribersChanged(bool)",*(undefined8 *)(param_1 + 0x18),
                     "1updateSubscriptionState()",0);
    if (local_38[0] != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)local_38);
    local_3c = param_2;
    FUN_1007873b0(param_1 + 0x20,&local_3c,&local_28);
  }
  return pvVar3;
}

