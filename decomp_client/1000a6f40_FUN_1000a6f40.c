
void FUN_1000a6f40(long *param_1,QString *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  QTypedArrayData<unsigned_short> *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (DAT_100e152b8 != param_3) {
    return;
  }
  plVar4 = (long *)param_1[2];
  uVar1 = *(uint *)(plVar4 + 4);
  if (uVar1 == 0) {
LAB_1000a704a:
    cVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
    if (cVar2 != '\0') {
      local_50 = param_2->field0_0x0;
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      FUN_1007f4f30(param_1,&local_50);
      if (*(int *)local_50 == -1) {
        return;
      }
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return;
        }
        local_31 = 0;
      }
      uVar7 = 2;
      local_40 = (QArrayData *)local_50;
      goto LAB_1000a710c;
    }
    QString::toUtf8();
    FUN_100df99c0("SGAD","prl_client_app",0,
                  "Error: failed to create Shared Guest Applications client for vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return;
    }
    local_40 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      uVar7 = 1;
      local_31 = 0;
      goto LAB_1000a710c;
    }
  }
  else {
    uVar3 = qHash(param_2,*(uint *)((long)plVar4 + 0x24));
    uVar7 = (ulong)uVar3 % (ulong)uVar1;
    plVar6 = *(long **)(plVar4[1] + uVar7 * 8);
    if (plVar6 == plVar4) goto LAB_1000a704a;
    plVar5 = (long *)(plVar4[1] + uVar7 * 8);
    do {
      plVar8 = plVar4;
      if (*(uint *)(plVar6 + 1) == uVar3) {
        cVar2 = operator==(param_2,(QString *)(plVar6 + 2));
        plVar4 = (long *)*plVar5;
        plVar6 = plVar4;
        plVar8 = (long *)param_1[2];
        if (cVar2 != '\0') break;
      }
      plVar4 = plVar8;
      plVar5 = plVar6;
      plVar6 = (long *)*plVar5;
      plVar8 = plVar4;
    } while (plVar6 != plVar4);
    if (plVar4 == plVar8) goto LAB_1000a704a;
    if (DAT_10230ffd0 < 1) {
      return;
    }
    QString::toUtf8();
    FUN_100df99c0("SGAD","prl_client_app",1,
                  "Warning: Shared Guest Applications client already created for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
  }
  uVar7 = 1;
LAB_1000a710c:
  QArrayData::deallocate(local_40,uVar7,8);
  return;
}

