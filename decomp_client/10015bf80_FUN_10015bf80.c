
void * FUN_10015bf80(long param_1,long param_2,char param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  QString local_78;
  QFileInfo local_70 [8];
  QString local_68;
  QString local_60;
  int *local_58;
  long *local_50;
  long *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_100179800(&local_58,param_1 + 200);
  local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      lVar1 = *(long *)*local_50;
      if ((((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
          (lVar1 = ((long *)*local_50)[1], lVar1 != 0)) &&
         ((iVar3 = FUN_10018bce0(lVar1), iVar3 == 3 && (param_3 == '\0')))) {
        FUN_10018d830(&local_60,lVar1);
        local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x10);
        if (1 < *(int *)local_68.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
        }
        cVar2 = operator==(&local_60,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015c083;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_10015c083:
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015c0b3;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
LAB_10015c0b3:
        if (cVar2 != '\0') {
          if (*local_58 == -1) {
            return (void *)0x0;
          }
          if (*local_58 != 0) {
            LOCK();
            *local_58 = *local_58 + -1;
            UNLOCK();
            if (*local_58 != 0) {
              return (void *)0x0;
            }
            local_31 = 0;
          }
          FUN_100179430(&local_58,local_58);
          return (void *)0x0;
        }
      }
      local_50 = local_50 + 1;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015c107;
    }
    FUN_100179430(&local_58,local_58);
  }
LAB_10015c107:
  local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 8);
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_31 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QFileInfo::QFileInfo(local_70,&local_78);
  cVar2 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10015c171;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10015c171:
  if (cVar2 == '\0') {
    pvVar4 = (void *)0x0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: wrong path to third party format VM.");
  }
  else {
    pvVar4 = operator_new(0x118);
    FUN_10018a130(pvVar4,param_2,param_1 + 0x68,param_1);
    FUN_10015b240(param_1,pvVar4);
  }
  return pvVar4;
}

