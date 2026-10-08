
void FUN_10027bc40(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  QVariant local_30;
  
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1438);
  if (-1 < param_2) {
    QNetworkReply::header(&local_30,*(undefined8 *)(lVar2 + 0x38),1);
    lVar2 = QVariant::toLongLong((bool *)&local_30);
    if (lVar2 == param_1[7]) {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",2,
                      "Content length on primary URL matches expected value %lld",lVar2);
      }
      (**(code **)(*param_1 + 0xb0))(param_1,0);
    }
    else {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",2,
                      "Content length on primary URL (%lld) does not match expected value %lld",
                      lVar2);
      }
      (**(code **)(*param_1 + 0xb0))(param_1,0x80015418);
    }
    QVariant::~QVariant(&local_30);
    return;
  }
  if (1 < DAT_10230ffd0) {
    uVar3 = FUN_100dddcf0(param_2);
    FUN_100df99c0("","prl_client_app",2,
                  "Failed to get content length from the primary URL with RC = %.8X, rc = [%s].",
                  param_2,uVar3);
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    iVar1 = QNetworkReply::error();
    if (iVar1 - 1U < 4) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      uVar3 = 0x80015417;
      goto LAB_10027bda4;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  uVar3 = 0x80015413;
LAB_10027bda4:
                    /* WARNING: Could not recover jumptable at 0x00010027bdb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
  return;
}

