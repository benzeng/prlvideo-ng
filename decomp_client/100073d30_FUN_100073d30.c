
void FUN_100073d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  QVariant local_78;
  undefined1 local_68;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_MacPromoWindow_10226aa28,PTR_s_alloc_102268b58)
  ;
  local_58 = (int *)*param_1;
  if (1 < *local_58 + 1U) {
    LOCK();
    *local_58 = *local_58 + 1;
    local_29 = *local_58 != 0;
    UNLOCK();
  }
  local_50 = (int *)param_1[1];
  if (1 < *local_50 + 1U) {
    LOCK();
    *local_50 = *local_50 + 1;
    local_29 = *local_50 != 0;
    UNLOCK();
  }
  local_48 = (int *)param_1[2];
  if (1 < *local_48 + 1U) {
    LOCK();
    *local_48 = *local_48 + 1;
    local_29 = *local_48 != 0;
    UNLOCK();
  }
  local_38 = *(undefined4 *)(param_1 + 4);
  local_40 = param_1[3];
  local_98 = (int *)*param_2;
  uStack_90 = param_2[1];
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + 1;
    local_29 = *local_98 != 0;
    UNLOCK();
  }
  local_88 = param_2[2];
  local_80 = param_2[3];
  QVariant::QVariant(&local_78,(QVariant *)(param_2 + 4));
  local_68 = *(undefined1 *)(param_2 + 6);
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar1,PTR_s_initForPromo_notifyOnClose__102269e50,&local_58,&local_98);
  QVariant::~QVariant(&local_78);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_29 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  FUN_100073f30(&local_58);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_setReleasedWhenClosed__102269e58,1);
  return;
}

