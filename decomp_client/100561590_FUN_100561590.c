
QVariant * FUN_100561590(QVariant *param_1,undefined8 param_2,int *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  QKeySequence *pQVar5;
  Data *local_78 [2];
  QString local_68;
  QString local_60;
  Data *local_58 [2];
  Data *local_48 [2];
  undefined8 local_38;
  undefined1 local_29;
  
  if (((*param_3 < 0) || (iVar1 = param_3[1], iVar1 < 0)) || (*(long *)(param_3 + 4) == 0))
  goto LAB_100561894;
  if (param_4 == 0xd) {
    local_38 = 0x1300000000;
    QVariant::QVariant(param_1,0x15,&local_38,0);
    return param_1;
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      if (param_4 == 0) {
        uVar3 = FUN_1006b9420();
        lVar4 = FUN_1006b94a0(uVar3,param_3[2]);
        if (lVar4 != 0) {
          QAction::text();
          QVariant::QVariant(param_1,&local_60);
          if (*(int *)local_60.field0_0x0 == -1) {
            return param_1;
          }
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            UNLOCK();
            if (*(int *)local_60.field0_0x0 != 0) {
              return param_1;
            }
            local_29 = 0;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          return param_1;
        }
      }
LAB_100561894:
      (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
      (param_1->field0_0x0).field0_0x0.field7 = 0;
      return param_1;
    }
    if (iVar1 != 0) {
      FUN_100df99c0("","prl_client_app",0,"data: invalid display value column %d");
      goto LAB_100561894;
    }
    if (param_4 == 2) {
      FUN_100560f00(local_58,param_2,param_3);
      uVar2 = FUN_100708300(local_58);
      QVariant::QVariant(param_1,SUB41((uVar2 & 2) >> 1,0));
      if (*(int *)local_58[0] == -1) {
        return param_1;
      }
      if (*(int *)local_58[0] != 0) {
        LOCK();
        *(int *)local_58[0] = *(int *)local_58[0] + -1;
        UNLOCK();
        if (*(int *)local_58[0] != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_58[0] + 0xc);
      if (iVar1 != *(int *)(local_58[0] + 8)) {
        lVar4 = (long)*(int *)(local_58[0] + 8) * 8 + (long)iVar1 * -8;
        pQVar5 = (QKeySequence *)(local_58[0] + (long)iVar1 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar5);
          pQVar5 = pQVar5 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
    }
    else {
      if (param_4 != 10) goto LAB_100561894;
      FUN_100560f00(local_48,param_2,param_3);
      uVar2 = FUN_100708300(local_48);
      QVariant::QVariant(param_1,uVar2 & 2);
      if (*(int *)local_48[0] == -1) {
        return param_1;
      }
      if (*(int *)local_48[0] != 0) {
        LOCK();
        *(int *)local_48[0] = *(int *)local_48[0] + -1;
        UNLOCK();
        if (*(int *)local_48[0] != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_48[0] + 0xc);
      local_58[0] = local_48[0];
      if (iVar1 != *(int *)(local_48[0] + 8)) {
        lVar4 = (long)*(int *)(local_48[0] + 8) * 8 + (long)iVar1 * -8;
        pQVar5 = (QKeySequence *)(local_48[0] + (long)iVar1 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar5);
          pQVar5 = pQVar5 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
    }
    goto LAB_10056188a;
  }
  if (param_4 != 0) goto LAB_100561894;
  FUN_100560f00(local_78,param_2,param_3);
  FUN_100708910(&local_68,local_78,0);
  QVariant::QVariant(param_1,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005616de;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1005616de:
  if (*(int *)local_78[0] == -1) {
    return param_1;
  }
  if (*(int *)local_78[0] != 0) {
    LOCK();
    *(int *)local_78[0] = *(int *)local_78[0] + -1;
    UNLOCK();
    if (*(int *)local_78[0] != 0) {
      return param_1;
    }
    local_29 = 0;
  }
  iVar1 = *(int *)(local_78[0] + 0xc);
  local_58[0] = local_78[0];
  if (iVar1 != *(int *)(local_78[0] + 8)) {
    lVar4 = (long)*(int *)(local_78[0] + 8) * 8 + (long)iVar1 * -8;
    pQVar5 = (QKeySequence *)(local_78[0] + (long)iVar1 * 8 + 8);
    do {
      QKeySequence::~QKeySequence(pQVar5);
      pQVar5 = pQVar5 + -8;
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0);
  }
LAB_10056188a:
  QListData::dispose(local_58[0]);
  return param_1;
}

