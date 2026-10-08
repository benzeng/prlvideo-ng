
bool FUN_100d2f720(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  QFileInfo local_60 [8];
  int *local_58;
  QString *local_50;
  QString *local_48;
  undefined4 local_40;
  int *local_38;
  undefined1 local_29;
  
  plVar3 = (long *)FUN_100d2f630();
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)FUN_100d2fb50(param_1);
  }
  bVar8 = true;
  if (plVar3 != (long *)0x0) {
    local_38 = (int *)PTR_shared_null_1021e15e8;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
    local_58 = local_38;
    if (*local_38 != -1) {
      if (*local_38 == 0) {
        QListData::detach((int)&local_58);
        iVar7 = local_58[2];
        if (iVar7 != local_58[3]) {
          piVar5 = local_38 + (long)local_38[2] * 2 + 4;
          piVar6 = local_58 + (long)iVar7 * 2 + 4;
          lVar4 = (long)local_58[3] * 8 + (long)iVar7 * -8;
          do {
            piVar1 = *(int **)piVar5;
            *(int **)piVar6 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_29 = *piVar1 != 0;
              UNLOCK();
            }
            piVar6 = piVar6 + 2;
            piVar5 = piVar5 + 2;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *local_38 = *local_38 + 1;
        local_29 = *local_38 != 0;
        UNLOCK();
      }
    }
    local_50 = (QString *)(local_58 + (long)local_58[2] * 2 + 4);
    local_48 = (QString *)(local_58 + (long)local_58[3] * 2 + 4);
    if (local_58[2] != local_58[3]) {
      iVar7 = 1;
      do {
        local_40 = 1;
        QFileInfo::QFileInfo(local_60,local_50);
        cVar2 = QFileInfo::isRelative();
        QFileInfo::~QFileInfo(local_60);
        if (cVar2 != '\0') goto LAB_100d2f86d;
        local_50 = local_50 + 1;
      } while (local_50 != local_48);
    }
    local_40 = 1;
    iVar7 = 2;
LAB_100d2f86d:
    FUN_100039a80(&local_58);
    FUN_100039a80(&local_38);
    bVar8 = iVar7 == 2;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return bVar8;
}

