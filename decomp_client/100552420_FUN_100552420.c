
QVariant * FUN_100552420(QVariant *param_1,long param_2,int *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  QKeySequence local_58 [8];
  QString local_50;
  QKeySequence local_48 [8];
  QString local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  lVar3 = FUN_100552190(param_2,param_3);
  if ((((*(long *)(param_2 + 0x10) != 0) && (-1 < *param_3)) && (iVar1 = param_3[1], -1 < iVar1)) &&
     ((lVar3 != 0 && (*(long *)(param_3 + 4) != 0)))) {
    if (param_4 == 0xd) {
      local_38 = 0x1300000000;
      QVariant::QVariant(param_1,0x15,&local_38,0);
      return param_1;
    }
    if (iVar1 == 2) {
      if (param_4 == 0) {
        FUN_100714b80(local_58,lVar3);
        lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 8);
        iVar1 = QString::compare_helper
                          (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),
                           PTR_s_Mac_OS_X_102274b50,0xffffffff,1);
        FUN_1007170a0(&local_50,local_58,(iVar1 != 0) * '\x02');
        QVariant::QVariant(param_1,&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_29 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005525bf;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_1005525bf:
        QKeySequence::~QKeySequence(local_58);
        return param_1;
      }
    }
    else if (iVar1 == 1) {
      if (param_4 == 0) {
        FUN_100714b50(local_48,lVar3);
        FUN_1007170a0(&local_40,local_48,0);
        QVariant::QVariant(param_1,&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_29 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10055251c;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_10055251c:
        QKeySequence::~QKeySequence(local_48);
        return param_1;
      }
    }
    else if (iVar1 == 0) {
      if (param_4 == 2) {
        uVar2 = FUN_100714bb0(lVar3);
        QVariant::QVariant(param_1,SUB41((uVar2 & 2) >> 1,0));
        return param_1;
      }
      if (param_4 == 10) {
        uVar2 = FUN_100714bb0(lVar3);
        QVariant::QVariant(param_1,uVar2 & 2);
        return param_1;
      }
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"data: invalid display value column %d");
    }
  }
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  return param_1;
}

