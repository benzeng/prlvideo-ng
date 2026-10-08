
void FUN_1006a6000(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  QVariant local_d0;
  QIcon local_c0 [8];
  QVariant local_b8;
  QString local_a8;
  QVariant local_a0;
  QString local_90;
  QVariant local_88;
  QVariant local_78;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_2 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != action","ActionManager/ActionUpdater/CActionUpdater.cpp",0x65,"updateAction"
                 );
  }
  if (param_3 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != context","ActionManager/ActionUpdater/CActionUpdater.cpp",0x66,
                  "updateAction");
  }
  QObject::property((char *)&local_48);
  uVar5 = QVariant::toInt((bool *)&local_48);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar7 = *(uint *)((long)puVar1 + 0x24) ^ uVar5;
    for (puVar6 = *(undefined8 **)(puVar1[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar6 != puVar1; puVar6 = (undefined8 *)*puVar6) {
      if ((*(uint *)(puVar6 + 1) == uVar7) && (uVar5 == *(uint *)((long)puVar6 + 0xc))) {
        if (puVar6 != puVar1) {
          plVar2 = (long *)puVar6[2];
          QVariant::~QVariant(&local_48);
          if (plVar2 != (long *)0x0) {
            if (param_2 == 0) {
              return;
            }
            (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3);
            bVar3 = (bool)FUN_10069ddc0(plVar2);
            QVariant::QVariant(&local_58,bVar3);
            FUN_1006a5380(param_1,param_2,"visible",&local_58);
            QVariant::~QVariant(&local_58);
            cVar4 = QAction::isVisible();
            if (cVar4 == '\0') {
              QVariant::QVariant(&local_d0,false);
              FUN_1006a5380(param_1,param_2,"enabled",&local_d0);
              QVariant::~QVariant(&local_d0);
              return;
            }
            bVar3 = (bool)FUN_10069ddf0(plVar2);
            QVariant::QVariant(&local_68,bVar3);
            FUN_1006a5380(param_1,param_2,"checked",&local_68);
            QVariant::~QVariant(&local_68);
            bVar3 = (bool)FUN_10069dd20(plVar2);
            QVariant::QVariant(&local_78,bVar3);
            FUN_1006a5380(param_1,param_2,"enabled",&local_78);
            QVariant::~QVariant(&local_78);
            FUN_10069de20(&local_90,plVar2);
            QVariant::QVariant(&local_88,&local_90);
            FUN_1006a5380(param_1,param_2,"text",&local_88);
            QVariant::~QVariant(&local_88);
            if (*(int *)local_90.field0_0x0 != -1) {
              if (*(int *)local_90.field0_0x0 != 0) {
                LOCK();
                *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                local_31 = *(int *)local_90.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006a626f;
              }
              QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
            }
LAB_1006a626f:
            FUN_10069de20(&local_a8,plVar2);
            QVariant::QVariant(&local_a0,&local_a8);
            FUN_1006a5380(param_1,param_2,"iconText",&local_a0);
            QVariant::~QVariant(&local_a0);
            if (*(int *)local_a8.field0_0x0 != -1) {
              if (*(int *)local_a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                local_31 = *(int *)local_a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006a62eb;
              }
              QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
            }
LAB_1006a62eb:
            FUN_10069dfc0(local_c0,plVar2);
            QIcon::operator_cast_to_QVariant((QIcon *)&local_b8);
            FUN_1006a5380(param_1,param_2,"icon",&local_b8);
            QVariant::~QVariant(&local_b8);
            QIcon::~QIcon(local_c0);
            return;
          }
          goto LAB_1006a6348;
        }
        break;
      }
    }
  }
  QVariant::~QVariant(&local_48);
LAB_1006a6348:
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                "0 != stateProvider","ActionManager/ActionUpdater/CActionUpdater.cpp",0x6a,
                "updateAction");
  return;
}

