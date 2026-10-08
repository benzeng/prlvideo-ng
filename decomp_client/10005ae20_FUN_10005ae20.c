
void FUN_10005ae20(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(lVar1,PTR_s_unregisterNotifications_102269a80);
    (*(code *)puVar2)(lVar1,PTR_s_release_1022699b8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

