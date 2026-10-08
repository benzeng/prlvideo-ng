
void FUN_1003266a0(char *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  char cVar2;
  QVariant local_50;
  QVariant local_40;
  QVariant local_30;
  
  if (param_3 != 0) {
    QObject::property((char *)&local_30);
    if ((local_30.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
      QVariant::~QVariant(&local_30);
    }
    else {
      QObject::property((char *)&local_40);
      cVar2 = QVariant::toBool();
      QVariant::~QVariant(&local_40);
      QVariant::~QVariant(&local_30);
      puVar1 = PTR_s_DynProp_SkipFitGuestOnDynResAvai_102270ea0;
      if (cVar2 != '\0') {
        QVariant::QVariant(&local_50,false);
        QObject::setProperty(param_1,(QVariant *)puVar1);
        QVariant::~QVariant(&local_50);
        if (DAT_10230ffd0 < 3) {
          return;
        }
        FUN_100df99c0("","prl_client_app",3,
                      "Fit guest was skiped by check on ID_DYN_PROP_SKIP_FIT_GUEST_ON_DYNRES_AVAILABILITY property."
                     );
        return;
      }
    }
    if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
       (*(long **)(param_1 + 0x78) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x70))();
    }
  }
  return;
}

