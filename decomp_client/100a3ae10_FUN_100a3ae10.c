
void FUN_100a3ae10(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  CTaskGenericId local_a0 [24];
  QVariant local_88;
  QArrayData *local_78;
  int *local_70 [4];
  QVariant local_50 [2];
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("SIATOOL","SIAToolClient",2,"[SERVICE] onApplicationStarted");
  }
  *(undefined1 *)(param_1 + 0xa0) = 1;
  FUN_100a45d60(param_1 + 0x90,param_1 + 0xa8);
  if (*(int *)(*(long *)(param_1 + 0x78) + 8) < *(int *)(*(long *)(param_1 + 0x78) + 0xc)) {
    plVar1 = (long *)(param_1 + 0x78);
    lVar4 = 0;
    do {
      uVar2 = CTaskManager::instance();
      local_78 = (QArrayData *)QString::fromAscii_helper("onVmDesktopOpening",0x12);
      puVar3 = (uint *)*plVar1;
      if (1 < *puVar3) {
        FUN_100036c40(plVar1,puVar3[1]);
        puVar3 = (uint *)*plVar1;
      }
      QVariant::QVariant(&local_88,(QString *)(puVar3 + ((int)puVar3[2] + lVar4) * 2 + 4));
      FUN_100a1c6b0(local_70,&local_78,param_1,&local_88);
      puVar3 = (uint *)*plVar1;
      if (1 < *puVar3) {
        FUN_100036c40(plVar1,puVar3[1]);
        puVar3 = (uint *)*plVar1;
      }
      FUN_1001d3460(local_a0,puVar3 + ((int)puVar3[2] + lVar4) * 2 + 4);
      CTaskManager::removeTaskWatcher(uVar2,local_70,local_a0,0x22);
      CTaskGenericId::~CTaskGenericId(local_a0);
      QVariant::~QVariant(local_50);
      if (local_70[0] != (int *)0x0) {
        LOCK();
        *local_70[0] = *local_70[0] + -1;
        local_31 = *local_70[0] != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_70[0] != (int *)0x0)) {
          operator_delete(local_70[0]);
        }
      }
      QVariant::~QVariant(&local_88);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a3afb8;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100a3afb8:
      lVar4 = lVar4 + 1;
    } while (lVar4 < (long)*(int *)(*plVar1 + 0xc) - (long)*(int *)(*plVar1 + 8));
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  if ((*(int *)(param_1 + 0x80) == 0) && (*(char *)(param_1 + 0x84) == '\0')) {
    FUN_100a39dc0(param_1,param_1 + 0x88);
  }
  return;
}

