
void FUN_1007958e0(long param_1,ulong param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  CTaskGenericId *pCVar5;
  long *plVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  QObject *pQVar10;
  bool bVar11;
  int *local_90;
  QObject *local_88;
  CTaskGenericId local_80 [24];
  QString local_68;
  int *local_60;
  long *local_58;
  long *local_50;
  uint local_48;
  ulong local_40;
  undefined1 local_31;
  
  local_40 = param_2;
  if (*(int *)(param_3->field0_0x0 + 4) == 0) {
    pcVar9 = "(!)Error: appliance id is not specified";
  }
  else {
    if (param_2 != 0) {
      plVar6 = *(long **)(param_1 + 0x10);
      if (*(uint *)(plVar6 + 4) != 0) {
        uVar8 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)plVar6 + 0x24);
        plVar3 = *(long **)(plVar6[1] + ((ulong)uVar8 % (ulong)*(uint *)(plVar6 + 4)) * 8);
        if (plVar3 != plVar6) {
          do {
            if ((*(uint *)(plVar3 + 1) == uVar8) && (plVar3[2] == param_2)) {
              if (plVar3 != plVar6) {
                uVar4 = FUN_1007974d0(param_1 + 0x10,&local_40);
                FUN_100797cb0(&local_60,uVar4);
                local_58 = (long *)(local_60 + (long)local_60[2] * 2 + 4);
                local_50 = (long *)(local_60 + (long)local_60[3] * 2 + 4);
                local_48 = 1;
                if (local_60[2] == local_60[3]) goto LAB_100795b49;
                goto LAB_1007959e0;
              }
              break;
            }
            plVar3 = (long *)*plVar3;
          } while (plVar3 != plVar6);
        }
      }
    }
    pcVar9 = "(!)Error: server is null or not known to appliance manager";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar9);
  return;
LAB_1007959e0:
  do {
    lVar1 = *(long *)*local_58;
    pQVar10 = (QObject *)0x0;
    if ((lVar1 != 0) && (pQVar10 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
      pQVar10 = (QObject *)((long *)*local_58)[1];
    }
    if ((local_48 == 0) || (pQVar10 == (QObject *)0x0)) {
LAB_100795b27:
      local_58 = local_58 + 1;
      local_48 = 1;
    }
    else {
      CAppliance::getApplianceId();
      cVar2 = operator==(&local_68,param_3);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100795a5b;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_100795a5b:
      if (cVar2 == '\0') goto LAB_100795b27;
      FUN_100860d80(param_1,pQVar10);
      FUN_10007eec0(local_80,param_3);
      pCVar5 = (CTaskGenericId *)CTaskManager::instance();
      plVar6 = (long *)CTaskManager::getTaskById(pCVar5);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x78))(plVar6,0x80000275);
      }
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar10);
      local_90 = piVar7;
      local_88 = pQVar10;
      FUN_1007977e0(uVar4,&local_90);
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar7);
        }
      }
      (**(code **)(*(long *)pQVar10 + 0x20))(pQVar10);
      CTaskGenericId::~CTaskGenericId(local_80);
      local_58 = local_58 + 1;
      uVar8 = local_48 ^ 1;
      bVar11 = local_48 == 1;
      local_48 = uVar8;
      if (bVar11) break;
    }
  } while (local_58 != local_50);
LAB_100795b49:
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      UNLOCK();
      if (*local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100797e40(&local_60,local_60);
  }
  return;
}

