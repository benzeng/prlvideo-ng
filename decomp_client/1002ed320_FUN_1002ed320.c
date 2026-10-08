
undefined8 FUN_1002ed320(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  QArrayData *pQVar4;
  long lVar5;
  int *piVar6;
  char *pcVar7;
  QVariant local_88;
  QArrayData *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int local_50;
  QVariant local_48;
  undefined1 local_31;
  
  lVar5 = *(long *)(param_1 + 0x40);
  if (((lVar5 == 0) || (*(int *)(lVar5 + 4) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_window.data()","Tasks/CTaskResumeWindow.cpp",0x149,"restoreWindowProperties");
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 == 0) goto LAB_1002ed487;
  }
  puVar3 = PTR_s_restorationId_1021ed8f8;
  if ((*(int *)(lVar5 + 4) != 0) && (pcVar7 = *(char **)(param_1 + 0x48), pcVar7 != (char *)0x0)) {
    QVariant::QVariant(&local_48,(QString *)(param_1 + 0x18));
    QObject::setProperty(pcVar7,(QVariant *)puVar3);
    QVariant::~QVariant(&local_48);
    FUN_1000626e0(&local_70);
    local_68 = local_70;
    if (*local_70 != -1) {
      if (*local_70 == 0) {
        QListData::detach((int)&local_68);
        iVar1 = local_68[2];
        if (iVar1 != local_68[3]) {
          local_70 = local_70 + (long)local_70[2] * 2 + 4;
          piVar6 = local_68 + (long)iVar1 * 2 + 4;
          lVar5 = (long)local_68[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)local_70;
            *(int **)piVar6 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar6 = piVar6 + 2;
            local_70 = local_70 + 2;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *local_70 = *local_70 + 1;
        local_31 = *local_70 != 0;
        UNLOCK();
      }
    }
    local_60 = local_68 + (long)local_68[2] * 2 + 4;
    local_58 = local_68 + (long)local_68[3] * 2 + 4;
    local_50 = 1;
    FUN_100036370(&local_70);
    if ((local_50 != 0) && (local_60 != local_58)) {
      do {
        piVar6 = local_60;
        pcVar7 = (char *)0x0;
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (pcVar7 = (char *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
          pcVar7 = *(char **)(param_1 + 0x48);
        }
        QString::toLatin1();
        pQVar4 = local_78;
        lVar5 = *(long *)(local_78 + 0x10);
        FUN_100036660(&local_88,param_1 + 0x38,piVar6);
        QObject::setProperty(pcVar7,(QVariant *)(pQVar4 + lVar5));
        QVariant::~QVariant(&local_88);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002ed5a7;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_1002ed5a7:
        local_60 = local_60 + 2;
        local_50 = 1;
      } while (local_60 != local_58);
    }
    FUN_100036370(&local_68);
    return 0;
  }
LAB_1002ed487:
  FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"(!)Error: invalid window");
  return 0x80000009;
}

