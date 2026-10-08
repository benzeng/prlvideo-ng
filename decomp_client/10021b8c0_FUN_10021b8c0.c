
void FUN_10021b8c0(long *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  char *pcVar4;
  Connection *this;
  Connection local_30 [8];
  Connection local_28 [8];
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
LAB_10021ba3b:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  }
  else {
    if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) &&
       ((QObject *)param_1[6] != (QObject *)0x0)) {
      QObject::removeEventFilter((QObject *)param_1[6]);
    }
    iVar1 = (int)param_1[7];
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        if ((param_3 & 0xfffffffd) != 0) {
          lVar3 = 0;
          if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
            lVar3 = param_1[4];
          }
          iVar1 = FUN_10018a9d0(lVar3);
          if (iVar1 != 0x30000009) {
            FUN_10021baa0(param_1);
            return;
          }
          lVar3 = 0;
          if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
            lVar3 = param_1[4];
          }
          uVar2 = FUN_100192d10(lVar3,0x27f,0,0);
          pcVar4 = "1onVmResumed(PRL_RESULT)";
          this = local_30;
LAB_10021b997:
          QObject::connect(this,uVar2,"2taskFinished(PRL_RESULT)",param_1,pcVar4,0);
          QMetaObject::Connection::~Connection(this);
          return;
        }
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        if (param_3 != 0) {
          if (param_3 == 2) {
            if ((param_2 != 0x3be6) && (param_2 != 0x3c1f)) {
              lVar3 = 0;
              if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
                lVar3 = param_1[4];
              }
              uVar2 = FUN_100193200(lVar3,0xc9);
              pcVar4 = "1onVmSuspended(PRL_RESULT)";
              this = local_28;
              goto LAB_10021b997;
            }
            if ((param_1[5] != 0) && ((*(int *)(param_1[5] + 4) != 0 && (param_1[6] != 0)))) {
              QWidget::close();
            }
            UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
            uVar2 = 0;
            goto LAB_10021ba4a;
          }
          if (param_3 != 3) {
            UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
            goto LAB_10021ba63;
          }
        }
      }
      goto LAB_10021ba3b;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    if ((param_3 & 0xfffffffd) != 0) {
LAB_10021ba63:
      uVar2 = 0;
      goto LAB_10021ba4a;
    }
  }
  uVar2 = 0x80000275;
LAB_10021ba4a:
                    /* WARNING: Could not recover jumptable at 0x00010021ba57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}

