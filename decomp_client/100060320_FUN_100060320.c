
long FUN_100060320(long param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  char *pcVar8;
  QArrayData *local_78;
  QArrayData *local_68;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (((param_1 == 0) || (puVar4 = (undefined8 *)QWidget::window(), puVar4 == (undefined8 *)0x0)) ||
     ((*(byte *)(puVar4[1] + 0x20) & 1) == 0)) {
    if (DAT_10230ffd0 < 3) {
      return 0;
    }
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",3,
                  "Failed to get context for widget. Window is unavailable.");
    return 0;
  }
  if (3 < DAT_10230ffd0) {
    (**(code **)*puVar4)(puVar4);
    uVar5 = QMetaObject::className();
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",4,"Trying to get context for window %s <%p>",
                  uVar5,puVar4);
  }
  QObject::property((char *)&local_38);
  QVariant::toString();
  QVariant::~QVariant(&local_38);
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  if (*(int *)(local_40 + 4) == 0) {
    if (*(int *)(local_28 + 4) == 0) {
      lVar6 = *(long *)PTR_self_1021e1388;
    }
    else {
      uVar5 = FUN_100152280();
      lVar6 = FUN_100152a20(uVar5,&local_28);
      if (lVar6 == 0) {
        FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "0 != server","Application/CAppContextLogic.mm",0x1a5,"contextForWidget");
        pQVar3 = local_28;
        if (1 < *(int *)local_28 + 1U) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + 1;
          local_19 = *(int *)local_28 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,
                      "(!)Error: can\'t get server: serverUuid=%s",
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_19 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100060709;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_100060709:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_19 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100060785;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
      }
    }
  }
  else {
    if (*(int *)(local_28 + 4) == 0) {
      FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "! serverUuid.isEmpty()","Application/CAppContextLogic.mm",0x198,
                    "contextForWidget");
    }
    uVar5 = FUN_100152280();
    lVar6 = FUN_100154930(uVar5,&local_28,&local_40);
    if (lVar6 == 0) {
      pcVar8 = "contextForWidget";
      uVar7 = 0x19b;
      FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "0 != vm","Application/CAppContextLogic.mm",0x19b,"contextForWidget");
      pQVar3 = local_28;
      if (1 < *(int *)local_28 + 1U) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + 1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar2 = local_40;
      lVar1 = *(long *)(local_58 + 0x10);
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,
                    "(!)Error: can\'t get VM: serverUuid=%s vmUuid=%s",local_58 + lVar1,
                    local_68 + *(long *)(local_68 + 0x10),uVar7,pcVar8);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_19 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100060589;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_100060589:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_19 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1000605b9;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_1000605b9:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_19 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1000605e9;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_1000605e9:
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_19 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100060785;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
  }
LAB_100060785:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000607b5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000607b5:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return lVar6;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return lVar6;
}

