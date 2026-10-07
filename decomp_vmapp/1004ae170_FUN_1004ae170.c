
void FUN_1004ae170(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_48 [4];
  long local_38;
  QString local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar3 = FUN_1002a6120(param_2,0,0);
  uVar4 = 0;
  if ((lVar3 != 0) && (uVar4 = 0, 0xf < *(uint *)(lVar3 + 8))) {
    FUN_1002a5990(lVar3,0,local_48,0x10);
    uVar4 = local_48[0];
  }
  if (0 < DAT_1011b55f8) {
    bVar5 = true;
    if (*(char *)(param_1 + 0x8c) == '\0') {
      bVar5 = *(char *)(param_1 + 0x8d) != '\0';
    }
    FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                  "COHERENCE CANNOT START. InProgress=%d; startInProgress=%d; cannotStartReason=%d",
                  bVar5,*(char *)(param_1 + 0x8c),uVar4);
  }
  if ((*(char *)(param_1 + 0x8c) == '\0') && (*(char *)(param_1 + 0x8d) == '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x8c) = 0;
  lVar3 = *(long *)(param_1 + 0x120);
  iVar2 = QString::compare_helper
                    (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),"",0xffffffff,1);
  if (iVar2 != 0) {
    local_30.field0_0x0._4_4_ = 0;
    local_28 = 0;
    local_24 = 0;
    local_38 = 0;
    local_30.field0_0x0._0_4_ = uVar4;
    FUN_1004b43e0(&local_38,0x18,&local_30,0x10);
    if (local_38 != 0) {
      FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),(QString *)(param_1 + 0x120));
    }
  }
  QString::fromUtf8_helper((char *)&local_30,0xa320a0);
  QString::operator=((QString *)(param_1 + 0x120),&local_30);
  piVar1 = (int *)CONCAT44(local_30.field0_0x0._4_4_,local_30.field0_0x0._0_4_);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_38 = CONCAT71(local_38._1_7_,*piVar1 != 0);
      if (*piVar1 != 0) goto LAB_1004ae2f2;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT44(local_30.field0_0x0._4_4_,local_30.field0_0x0._0_4_),2,8);
  }
LAB_1004ae2f2:
  FUN_10052acc0(param_1 + 0xf8);
  return;
}

