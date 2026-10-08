
long * FUN_1009cb200(char param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined4 uVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  long *local_30;
  undefined1 local_21;
  
  local_30 = (long *)0x0;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar3 = FUN_1009e6230(2,&local_30,&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009cb26f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009cb26f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009cb29f;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1009cb29f:
  if (local_30 == (long *)0x0) {
    FUN_100df99c0("","PTProblemReporting",0,
                  "Error : Failed to create problem report obj instance, err 0x%X",uVar3);
    local_30 = (long *)0x0;
  }
  else {
    CProblemReport::setReportType(local_30,0xf);
    if (param_1 == '\0') {
      FUN_1009fe590(local_30,0);
      plVar2 = local_30;
      uVar3 = FUN_100d7e9e0();
      FUN_1009e3ca0(plVar2,uVar3,0);
      plVar2 = local_30;
      pcVar1 = *(code **)(*local_30 + 0x210);
      FUN_100a070e0(&local_48);
      (*pcVar1)(plVar2,&local_48);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return local_30;
          }
          local_21 = 0;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
    else {
      FUN_1009e5200();
    }
  }
  return local_30;
}

