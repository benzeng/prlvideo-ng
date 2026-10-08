
void FUN_100301a40(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  lVar2 = CMessageInfo::data();
  if (((*(long *)(lVar2 + 0x98) == 0) || (*(int *)(*(long *)(lVar2 + 0x98) + 4) == 0)) ||
     (*(long *)(lVar2 + 0xa0) == 0)) {
    uVar3 = FUN_100152280();
    lVar2 = CMessageInfo::data();
    lVar2 = FUN_100152a20(uVar3,lVar2 + 8);
    if (lVar2 == 0) {
      uVar3 = FUN_100152280();
      lVar2 = CMessageInfo::data();
      lVar2 = FUN_1001547d0(uVar3,lVar2 + 8);
      if (lVar2 == 0) {
        return;
      }
    }
    local_38 = 0;
    lVar4 = CMessageInfo::data();
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
    local_38 = 0;
    iVar1 = _PrlEvent_GetJob(uVar3,&local_38);
    if (iVar1 < 0) {
      FUN_100df99c0("[MESSAGE_MNG]","prl_client_app",0,"Failed to extract job from event. RC = %.8X"
                    ,iVar1);
    }
    else {
      lVar4 = CMessageInfo::data();
      local_40 = local_38;
      if (local_38 != 0) {
        _PrlHandle_AddRef();
      }
      pQVar5 = (QObject *)FUN_100304050(lVar2,&local_40);
      piVar6 = (int *)0x0;
      if (pQVar5 != (QObject *)0x0) {
        piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
      }
      piVar7 = *(int **)(lVar4 + 0x98);
      if (piVar7 != piVar6) {
        if (piVar6 != (int *)0x0) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          local_29 = *piVar6 != 0;
          UNLOCK();
          piVar7 = *(int **)(lVar4 + 0x98);
        }
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + -1;
          local_29 = *piVar7 != 0;
          UNLOCK();
          if ((!(bool)local_29) && (*(void **)(lVar4 + 0x98) != (void *)0x0)) {
            operator_delete(*(void **)(lVar4 + 0x98));
          }
        }
        *(int **)(lVar4 + 0x98) = piVar6;
        *(QObject **)(lVar4 + 0xa0) = pQVar5;
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_29 = *piVar6 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          operator_delete(piVar6);
        }
      }
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
    }
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
  }
  return;
}

