
void FUN_1003014b0(undefined8 param_1,CSlotInfo *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  QObject *pQVar6;
  int *piVar7;
  int *piVar8;
  QVariant local_d8;
  undefined *local_c8;
  QVariant local_c0;
  QList local_b0 [8];
  QVariant local_a8;
  QVariant local_98;
  long local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  long local_48;
  long local_40;
  undefined1 local_31;
  
  if (param_2 != (CSlotInfo *)0x0) {
    uVar3 = FUN_100152280();
    lVar4 = CMessageInfo::data();
    lVar4 = FUN_100152a20(uVar3,lVar4 + 8);
    if (lVar4 == 0) {
      uVar3 = FUN_100152280();
      lVar4 = CMessageInfo::data();
      lVar4 = FUN_1001547d0(uVar3,lVar4 + 8);
      if (lVar4 == 0) {
        FUN_100df99c0("[MESSAGE_MNG]","prl_client_app",0,
                      "Invalid server. Failed to extract data from request");
        return;
      }
    }
    local_40 = 0;
    lVar5 = CMessageInfo::data();
    uVar3 = *(undefined8 *)(lVar5 + 0x38);
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
    local_40 = 0;
    iVar2 = _PrlEvent_GetJob(uVar3,&local_40);
    if (iVar2 < 0) {
      FUN_100df99c0("[MESSAGE_MNG]","prl_client_app",0,"Failed to extract job from event. RC = %.8X"
                    ,iVar2);
    }
    else {
      lVar5 = CMessageInfo::data();
      if (((*(long *)(lVar5 + 0x98) == 0) || (*(int *)(*(long *)(lVar5 + 0x98) + 4) == 0)) ||
         (*(long *)(lVar5 + 0xa0) == 0)) {
        lVar5 = CMessageInfo::data();
        local_48 = local_40;
        if (local_40 != 0) {
          _PrlHandle_AddRef();
        }
        pQVar6 = (QObject *)FUN_100304050(lVar4,&local_48);
        piVar7 = (int *)0x0;
        if (pQVar6 != (QObject *)0x0) {
          piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
        }
        piVar8 = *(int **)(lVar5 + 0x98);
        if (piVar8 != piVar7) {
          if (piVar7 != (int *)0x0) {
            LOCK();
            *piVar7 = *piVar7 + 1;
            local_31 = *piVar7 != 0;
            UNLOCK();
            piVar8 = *(int **)(lVar5 + 0x98);
          }
          if (piVar8 != (int *)0x0) {
            LOCK();
            *piVar8 = *piVar8 + -1;
            local_31 = *piVar8 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (*(void **)(lVar5 + 0x98) != (void *)0x0)) {
              operator_delete(*(void **)(lVar5 + 0x98));
            }
          }
          *(int **)(lVar5 + 0x98) = piVar7;
          *(QObject **)(lVar5 + 0xa0) = pQVar6;
        }
        if (piVar7 != (int *)0x0) {
          LOCK();
          *piVar7 = *piVar7 + -1;
          local_31 = *piVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar7);
          }
        }
        if (local_48 != 0) {
          _PrlHandle_Free();
        }
      }
      local_88 = local_40;
      if (local_40 != 0) {
        _PrlHandle_AddRef();
      }
      FUN_100304400(local_80,lVar4,&local_88);
      if (local_88 != 0) {
        _PrlHandle_Free();
      }
      cVar1 = FUN_10019cd90(local_80);
      if (cVar1 != '\0') {
        lVar4 = CMessageInfo::data();
        if (DAT_102271188 == 0) {
          DAT_102271188 = FUN_1001ce5a0("SdkHandleWrap",0xffffffffffffffff,1);
        }
        QVariant::QVariant(&local_98,DAT_102271188,(void *)(lVar4 + 0x38),0);
        QVariant::QVariant(&local_a8,local_60);
        iVar2 = QVariant::type();
        if (iVar2 == 9) {
          QVariant::toList();
          FUN_10012ae80(local_b0,&local_98);
          QVariant::QVariant(&local_c0,local_b0);
          QVariant::operator=(&local_a8,&local_c0);
          QVariant::~QVariant(&local_c0);
          FUN_100035ea0(local_b0);
        }
        else if ((local_a8.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
          QVariant::operator=(&local_a8,&local_98);
        }
        else {
          local_c8 = PTR_shared_null_1021e15e8;
          FUN_10012ae80(&local_c8,&local_98);
          QVariant::QVariant(&local_d8,(QList *)&local_c8);
          QVariant::operator=(&local_a8,&local_d8);
          QVariant::~QVariant(&local_d8);
          FUN_100035ea0(&local_c8);
        }
        QVariant::operator=(local_60,&local_a8);
        CMessageInfo::setCloseSlot(param_2);
        QVariant::~QVariant(&local_a8);
        QVariant::~QVariant(&local_98);
      }
      QVariant::~QVariant(local_60);
      if (local_80[0] != (int *)0x0) {
        LOCK();
        *local_80[0] = *local_80[0] + -1;
        local_31 = *local_80[0] != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_80[0] != (int *)0x0)) {
          operator_delete(local_80[0]);
        }
      }
    }
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
  }
  return;
}

