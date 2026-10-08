
bool FUN_10018da50(long param_1)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  QArrayData *local_40;
  QVariant local_38;
  int local_24;
  
  bVar7 = true;
  if (*(int *)(param_1 + 0x48) == 0x30000001) {
    plVar1 = *(long **)(param_1 + 0x80);
    pcVar2 = *(code **)(*plVar1 + 0x80);
    local_40 = (QArrayData *)
               QString::fromAscii_helper("Hardware.HibernateState.ShutdownReason",0x26);
    (*pcVar2)(&local_38,plVar1,&local_40);
    iVar4 = QVariant::toInt((bool *)&local_38);
    bVar7 = iVar4 != 1;
    QVariant::~QVariant(&local_38);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        local_24 = CONCAT31(local_24._1_3_,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10018daea;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10018daea:
  if (*(int *)(param_1 + 100) == 3) {
LAB_10018db16:
    uVar6 = *(int *)(param_1 + 0x48) + 0xcfffffff;
    bVar3 = false;
    if ((uVar6 < 5) && ((0x19U >> (uVar6 & 0x1f) & 1) != 0)) {
      bVar3 = bVar7;
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      iVar4 = _PrlAcl_IsAllowed(*(long *)(param_1 + 0x70),0xe,&local_24);
      if (-1 < iVar4) {
        if (local_24 == 0) {
          return false;
        }
        goto LAB_10018db16;
      }
      uVar5 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlAcl_IsAllowed failed. RC = %.8X, (%s)",iVar4
                    ,uVar5);
    }
    bVar3 = false;
  }
  return bVar3;
}

